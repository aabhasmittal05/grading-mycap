#include <stdio.h>
#include <stdlib.h>
int main()
{
	float per;
	printf("Enter the percentage marks");
	scanf("%f",&per);
	if(per>=85)
	printf("grade is A");
	else if(per>=70)
	printf("grade is B");
	else if(per>=55)
	printf("grade is C");
	else if(per>=40)
	printf("grade is D");
	else
	printf("grade is F");
	return 0;
}
