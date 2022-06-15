#include<stdio.h>
#include<stdlib.h>
int l;
int main()
{
	// E is a start symbol.
	E();

	// if lookahead = $, it represents the end of the string
	// Here l is lookahead.
	if (l == '$')
		printf("Parsing Successful");
}

// Definition of E, as per the given production
E()
{
	if (l == 'i') {
		match("i");
		Ep();
	}
}

// Definition of E' as per the given production
Ep()
{
	if (l == '+') {
		match("+");
		match("-");
		E'();
	}//The second condition of E'
	else if ( l == 'e' )
	{
	match("e");
	}
		return 0;
}

// Match function
match(char t)
{
	if (l == t) {
		l = getchar();
	}
	else
		printf("Error");
}

