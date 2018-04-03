#include <stdio.h>
#include <stdlib.h>

int main() {
	float n,maxnum,sum=0;
	scanf("%f", &n);

	float *numPtr = (float *)malloc(sizeof(float)*n);

	//init
	for (int i = 0; i < n; i++) {
		numPtr[i] = 0;
	}

	//put num
	for (int j = 0; j < n; j++) {
		scanf("%f", &numPtr[j]);
	}

	//find max
	maxnum = numPtr[0];
	for (int k = 1; k <= n; k++) {
		if (maxnum < numPtr[k]) {
			maxnum = numPtr[k];
		}
	}

	//calculate sum
	for (int k = 0; k < n; k++) {
		sum = sum + ((numPtr[k] / maxnum) * 100);
	}

	printf("%.2f", sum / n);
	return 0;

}