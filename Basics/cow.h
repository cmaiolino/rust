#ifndef COW_H
#define COW_H

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
	cow(std::string name_i, int age_i, unsigned char purpose_i);

	std::string get_name();
	int get_age();
	unsigned char get_purpose();

	void set_age(int age_i);
};

#endif /* COW_H */
