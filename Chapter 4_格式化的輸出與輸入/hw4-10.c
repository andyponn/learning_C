/* hw4-10.c */
#include <stdio.h>
#include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	int num1,num2;
	printf("請輸入2個整數，並以空白鍵隔開:");
	scanf("%d %d",&num1,&num2);               

	printf("%d x %d = %d\n",num1,num2,num1*num2);
	
	system("pause");
    return 0;
}
