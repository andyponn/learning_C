/* hw4-15.c */
#include <stdio.h>
#include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	int num;
	
	printf("請輸入一個16進位的整數:");
	scanf("%x",&num); 
	printf("%d的 8進位為:%o\n",num,num);
	printf("%d的10進位為:%d\n",num,num);    
	              
	system("pause");
    return 0;
}
