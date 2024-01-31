#include <iostream>
#include <string>
#include "cow.h"

int main(void) {
	cow *my_cow;
	my_cow = new cow("Hildy", 7, PET);

	std::cout << my_cow->get_name() << " is a type - " <<
		(int)my_cow->get_purpose() <<
		std::endl;

	std::cout << my_cow->get_name() << " is " <<
		my_cow->get_age() << " years old" <<
		std::endl;


	my_cow->set_age(24);
	std::cout << my_cow->get_name() << " is NOW " <<
		my_cow->get_age() << " years old" <<
		std::endl;

	delete my_cow;
	return 0;
}
