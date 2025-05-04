/* hw4-13.c */
#include <stdio.h>
#include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	char char1[10],char2[10],char3[10];
	
	printf("以雙字號將字串包圍:");
	scanf("%s",&char1); 
	printf("\"%s\"\n",char1);    
	              
	fflush(stdin);
	
	printf("以反斜線將字串包圍，印出的欄寬為20:");
	scanf("%20s",&char2);
	printf("\\%20s\\\n",char2);
	
	fflush(stdin);
	
	printf("以反斜線將字串包圍，印出的欄寬為20，靠左輸出:");
	scanf("%20s",&char3);
	printf("\\%-20s\\",char3);
	system("pause");
    return 0;
}
