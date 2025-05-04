/* hw4-7.c */
#include <stdio.h>
#include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	float num=12.34f;
	printf("num=%+08.2f\n",num);
	
	system("pause");
    return 0;
}
