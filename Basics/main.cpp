#include <iostream>
#include <string>

enum cow_p {
	DAIRY,
	MEAT,
	HIDE,
	PET,
};

// By default class members are private
class cow {

private:
	std::string name;
	int age;
	unsigned char purpose;

public:
	// Constructor
	cow(std::string name_i, int age_i, unsigned char purpose_i) {
		name = name_i;
		age = age_i;
		purpose = purpose_i;
	}

	std::string get_name() {
		return name;
	}

	int get_age() {
		return age;
	}

	unsigned char get_purpose() {
		return purpose;
	}

	void set_age(int age_i) {
		age = age_i;
	}
};

int main(void) {
	struct cow my_cow("Hildy", 7, PET);

	std::cout << my_cow.get_name() << " is a type - " <<
		(int)my_cow.get_purpose() <<
		std::endl;

	std::cout << my_cow.get_name() << " is " <<
		my_cow.get_age() << " years old" <<
		std::endl;


	my_cow.set_age(24);
	std::cout << my_cow.get_name() << " is NOW " <<
		my_cow.get_age() << " years old" <<
		std::endl;
	return 0;
}
