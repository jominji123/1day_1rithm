#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
find second big num
N(N-1) N^2 time complexity
*/
int main()
{
	int num1, num2, num3,temp;
	int arr[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
	}
	for (int j = 0; j < 3; j++) {
		for (int k = 0; k < 2; k++) {
			if (arr[k] < arr[k + 1]) {
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}

	printf("%d",arr[1]);

	return 0;
}