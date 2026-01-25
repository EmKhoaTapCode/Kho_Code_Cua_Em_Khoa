#include <stdio.h>

int main() {
    float mark_1, mark_2, mark_3, rate_1, rate_2, rate_3, TB;

    printf("Nhap diem qua trinh (mark_1) : ");
    scanf("%f", &mark_1);
    printf("Nhap ti le diem qua trinh (rate_1) : ");
    scanf("%f", &rate_1);

    printf("Nhap diem giua ki (mark_2) : ");
    scanf("%f", &mark_2);
    printf("Nhap ti le diem giua ki (rate_2) : ");
    scanf("%f", &rate_2);

    printf("Nhap diem cuoi ki (mark_3) : ");
    scanf("%f", &mark_3);

    TB = (mark_1 * rate_1) + (mark_2 * rate_2) + (mark_3 * (1 - rate_1 - rate_2));
    printf("\nDiem trung binh (TB) HP NMLT cua sinh vien la : %.2f", TB);
    if (TB >= 5) {
        printf("Sinh vien da dat HP NMLT\n");
    } else {
        printf("Sinh vien da rot HP NMLT\n");
    }

    return 0;
}
