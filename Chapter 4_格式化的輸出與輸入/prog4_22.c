/* prog4_22, 使用getche()與getch()函數 */
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{   
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	
	char ch;
    printf("請輸入一個字元:"); 
    ch=getche();
	printf("您輸入的字元是: %c\n",ch);

	printf("請輸入一個字元:"); 
    ch=getch();
	printf("您輸入的字元是: %c\n",ch);	
		
	system("pause");
	return 0;

}

