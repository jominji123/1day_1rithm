#include <stdio.h>
#include <string.h>

int main() {
	char str[102];
	while (1) {
		fgets(str, 100, stdin);
		str[strlen(str) - 1] = '\0';
		if (str[strlen(str) - 1] == NULL) break;

		fputs(str, stdout);
	}
	return 0;
}