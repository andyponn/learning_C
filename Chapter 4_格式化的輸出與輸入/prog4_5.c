/* prog4_5, 使用printf()函數的修飾子 */
# include <stdio.h>
# include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{   
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	int i=1234;
              	
	printf("i=%+08d\n",i);	
	
	system("pause");
	return 0;

}

