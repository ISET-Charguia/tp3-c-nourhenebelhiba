/*
 ============================================================================
 Name        : ex5tp3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
int x, y, i, j;
	do
	{	printf (" donner dle longueur");
		scanf ("%d",&x);
		printf ("donner le largeur ");
		scanf ("%d",&y);
	}while (!((x>0)&&(y>0)));

	for(i=1;i<=y;i++)
		{
			printf("\n");
			for(j=1;j<=x;j++)
			{
				printf("*");
			}
		}
return 0 ;
}
