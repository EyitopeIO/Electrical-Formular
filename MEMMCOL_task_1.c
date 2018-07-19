//Ayo'ss code.
#include <stdio.h>
#include <strings.h>

char* load_desired_array(char* array);
char first_character_check(char* array);
int find_exclamation_mark(char* array);
void hyphen_check(char* array);
char* fetch_the_needed_number(char* array);

char user_input[100];
int pass_start = 0;
int pass_end = 0;
int pass_hyphen_present = 0;


/* ALGORITHM
Check for '?'. If false, don't bother scanning.
   If true, ride on to find '!', then find the digits by noting
   the 3 numbers after the hyphen.
   
   So how does it find the digits? Because I'm expecting to crop a 3 digit number
   from the string, I simply note the index of the first hyphen, then use index
   of the next 3 elements. I keep those in an array and then I'm done. This
   technique won't work as desired if there is more than 3 digits between the
   hyphens.
*/

int main (void) {
	puts("Type your data below.");
	while(1){
		while(1) {
			if (first_character_check(load_desired_array(user_input)) == '?') {
				//printf("\nuser_input: %s", user_input);
				pass_start = 1;
				find_exclamation_mark(user_input);
				if (pass_start && pass_end) {
					break;
				}
				else {
					printf("\nERROR >> end character not found");
				}
			}
			else {
				puts("\nERROR >> start character not found.");
			}
		}
		hyphen_check(user_input);
		if (pass_hyphen_present) {
			printf("\nDIGIT: %s\n", fetch_the_needed_number(user_input));
		}
		else {
			printf("\nInvalid data");
		}
	}
}


void hyphen_check(char* array) {
	int number_hyphen, i;
	for(i=0, number_hyphen=0; i < strlen(array) - 1; i++) {
		if (array[i] == '-') {
			number_hyphen++;
		}
	}
	if (number_hyphen == 2) {
		pass_hyphen_present = 1;
	}
	else {
		pass_hyphen_present = 0;
	}
}

char* fetch_the_needed_number (char* array) {
	static char the_digits[3];
	int number_hyphen;
	int lenght_of_array = strlen(array);
	int i;
	int index_storage_point = 0;
	
	if(pass_hyphen_present) {
		for( i=0, number_hyphen=0; i < strlen(array) - 1; i++) {
			if (array[i] == '-') {
				//printf("\nSeen hyphen");
				i++;
				while(1) {
					if(array[i] == '-') {
						break;
					}
					//printf("\narray[%d] = %c", i, array[i]);
					the_digits[index_storage_point] = array[i];
					//printf("\nthe_digits[%d] = %c", index_storage_point,\
					the_digits[index_storage_point]);
					index_storage_point++;
					i++;
				}
				break;
			}
		}
		return the_digits;
	}
}
		
		

int find_exclamation_mark(char* array) {
	int lenght_array = strlen(array);
	//printf("\nlength of array is %d", lenght_array);
	int i = 0;
	do {
		if ( array[i] == '!' && i == lenght_array-1) {
			pass_end = 1;
			//printf("\nSeen exclamation mark.");
			break;
		}
		if (i == lenght_array -1) {
			pass_end = 0;
			break;
		}
		//printf("\narray[%d] is %c", i, array[i]);
		i++;
	} while (1);
	if (pass_end) {
		return 1;
	}
	else {
		return 0;
	}
}
		
		
char first_character_check(char* array) {
	return array[0];
}


char* load_desired_array(char* array) {
	printf("\nEnter: ");
	scanf("%s", array);
	return array;
}
