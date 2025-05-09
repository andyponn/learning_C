/* prog5_5.c 遞增運算子++ */
#include <stdio.h> 
#include <stdlib.h> /* KEEP MS-DOS WINDOWS RESULT */
int main(void)
{
	int a=3, b=3;
    
    printf("a=%d",a);
    printf(", a++ will be %d", a++);
    printf(", a=%d\n",a);
    
    printf("b=%d",b);
    printf(", ++b will be %d", ++b);
    printf(", b=%d\n",b);
    
    system("pause"); /* KEEP MS-DOS WINDOWS RESULT */
    return 0;
} 
