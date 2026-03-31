#include<stdio.h>

void Nhap(int *a, int *b, int *n){
	do{
		printf("Nhap mot so n nguyen duong : ");
		scanf("%d",n);
	}while(*n <= 0);
	do{
		printf("Nhap mot so nguyen duong < n : ");
		scanf("%d%d",a,b);
	}while(*a > *n || *b > *n || *a <= 0 || *b <= 0 );
}

int tinhtong(int a, int b, int n){
	int i,s = 0 ;
	for(i = 1 ; i < n ; i++)
		if(i%a == 0 && i%b !=0)
			s = s + i;
	return s;
		
}
//
int main() {
	int x, y, m;
	Nhap(&x,&y,&m);
	printf("Tong can tim la : %d" , tinhtong(x, y, m));
    return 0;


	
}
