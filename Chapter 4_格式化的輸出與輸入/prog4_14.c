/* prog4_14, 讀取第一個不是空白的字元*/
# include <stdio.h>
# include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{   
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	
	char ch;
	
    printf("請輸入一個character: "); 
	scanf(" %c", &ch);      	
	printf("ch=%c, ASCII code is %d\n",ch,ch);	
	
	system("pause");
	return 0;

}

