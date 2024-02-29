#include <stdio.h>

int main(void)
{
	int mask = 0x7f800000;//0b01111111100000000000000000000000;
	float f = 0.0f/0.0f;
	int* ptf = (int*)&f;
	float f2 = 0.2f;
	int* ptf2 = (int*)&f2;


	printf ("f exposant %d\n",(*ptf & mask) >> 23);
	printf("%f\n",f);

	printf ("f2 exposant %d\n",(*ptf2 & mask) >> 23);
	printf("%f\n",f2);
	return 0;
}
