/* prog4_15, 輸入字串*/
# include <stdio.h>
# include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{   
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	
	char name[10];
	
    printf("What's your name:"); 
	scanf("%s", name);      	
	printf("Hi, %s, How are you?\n",name);	
	system("pause");
	return 0;

}

