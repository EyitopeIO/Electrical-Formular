#include <stdio.h>
#include <math.h>

char number2string(unsigned long the_number ); //overload this function for floats
unsigned int get_me_the_floor(unsigned long number);

unsigned long power_of_ten = 10; //code will alter this number. 



//this is here for test run.
int main() {
	printf("%d", get_me_the_floor(9852899));
	printf("
	int a = 8;
	char c = a + '0';
	printf("\nit is now %c as character", c);
	printf("\nit is now %d as number", a);
	printf("\nit is now %d as modified", c);
}


char number2string (unsigned long data ) {
	int i, LENGHT_OF_NUMBER = 0;
	char buffer[16];
	for( i=0 ; i!=20 ; i++) buffer[i] = 0;
	unsigned long working_number = data;
	unsigned long that_floored_number = 0;

	while (working_number != 0) {
		//who keeps changing power_of_ten?
		that_floored_number = get_me_the_floor( working_number );
		working_number = working_number - that_floored_number * power_of_ten;
		printf("Working number: "); getchar();
	}
		
}


unsigned int get_me_the_floor(unsigned long number) {
	unsigned long the_number = number;
	float answer;
	while(1) {
		answer = the_number / power_of_ten;
		printf("\n%d divided by %d = %f", number, power_of_ten, answer);
		getchar();
		if (answer < 10) {
			printf("Using %d as power", power_of_ten);
			return (int)floor(answer);
		}
		power_of_ten = power_of_ten * 10; //don't forget to reset this back to 10 later
	}
}



/*
Notes on void pointers.
void pointers can't be dereferenced.
no pointer arithmetic with void pointers. [why?]
   printf("%d", *ptr)
   printf("%d", *(int *)ptr)

int main (void) {
	char result[50];
	float num =23.34;
	sprintf(result, "%f", num);
	printf("\n%s", result);
	printf("\n%f", result);
	printf("%d", (int)floor(25.9));
}
*/


