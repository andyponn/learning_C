/* hw1-13 */
#include <stdio.h>
#include <stdlib.h>
#pragma execution_character_set("utf-8")

int main(void)
{
    system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8
    printf("我愛C語言\n");
    system("pause");
    return 0;
}

