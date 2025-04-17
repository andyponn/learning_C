/* prog2_4, 有錯誤的程式 */
#include <stdio.h>  
#include <stdlib.h>

int main(void)      
{
	int num;       /*宣告變數num /*
	num=2;         
	printf("I have %d dogs.\n",num);  
	printf("You  have %d dogs, too.\n, num);
    system("pause")
    return 0;
)


/*錯誤1 main() 本體應是{}, 13行卻是")"結束*/
/*錯誤2 註解應是 /*開頭, "*/" 結尾, 7行卻是2個開頭*/
/*錯誤3 printf() 函數應再有一個"*/
/*錯誤4 敘述結束應有";" */