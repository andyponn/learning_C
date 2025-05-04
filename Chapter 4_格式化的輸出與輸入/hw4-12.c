/* hw4-12.c */
#include <stdio.h>
#include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	char char1[15],char2[15];
	printf("請輸入姓氏:");
	scanf("%s",&char1);               
	
	fflush(stdin);
	
	printf("請輸入名字:");
	scanf("%s",&char2);
	  
	printf("你的名字為:%s\n你的姓氏為:%s\n",char2,char1);
	
	system("pause");
    return 0;
}
