/* progA_3, debug excercise */
#include <stdio.h>
#include <stdlib.h>
int square(int);
int main(void)
{
	int i, sum=0;
	for(i=1;i<4;i++)
		sum+=square(i);
	printf("sum=%d\n",sum);
    system("pause"); 
    return 0;
}
int square(int a)
{
	return a*a;
}
