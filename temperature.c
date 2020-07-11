#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%2f\t%2f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
