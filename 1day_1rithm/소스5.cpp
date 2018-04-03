#include <stdio.h>
#include <math.h>

int checknum(int num) {
	int savenum = num;
	bool flag = true;
	int arr[4] = { 0,0,0,0 };
	int pos = 0;
	
	//sprite the num & count the digit =>pos
	while (1) {
		if (num == 0) break;
		arr[pos] = num % 10;
		num = num / 10;
		//printf("#### digit num ##### arr[%d] : %d\n", pos,arr[pos]);
		pos++; //1 2 3  pos 3..... 
	}
	//calculate the 2 num sub(abs) & save box arr
	int box[3] = { 0,0,0 };
	for (int i = 0; i < pos-1; i++) { //0,1 pos-1=2
		box[i] = arr[i] - arr[i+1 ];
		//printf("i'm here box[%d]\n",box[i]);
	}
	//check if box value is all same that means arithmetic sequence
	for (int i = 0; i < pos - 2; i++) { //0,1 pos-2=1 
		//printf("i'm here box %d , %d\n", box[i],box[i+1]);
		if (pos == 2) {
			flag = true;
			break;
		}
		if (box[i] != box[i + 1]) {
			flag = false;
			break;
		}
		if (i == pos - 1) {
			flag = true;
		}
	}
	//printf("%s\n", flag ? "ture" : "false");

	if (flag == true) {
		//printf("### what the fuck : %d\n", savenum);
		return savenum;
	}
	else
		return 0;
	

	// 76/10=7 , 76%10=6
}

int main() {
	int n,result,cnt=0;
	scanf("%d", &n);

	for (int i = 1; i <= n ; i++) {
		result=checknum(i);
		//printf("%d\n", result);
		if (result != 0) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
}