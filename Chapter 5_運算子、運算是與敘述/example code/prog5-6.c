/* prog5_6.c 遞增運算子的應用 */
#include <stdio.h> 
#include <stdlib.h> /* KEEP MS-DOS WINDOWS RESULT */
int main(void)
{
	int score;
    printf("PLZ input the score:");
    scanf("%d",&score);
    
    if ((score<0) || (score>100))
    	printf("the score exceeds the valid range!!\n");
    	
    if ((score<60) && (score>49))
    	printf("You might need to retake the exam!!\n");
    
    system("pause"); /* KEEP MS-DOS WINDOWS RESULT */
    return 0;
} 
