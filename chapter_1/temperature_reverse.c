#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = (0.0 - 32.0) * (5.0 / 9.0);
	upper = (300.0 - 32.0) * (5.0 / 9.0);
	step = 20 * (5.0 / 9.0);
	
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
