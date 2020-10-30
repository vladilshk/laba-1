#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, d;
	a = 0;
	b = 1;
	c = 0;
	d = 0;
	printf("%d ", b);
	while (b < 1001) {
		c = a;
		a = b;
		b = b + c;
		d += 1;
		printf("%d ", b);
	}
	printf("the thirst fibonachi number wich > 1000 is %d", d);

	return 0;
}