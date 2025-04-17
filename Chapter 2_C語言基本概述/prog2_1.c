/* prog2_1.c */
#include <stdio.h> /* 把stdio.h 這個檔案涵蓋進來*/
#include <stdlib.h>
int main(void)     /* 主程式main() 從這開始, void:main函數不須傳入引數*/
{
	int num;       /*宣告整數變數*/
	num=2;         /*num值=2*/
	printf("I have %d cats.\n",num);
	printf("You  have %d cats, too.\n", num);
    system("pause");
    return 0;
}
