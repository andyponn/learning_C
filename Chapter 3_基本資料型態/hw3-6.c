/* hw3-6.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float num1=-9.5e-4F;
	float num2=3.78e+5F;
	float num3=5.12e-2F;
	double num4=6.1732e+12;  /*不要在 double 常數後面加 f，因為那會強制變成 float，精度會損失。*/
	
	printf("num1=%f\n", num1);
	printf("num2=%f\n", num2);
	printf("num3=%f\n", num3);
	printf("num4=%.6f\n", num4);
	
    system("pause");
    return 0;
}
