/* prog3_9, 浮點數的列印 */
# include <stdio.h>
# include <stdlib.h>
int main(void)
{
	float num1=123.45F;                       /* 宣告num1為浮點數，並設值為123.45F */
	float num2=4.56E-3F;                       /* 宣告num2為浮點數，並設值為4.56E-3F */
	printf("num1=%e\n", num1);			      /* 以指數型態列印出num1 */
	printf("num2=%f\n", num2);			      /* 以浮點數型態列印出num2 */
	

	system("pause");
	return 0;

}
