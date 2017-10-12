/*
 ============================================================================
 Name        : ex2tp3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, r, pgcd;
	do {
		printf(" donner deux entier a et b non nuls");
		scanf("%d %d", &a, &b);
	} while (!((a > 0) && (b > 0)&&(a>b)));
	r = 1;
	while (r != 0) {
		r = a % b;
		if (r == 0)
			pgcd = b;
		else {
			a = b;
			b = r;
		}
	}
	printf (" le pgcd est %d",pgcd);
	return 0;
}
