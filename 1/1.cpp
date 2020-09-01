#include <iostream>
#include <string>

int age;

std::string name = "Adrian";

double pi = 3.14;

int main() {
	std::cout << "Enter your age :";
	std::cin >> age;
	std::cout << " \t Your age is : " << age << "\n"; // \t legger en tab lengde på linjen når den printes
	std::cout << "You are young ";
}