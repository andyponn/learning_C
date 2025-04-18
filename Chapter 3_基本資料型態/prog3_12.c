/* prog3_12, 資料型態的轉換 */
# include <stdio.h>
# include <stdlib.h>
int main(void)
{
	int n1, n2;                   
	float num1=1.3002F, num2=3.988F;                
	
	n1=(int) num1;   /* 浮點數num1轉化成整數 */
	n2=(int) num2;
	
	printf("num1=%f, num2=%f\n", num1,num2);			      /* 印出浮點數之值 */
	printf("n1=%d, num2=%d\n", n1,n2);			      /* 印出浮點數轉成整數之值 */
	
	system("pause");
	return 0;

}

