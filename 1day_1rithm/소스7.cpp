#include <stdio.h>
#include <string.h>

int main() {
	
	char list[1000001];

	int space = 0; //count ' '
	int nullindex = 0; //find EOF \0

	scanf("%[^\n]s", list);

	//check last index
	for (int i = 0; i < 1000001; i++) {
		if (list[i] == '\0') {
			//printf("\nlist[%d]  %d\n", i,list[i]);
			nullindex = i;
			break;
		}
	}

	for (int i = 0; i <= nullindex; i++) {
		if (list[i] == ' ') space++;
	}

	//printf("######## %d\n", space);
	if (list[0] == ' ') space--; // ' '\0
	if (list[nullindex - 1] == ' '&& nullindex !=0) space -= 1;
	if (nullindex==0 ) space = -1;


	printf("%d", space + 1);


	//�ݷ�: �������� �����ϰų�, �����°�,���� 1���� ����
	// null�� ���� 
}