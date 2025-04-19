/* hw3-19, 型態轉換的練習 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num1=5, num2=8;
	printf("%d\n", num1/num2);
	printf("modified result: %f\n", (float)num1/(float)num2);
	
    system("pause");
    return 0;
}

/*因為整數相處只取商數所以原始output為0*/