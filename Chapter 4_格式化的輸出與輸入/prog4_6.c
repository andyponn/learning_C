/* prog4_6, 將10進為整數以不同的進位系統做輸出 */
# include <stdio.h>
# include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{   
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	
    printf("42的八進位是 %o\n",42);        	
	printf("42的十六進位是%x\n",42);	
	
	system("pause");
	return 0;

}

