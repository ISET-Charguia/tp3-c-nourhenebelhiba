/*
 ============================================================================
 Name        : ex7tp3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{	int r,k,x,y,s;
char c;
do {
	printf("donner un entier \n");
	scanf("%d", &x);
} while (x < 0);
k=1;
s=0;
do

{
	r = x% 2;
	y=r*k;
	s=s+y;
	k=k*10;

	x = x/ 2;
}while (x != 0);
printf("%d",s);

}
