/*
*
* Hi. I'm Eyitope Adelowo, and today is 03-AUG-2018.
* Whatever....
*
*/

#include <string>
#include <iostream>

using namespace std;

/*
* Let's just simulate 3 contacts. Trying to let you set the max number of
* contacts to save and the length of each entry was taking too much thinking
* time and planning. Sorry, I can't use all that time for it.
*/

string contact1, contact2, contact3;
string number1, number2, number3;

string inputHandle(void);
void printAll(void);
void update(); // gets input and updates.
void find();

void find (string querry) {
	if (querry == contact1) {
		cout << contact1 << ":" << number1 << "\n";
	}
	else if (querry == contact2) {
		cout << contact2 << ":" << number2 << "\n";
	}
	else if (querry == contact3) {
		cout << contact3 << ":" << number3 << "\n";
	}
	else {
		cout << "\nNot found\n";
	}
}

void update() {
	string number, name;
	cout << "\nName.\n";
	name = inputHandle(); //this adds to
	cout << "\nNumber.\n";
	number = inputHandle();
	cout << "Which contact are you updating?\n 1/2/3";
	string data;
	cin >> data;
	if (data == "1") {
		contact1 = name;
		number1 = number;
	}
	else if (data == "2") {
		contact2 = name;
		number2 = number;
	}
	else if (data == "3") {
		contact3 = name;
		number3 = number;
	}
	else {
		cout << "Invalid input\n";
	}
}

void printAll(void) {
	cout <<  "\n\nCONTACT LIST\n";
	cout << contact1 << ":" << number1 << "\n";
	cout << contact2 << ":" << number2 << "\n";
	cout << contact3 << ":" << number3 << "\n\n";
}


string inputHandle(void) {
	string temp_in;
    cout << "Enter: \n";
    cin >> temp_in;
	return temp_in;
}

int main()
{
	char main_menu_select;
	string name;
	while(1)
	{
		cout << "\n\n\tMAIN MENU\n";
		cout <<"a) Input data\n ";
		cout <<"b) Search for an individual\n";
		cout <<"c) Print all\n";
		cout <<"d) End program\n";
		cout <<"Please select an option: ";
		cin >> main_menu_select;
		switch(main_menu_select)
		{
			case 'a':
				update();
				break;
			case 'c':
				printAll();
				break;
			case 'b':
				cout << "You are searching for...\n";
				cin >> name;
				find(name);
				break;
			case 'd':
				return 0; //this will cause main() to tell Windows it's done.
				break;
			default:
				std::cout << "\nInvalid option.\n";
		}
	}
}
