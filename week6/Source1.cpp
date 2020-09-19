#include <stdio.h> 
void triUp(int n) {
	int i = 0;
	while (i <= n) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
			if (j == i) {
				printf("\n");
			}
		}
		i++;
	}
}
int main3() {
	int n;
	scanf_s("%d", &n);
	triUp(n);
	return 0;
}
