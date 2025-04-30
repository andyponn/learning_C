/* prog4_11, 使用逗號區隔輸入格式 */
# include <stdio.h>
# include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{   
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	
	int a,b;
	
    printf("請輸入2個整數，並使用逗號\",\"隔開數值: "); 
	scanf("%d,%d", &a,&b);      	
	printf("%d+%d=%d\n",a,b,a+b);	
	
	system("pause");
	return 0;

}

