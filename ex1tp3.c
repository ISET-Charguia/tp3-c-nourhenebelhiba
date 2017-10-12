/*
 ============================================================================
 Name        : ex1tp3.c
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
	int x,f,j;
	do
	{	printf("donner un entier positif");
	     scanf("%d",&x);
	}while(x<0);
	f=1;
	j=1;
	while(j<=x)
		{
		f=f*j;
				j++;
		}
	printf("la factoriel de %d est %d",x,f);
	return 0;

}
