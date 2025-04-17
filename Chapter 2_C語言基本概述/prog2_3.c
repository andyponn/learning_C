/* prog2_3, printf()函數的練習 */
#include <stdio.h> /* 把stdio.h 這個檔案涵蓋進來*/
#include <stdlib.h>
int main(void)     /* 主程式main() 從這開始, void:main函數不須傳入引數*/
{
	int num=2;       /*宣告變數num,值=2*/
	printf("I have %d cats.\n",num);  /* %d 告訴編譯器num值以10進位輸出至此 */
    system("pause");
    return 0;
}
