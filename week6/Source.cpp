#include<stdio.h>
void tri(int n) {
int i=0;
	while (i <= n) {
		for (int j = n; j >=i ; j--) {
			printf("* ");
			if (j == i) {
				printf("\n");
			}
		}
		i++;
	}
}
int main() {
	int n;
	scanf_s("%d", &n);
	tri(n);
	return 0;
}