/* hw2_10.c 修正prog2_2, main()函數本體與程式區塊 */
#include <stdio.h>
#include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	int i=2;  /* 宣告整數i, 其預設值為2 */
	if(i<5)
	{
		printf("變數值i 小於5\n");
		
	}
    system("pause");
    return 0;
}
