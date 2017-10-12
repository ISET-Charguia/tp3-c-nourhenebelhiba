/*
 ============================================================================
 Name        : ex4tp3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
	int i,s,y;
	for (i=1;i<100;i++)
	{
	s=0;
	for(y=1;y<i;y++)
	{
		if(y%i==0)
	s=s+y;
	}
	if
	(i==s)
	printf (" %d c'est un nbr parfait ",i);

	}
return 0;
}
