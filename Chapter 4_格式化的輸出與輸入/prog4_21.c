/* prog4_21, 使用getchar()與putchar()函數 */
# include <stdio.h>
# include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{   
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	
	char ch;
    printf("請輸入一個字元:"); 
    ch=getchar();
	printf("您輸入的字元是:"); 
	putchar(ch);
	putchar('\n');
		
	system("pause");
	return 0;

}

