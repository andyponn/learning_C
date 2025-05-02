/* prog4_20, 修正4_18讀取到錯誤的字元2*/
# include <stdio.h>
# include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{   
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	
	int num;
	char ch;
	
    printf("請輸入一個整數:"); 
	scanf("%d", &num);      	
	fflush(stdin);
	
	printf("請輸入一個字元:"); 
	scanf("%c", &ch);      	
	printf("num=%d, ASCII of ch=%d\n",num,ch);
		
	system("pause");
	return 0;

}

