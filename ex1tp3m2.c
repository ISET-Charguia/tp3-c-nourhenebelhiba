/*
 ============================================================================
 Name        : ex1tp3m2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int x,f,j;
	do
	{	printf("donner un entier positif");
	     scanf("%d",&x);
	}while(x<0);
	f=1;
	j=1;
	do
		{
		f=f*j;
				j++;
		}while(j<=x);
	printf("la factoriel de %d est %d",x,f);
return 0;
}
