/* prog3_6, 字元型態的列印問題 */
# include <stdio.h>
# include <stdlib.h>
int main(void)
{

	int i=298;                                 /* 宣告字元變數ch，並設值為’2’ */
	printf("ASCII of (%d)= %c\n", i,i);   /* 列印出ASCII碼為 i 的字元 */

	system("pause");
	return 0;

}

/*因超過1位元組, %c 所以只會擷取後8bits*/
/* 298的二進位為 100101010 */
/* 00101010 10 進位即為42 */
/* ASCII 碼 42就是 『＊』符號 */