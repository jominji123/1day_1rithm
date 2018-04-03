#include <stdio.h>
#define NUM 10000

int checknum(int num) {
	int ans = num;
	while (1) {
		if (num == 0) break;
		ans = ans + (num % 10);
		num = num / 10;
	}
	// 76/10=7 , 76%10=6
	return ans;
}

int main() {
	int arr[NUM+1];
	int acceptnum;

	//init
	for (int i = 0; i < NUM; i++) {
		arr[i+1] = 0;
		//printf("arr[%d] : %d\n", i + 1, arr[i + 1]);
	}
	
	//check
	for (int i = 1; i < NUM; i++) {
		acceptnum=checknum(i);
		if (acceptnum < NUM + 1) {
			//printf("######### %d\n", acceptnum);
			arr[acceptnum] = 1;
		}
	}

	for (int i = 1; i < NUM+1; i++) {
		if (arr[i] == 0) {
			printf("%d\n", i);
		}
	}


}