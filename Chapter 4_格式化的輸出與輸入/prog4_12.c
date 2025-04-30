/* prog4_12, 輸入16進位，在印出他的10進位*/
# include <stdio.h>
# include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{   
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	
	int num;
	
    printf("請輸入16進位整數: "); 
	scanf("%x", &num);      	
	printf("%x的10進位為%d\n",num,num);	
	
	system("pause");
	return 0;

}

