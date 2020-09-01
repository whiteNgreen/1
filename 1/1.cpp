#include <iostream>
#include <string>

int age;
bool sw = false;
//char Initial = 'A';
//std::string name = "Adrian";
std::string Fullname = "";
//std::string ad = "Jakkal";
//double a = 3;
double pi = 3.14;

int a = 10;
int b = 5;
int c = 20;
int z = 10;

int main() {
	/*std::cout << "Enter your age :";
	std::cin >> age;
	std::cout << " \t Your age is : " << age << "\n"; // \t legger en tab lengde på linjen når den printes
	std::cout << "You are young ";
	*/
	std::cout << "Enter your full name: ";
	std::getline(std::cin, Fullname);
	//std::cin >> Fullname;
	std::cout << "Your full name is : " << Fullname + "\n";

	if (a > b) {
		std::cout << "A is greater than B\n";
	}
	if (a == z) {
		std::cout << "A and Z are equal B\n";
	}
	if (a < b) { // if (a > z || a == z) || er 'or', hvor && er 'and'
		std::cout << "Nothing happens here \n";
	}
	if (a != b) {
		std::cout << "NOT EQUAll \n";
	}
}