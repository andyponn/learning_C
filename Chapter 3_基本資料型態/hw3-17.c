/* hw3-17, 利用sizeof 查詢  各常數所占位元組 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	
	printf("sizeof(578)=%d\n",sizeof(578));
	printf("sizeof(784000000)=%d\n",sizeof(784000000));
	printf("sizeof(6.78f)=%d\n",sizeof(6.78f));
	printf("sizeof(718.26)=%d\n",sizeof(718.26));
	printf("sizeof(6.42e127)=%d\n",sizeof(6.42e127));
	
    system("pause");
    return 0;
}
