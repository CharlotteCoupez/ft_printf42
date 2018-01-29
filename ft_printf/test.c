#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(void)
{
	
	int j = -2147483648;
	long int k = -2147483648 - 1;
	signed char i = 1;

	printf("d min : %p\n", &j);
	printf("d max : %d\n", 2147483647);
	printf("ld min + 1 : %ld\n", k);
	printf("ld max + 1: %ld\n\n", 2147483648);
	
	printf("u max : %u\n", 000000000);
	printf("u 0 : %u\n", 0);
	printf("u -1: %u\n\n", -1);


	printf("x min : %o\n", 0);
	printf("o de 12 : %o\n", 12);
	printf("o de 12 : %o\n", 12);
	printf("o de 12 : %o\n", 12);
	
	
	printf("o de 12 : %o\n", 12);
	printf("x de 12 : %x\n", 12);
	printf("d de 1 :%d\n", i);
	printf("hhd de 1 :%hhd\n", i);
	printf("u de 1 :%u\n", 1);
	setlocale(LC_ALL, "");
	printf("C de 0xefff :%C\n\n",0xefff);
	printf("C de 0xD800 :%d\n",0xD800);
	printf("x de 0xefff :%x\n",0xefff);
	printf("x de -1 :%x\n", -1);

	return (0);
}
