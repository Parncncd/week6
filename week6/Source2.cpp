#include<stdio.h>
void Space() {

	printf(" ");

}
void Star() {

	printf("*");

}
int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i- 1; j++) {
			Space();
		}
		for (int j = 1; j <= ((2 * n) - 1)-2*i; j++) {
			Star();
		}
		printf("\n");
	}
	return 0;
}