/* prog4_9, 使用scanf()函數 */
# include <stdio.h>
# include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{   
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	
	int num;
	
    printf("請輸入一個整數"); 
	scanf("%d", &num);      	
	printf("num=%d\n",num);	
	
	system("pause");
	return 0;

}

