/* prog3_10, float跟double的比較 */
# include <stdio.h>
# include <stdlib.h>
int main(void)
{
	float num1=123.456789012345F;                       /* 宣告num1為浮點數，並設值為123.456789012345F */
	double num2=123.456789012345;                       /* 宣告num2為倍精度浮點數，並設值為123.456789012345 */
	printf("num1=%16.12f\n", num1);			      /* 印出浮點數num1的值 */
	printf("num2=%16.12f\n", num2);			      /* 列印出倍精度浮點數num2的值 */
	
	system("pause");
	return 0;

}

/* %16.12f 以16個字元欄寬來列列印浮點數; 小數點後12位 */