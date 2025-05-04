/* hw4-5.c */
#include <stdio.h>
#include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	float num=28.47f;
	printf("num=%07.2f\n",num);
	
	system("pause");
    return 0;
}
