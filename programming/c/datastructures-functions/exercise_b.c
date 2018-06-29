#include <stdio.h>


void add_one_to_path(int *ptr_a,int *ptr_b){

	(*ptr_a)++;

	(*ptr_b)++;
}

int main()
{

	int a,b;

	int *ptr_a, *ptr_b;
	
	a = 10;

	b = 20;

	ptr_a = &a;

	ptr_b = &b;

	add_one_to_path(ptr_a,ptr_b);

	printf("The value of a and b become %d, and %d, respectively!",*ptr_a,*ptr_b);

}

