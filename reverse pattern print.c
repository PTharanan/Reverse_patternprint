/*
 ============================================================================
 Name        : reverse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, n, j;
	printf("Enter last number: ");
	scanf("%d", &n);
	for (i = n; i >= n; i--) {
		for (j = 0; j < i; j--) {
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
