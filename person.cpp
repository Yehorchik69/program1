#include <iostream>
#include "person.h"

Person::Person(const char* n, int a) {
	int i = 0;
	while (n[i] != '\0' && i < 49) {
		name[i] = n[i];
		i++;
	}
	name[i] = '\0';
	age = a;
}

void Person::sayHello() const {
	std::cout << "Hello! My name is " << name << ", Im " << age << " years old." << std::endl;
}

void Person::haveBirthday() {
	age++;
	std::cout << name << " turned " << age << " years old!" << std::endl;
}
