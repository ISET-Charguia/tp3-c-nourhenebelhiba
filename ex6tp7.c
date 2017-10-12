/*
 ============================================================================
 Name        : ex6tp7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{ int x,u,i,c,j,d,t;
	printf ("donner un entier ");
scanf ("%d",&x);
u=x;
		for(i=1;i<=u;i++)
		{
			printf (" ");
		}
		printf("*");
		c=1;
				for (j=1;j<x;j++)
				{
					c=c+2;
				    printf("\n");
					u=u-1;
					for(d=1;d<=u;d++)
					{
						printf (" ");
					}
					for(t=1;t<=c;t++)
					{
					printf("*");
					}
				}

	return 0 ;

}
