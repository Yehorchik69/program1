#ifndef PERSON_H
#define PERSON_H

class Person {
private:
	char name[50];
	int age;

public:
	Person(const char* n, int a);
	void sayHello() const;
	void haveBirthday();
};

#endif
