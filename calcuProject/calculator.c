#include <stdio.h>
#include "calculib.h"

int main()
{
	double a, b;
	printf("calculator\n");
	printf("num1 : ");
	scanf("%lf", &a);
	printf("num2 : ");
	scanf("%lf", &b);
	
	printf("%lf + %lf = %lf\n", a, b, add(a, b));
	printf("%lf - %lf = %lf\n", a, b, sub(a, b));
	printf("%lf * %lf = %lf\n", a, b, mul(a, b));
	printf("%lf / %lf = %lf\n", a, b, div(a, b));
	return 0;

}
