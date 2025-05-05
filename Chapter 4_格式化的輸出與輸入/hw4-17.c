/* hw4-17.c ，輸入字串的錯誤*/
#include <stdio.h>
#include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	char ch1, ch2;
	
	printf("請輸入第一個字元:");
	scanf("%c",&ch1); 
	
	fflush(stdin);
	
	printf("請輸入第二個字元:");
	scanf("%c",&ch2);
	
	printf("ch1=%c, ch2=%c\n",ch1,ch2); 
	
              
	system("pause");
    return 0;
}
