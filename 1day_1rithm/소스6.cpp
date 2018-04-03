#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);
	
	//printf("input num : %d\n", n);

	if (n == 1) {
		printf("%d\n", 1);
	}
	else if (n > 1000000000) {
		//
	}
	else {
		int room = 2;
		int start = 2, fin = 7;
		for (;;) {
			//printf("### start : %d , fin : %d\n", start, fin);
			if ((start <= n) && (n <= fin)) {
				printf("%d\n", room);
				break;
			}
			else {
				//printf("here ...room num : %d\n", room);
				start = fin + 1;
				fin = start + (6 * (room))-1;
				room++;
			}
		}
	}

}