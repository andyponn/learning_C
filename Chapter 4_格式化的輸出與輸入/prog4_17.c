/* prog4_17, 讀取輸入緩衝區內殘留的資料*/
# include <stdio.h>
# include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{   
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	
	int num;
	char str[10];
	
    printf("請輸入一個整數:"); 
	scanf("%d", &num);      	
	printf("num=%d\n",num);
	
	printf("請輸入一個字串:"); 
	scanf("%s", str);      	
	printf("str=%s\n",str);
		
	system("pause");
	return 0;

}

