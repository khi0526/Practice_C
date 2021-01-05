/********************************
** BitFlag
********************************/

#include <stdio.h>

#define CHECK_0 128
#define CHECK_1 64
#define CHECK_2 32
#define CHECK_3 16
#define CHECK_4 8
#define CHECK_5 4
#define CHECK_6 2
#define CHECK_7 1

void PrintByte(unsigned char byte)
{
	unsigned char i;

	for (i = 0x80; i > 0; i >>= 1)
		if (byte & i)
			printf("1");
		else
			printf("0");
}

int main()
{
	unsigned char flag = 0;

	flag |= CHECK_0 | CHECK_1 | CHECK_2 | CHECK_6;
	PrintByte(flag);

	return 0;
}