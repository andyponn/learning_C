/* prog3_11, 列印出各種資料型態的長度 */
# include <stdio.h>
# include <stdlib.h>
int main(void)
{
	char ch;                  /* 宣告ch為字元變數 */
	float num;                /* 宣告num為浮點數變數 */
	
	printf("sizeof(2L)=%d\n", sizeof(2L));			      /* 查詢2L字元變數所占位元組 */
	
	printf("sizeof(ch)=%d\n", sizeof(ch));			      /* 查詢ch字元變數所占位元組 */
	printf("sizeof(num)=%d\n", sizeof(num));			  /* 查詢num浮點數變數所占位元組 */
	
	printf("sizeof(int)=%d\n", sizeof(int));			  /* 查詢int型態所占位元組 */
	printf("sizeof(long)=%d\n", sizeof(long));			  /* 查詢long型態所占位元組 */	
	printf("sizeof(short)=%d\n", sizeof(short));		  /* 查詢short型態所占位元組 */	
	
	system("pause");
	return 0;

}

