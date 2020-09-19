#include<stdio.h>
void space() {
	
		printf(" ");
	
}
void star() {

		printf("*");
	
}
int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n-i; j++) {
			space();
		}
		for (int j = 1; j <= (2*i) - 1; j++) {
			star();
		}
		printf("\n");
	}
	return 0;
}