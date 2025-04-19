/* hw3-16, 利用sizeof 查詢資料型態所占位元組 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	unsigned int type_unint;
	double type_double;
	unsigned short int type_un_s_int;
	
	printf("sizeof(unsigned int)=%d\n",sizeof(type_unint));
	printf("sizeof(double)=%d\n",sizeof(type_double));
	printf("sizeof(unsigned short int)=%d\n",sizeof(type_un_s_int));
	
    system("pause");
    return 0;
}
