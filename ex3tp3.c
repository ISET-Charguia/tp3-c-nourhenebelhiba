/*
 ============================================================================
 Name        : ex3tp3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{ int s,n,i;
	do
	{	printf (" donner un entier ");
		scanf ("%d",&n);
	}while (!(n>=1));
		s=1;
		for (i=2;i<=n;i++)
		{
			if (n%i==0)
					s=s+1;

		}
		if (s==2)
			printf ("%d est premier ",n);
		else
			printf ("%d est non premier ",n);
		return 0;
}
