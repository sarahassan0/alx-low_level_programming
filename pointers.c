#include <stdio.h>

void calc_age_using_var(int age)
{
	age += 10;
}

void calc_age_using_ptr(int *age_ptr)
{
	*age_ptr += 10;
}

int main()
{
	int age = 5;
	int *age_ptr = &age;

	calc_age_using_var(age);
	// calc_age_using_ptr(age_ptr);

	printf(" Age After 10 Years : %i\n", age);
	return (0);
}
