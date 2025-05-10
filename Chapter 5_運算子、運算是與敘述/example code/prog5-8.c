/* prog5_8.c 運算式型態轉換 */
#include <stdio.h> 
#include <stdlib.h> /* KEEP MS-DOS WINDOWS RESULT */
int main(void)
{
	char ch='a';
	short s=-2;
	int i=3;
	float f=5.3f;
	double d=6.28;
	
	printf("(ch/s)-(d/f)-(s+i)=%f\n",(ch/s)-(d/f)-(s+i));
    printf("size=%d\n",sizeof((ch/s)-(d/f)-(s+i)));
   
    system("pause"); /* KEEP MS-DOS WINDOWS RESULT */
    return 0;
} 
