#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>

int main()
{
	void *handle;
	double (*add)(double, double);
	double (*sub)(double, double);
	double (*mul)(double, double);
	double (*div)(double, double);
	double a, b;
	char *error;

	handle = dlopen("./lib/libcalcu.so", RTLD_LAZY);
	if (!handle)
	{
		fputs(dlerror(), stderr);
		exit(1);
	}
	add = dlsym(handle, "add");
	if((error = dlerror()) != NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}
	sub = dlsym(handle, "sub");
	if((error = dlerror()) != NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}
	mul = dlsym(handle, "mul");
	if((error = dlerror()) != NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}
	div = dlsym(handle, "div");
	if((error = dlerror()) != NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}

	printf("calculator\n");
	printf("num1 : ");
	scanf("%lf", &a);
	printf("num2 : ");
	scanf("%lf", &b);

	printf("%lf + %lf = %lf\n", a, b, (*add)(a, b));
	printf("%lf - %lf = %lf\n", a, b, (*sub)(a, b));
	printf("%lf * %lf = %lf\n", a, b, (*mul)(a, b));
	printf("%lf / %lf = %lf\n", a, b, (*div)(a, b));

	dlclose(handle);

	return 0;
}




