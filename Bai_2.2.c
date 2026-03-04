#include <stdio.h>

float tinhS(int n) {
	float s = 0;
	for (int i = 1; i <= n; i++) s += 1.0/i;
	return s;
}

float tinhT(int n) {
	float t = 0;
	for (int i = 1; i <= n; i++) t += 1.0/(i*i);
	return t;	
}

int main() {
	int n;
	printf("Nhap mot so n : ");
	scanf("%d", &n);
	if (n > 0 ) {
		printf("S = %.4f\n", tinhS(n));
		printf("T = %.4f\n", tinhT(n));		
	}
	return 0;
}
