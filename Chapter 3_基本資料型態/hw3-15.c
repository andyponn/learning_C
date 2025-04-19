/* hw3-15, 數字精度的問題 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float num1=30000.1F;
	float num2=0.0004F;
	printf("result: %f\n", num1+num2);
	
	double num3=30000.1;
	double num4=0.0004;
	printf("result after modified to doble: %.4f\n", num3+num4);
	
    system("pause");
    return 0;
}


/* (a) 30000.099609 */
/* (b) 浮點數只有7-8個數字的精度*/
/* (c) 使用倍精浮點數來達成數字的精度*/