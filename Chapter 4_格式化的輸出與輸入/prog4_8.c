/* prog4_8, 整數資料以其他型態輸出, 修正4_7錯誤的範例 */
# include <stdio.h>
# include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{   
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	
	int a=15;
    printf("a=%d\n",a);        	
	printf("以浮點數型態印出: %f\n",(float)a);	
	printf("以指數數型態印出: %e\n",(double)a);
	
	system("pause");
	return 0;

}

