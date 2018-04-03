#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
find small num than x
*/

int main() {
	int n, x;
	scanf("%d %d", &n, &x);

	int *numPtr = (int *)malloc(sizeof(int)*n);
	
	for (int i = 0; i < n; i++) {
		numPtr[i] = 0;
	}
	
	for (int j = 0; j < n; j++) {
		scanf("%d", &numPtr[j]);
	}

	
	for (int k = 0; k < n; k++) {
		if (numPtr[k] < x) {
			printf("%d ", numPtr[k]);
		}
	}

	free(numPtr);

	return 0;
}