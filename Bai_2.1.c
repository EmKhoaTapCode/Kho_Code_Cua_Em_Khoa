#include <stdio.h>
float tinh(float a, float b, char c) {
	switch(op) {
	    case'+' :return a + b ;
		case'-' :return a - b ;
		case'*' :return a * b ;
		case'/' :
		     if(b ==0) return a / b;
		     else {
				 printf("Loi chia cho 0!\n");
				 return 0;
			 }
	    default :printf("Phep toan khong hop le ");return 0 ;
	}
}

int main() {
	float x, y;
	char ptoan;
	printf("Nhap 2 so thuc : ");
	scanf("%f %f , &x , &y)");
	printf("Nhap phep toan : ");
	scanf(" %c", &ptoan);
	
	printf("Ket quan : %.2f\n" , tinh(x, y, ptoan));
	return 0;	
}
