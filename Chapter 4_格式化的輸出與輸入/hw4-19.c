/* hw4-19, 修正prog 4_20*/
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
	ch=getchar();      	
	printf("num=%d, ASCII of ch=%d\n",num,ch);
		
	system("pause");
	return 0;

}

