/* prog3_7, 跳脫序列的列印 */
# include <stdio.h>
# include <stdlib.h>
int main(void)
{

	char beep='\a';                                 /* 宣告字元變數beep，並設值為’\a’ */
	printf("%c\n", beep);			      /* 響一聲警告音 */
	printf("ASCII of beep= %d", beep);   /* 列印出beep 的ASCII碼 */


	system("pause");
	return 0;

}

/*char beep=‘\a’   在此等價 char beep=7*/
/* 但不是每一種編譯程式都適用ASCII故 使用前者(跳脫序列)較有通用性 */