/* prog4_3, 使用prinf()函數 */
# include <stdio.h>
# include <stdlib.h>
#pragma execution_character_set("utf-8")
int main(void)
{   
	system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
	int num=25;              	
	printf("\"%d%%的學生來自小康家庭\"\n",num);	
	
	system("pause");
	return 0;

}

