/* hw4-16.c ，輸入字串的錯誤*/
#include <stdio.h>
#include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	char str[25], ch;
	
	printf("Input a string:");
	scanf("%s",str); 
	printf("The string is %s\n",str); 
	
	              
	system("pause");
    return 0;
}
