#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, num[1000],temp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", num[i]);
	}

}