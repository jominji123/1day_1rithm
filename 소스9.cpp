#include <stdio.h>
#include <string.h>
#define MAX 10001

typedef struct stack {
	int Stack[MAX];
	int size;
	int empty;
	int top;
}stack;

stack Stk;
void push(int d,stack &Stk);
void pop(stack &Stk);
void top(stack &Stk);

int main() {
	Stk.empty = 1, Stk.size = 0;
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		char str[10];
		scanf("%s", str);
		
		if (strcmp(str, "push") == 0) {
			int input;
			scanf("%d", &input);
			push(input,Stk);
		}
		else if (strcmp(str, "pop") == 0) {
			pop(Stk);
		}
		else if (strcmp(str, "size") == 0) {
			printf("%d\n", Stk.size);
		}
		else if (strcmp(str, "empty") == 0) {
			printf("%d\n", Stk.empty);
		}
		else if (strcmp(str, "top") == 0) {
			top(Stk);
		}

		//printf(" info \n size %d / empty %d / top %d \n", Stk.size, Stk.empty, Stk.top);
	}
}


void push(int d,stack &Stk) {
	Stk.Stack[Stk.size] = d;
	Stk.size++;
	Stk.empty = 0;
	Stk.top = d;
}

void pop(stack &Stk) {
	if (Stk.empty==1) {
		printf("-1");
		return;
	}
	else if (Stk.size == 1) {
		Stk.empty = 1;
		printf("%d\n", Stk.top);
		Stk.size--;
		Stk.top = -1;
	}
	else {
		printf("%d\n", Stk.top);
		Stk.size--;
		Stk.top = Stk.Stack[Stk.size - 1];
	}

	
	//printf("%d \n", Stk.size, Stk.Stack[Stk.size-1]);

}

void top(stack &Stk) {
	if (Stk.empty == 1) {
		printf("-1");
		return;
	}
	printf("%d\n", Stk.top);
}

void empty() {

}


