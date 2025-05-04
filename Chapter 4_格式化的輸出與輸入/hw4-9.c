/* hw4-9.c */
#include <stdio.h>
#include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	int num;
	scanf("%d",&num);              /*錯誤所在num應修正為&num*/
	printf("num=%d\n",num);
	
	system("pause");
    return 0;
}
