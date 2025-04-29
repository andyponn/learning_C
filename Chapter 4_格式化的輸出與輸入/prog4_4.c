/* prog4_4, 印出特定格式 */
# include <stdio.h>
# include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{   
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	int num1=32, num2=1024;
	float num3=12.3478f;
	              	
	printf("num1=%6d公里\n",num1);	
	printf("num2=%-6d公里\n",num2); /*- 修飾子:靠左對齊; +:將數值的正負號顯示出來*/
	printf("num3=%6.2f英哩\n",num3);
	
	system("pause");
	return 0;

}

