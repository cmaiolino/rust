#include <iostream>
#include <string>
#include <cstring> // includes C string.h
#include <typeinfo>
#include <cstdint>

#define CAPACITY	5000
//#define LENGTH 4

/*
 * cout = Character out
 * cin = Character in
 * :: == Scope resolution operator
 * << == insertion operator
 */

using namespace std;

void average() {
	int arr[5];

	arr[0] = 4;
	arr[1] = 3;
	arr[2] = 5;
	arr[3] = 2;
	arr[4] = 4;

	int i = 0;
	float avg = 0;

	for (i = 0; i < 5; i++)
		avg += arr[i];

	avg /= 5;

	std::cout << "Average: " << avg << std::endl;
}

void tcast() {
	float f = -7.44f;
	int32_t s;
	uint32_t u;

	s = f;	// Implicit type casting from float to int32
	u = s; // Implicit casting from int32 to uint32, we'll end up seeing 2's
	       // complement version of variable s, but interpreted as an
	       // unsigned int.

	std::cout << "float: " << f << endl;
	std::cout << "int32: " << s << endl;
	std::cout << "uint32: " << u << endl;
}

void strings() {
	const int LENGTH = 25;
	char  ch_arr1[LENGTH] = "Howdy! I'm a string... ";
	char ch_arr2[] = "Sup bro?";

	string std_str1 = "Hi everyone! ";
	string std_str2 = "How's everybody doing?";

	// Concatenate strings the traditional way
	strcat(ch_arr1, ch_arr2);
	std::cout << ch_arr1 << std::endl;
	// Concatenate strings the C++ way using operator overloading
	std::cout << std_str1 + std_str2 << std::endl;
	std::cout << "Operator overloaded" << std::endl;
}

void t_inference() {
	auto a = 8;
	auto b = 214312351235739;
	auto c = 3.14f;
	auto d = 3.14;
	auto e = true;
	auto f = 'd';

	std::cout << "STARTING Type Inference" << std::endl;
	std::cout << "Type of a: " << typeid(a).name() << std::endl;
	std::cout << "Type of b: " << typeid(b).name() << std::endl;
	std::cout << "Type of c: " << typeid(c).name() << std::endl;
	std::cout << "Type of d: " << typeid(d).name() << std::endl;
	std::cout << "Type of e: " << typeid(e).name() << std::endl;
	std::cout << "Type of f: " << typeid(f).name() << std::endl;
}

void varplay() {
	int a, b = 5;

	float c = 2.4f;
	double d = 9.234545;
	long double ld = 9.234545;
	char e = 'e';
	bool myBool = false;
	string str = "This is a big string I don't care how it is handled";

	std::cout << "Size of int: " << sizeof(a) << " sizeof float: " <<
		sizeof(c) << " sizeof double: " << sizeof(d) <<
		" sizeof long double: " << sizeof(ld) << " sizeof char: " <<
		sizeof(e) << " sizeof bool: " << sizeof(myBool) << std::endl;

	std::cout << "This is my string: " << str << std::endl;
}

int main() {
	string str;

#ifdef CAPACITY
	int32_t cap = CAPACITY;
	uint32_t small = 37;

	const int LENGTH = 4;
	int myArr[LENGTH];

	myArr[0] = 3;
	myArr[1] = 4;
	myArr[2] = 5;
	myArr[3] = 6;
	cap += small;
#endif

	std::cout << "Please enter your first name: ";
	cin >> str;

	std::cout << "Hello " << str << ", welcome to the world!" << std::endl;

	// Just relies on using namespace
	cout << "Hello World, with namespace" << endl;

//	varplay();
	t_inference();

#ifdef DEBUG
	std::cout << "DEBUGGING..." << std::endl;
	std::cout << "Array size: " << LENGTH << std::endl;
	std::cout << "Arr[0] = " << myArr[0] << std::endl;
	std::cout << "Arr[1] = " << myArr[1] << std::endl;
	std::cout << "Arr[2] = " << myArr[2] << std::endl;
	std::cout << "Arr[3] = " << myArr[3] << std::endl;
#endif

#ifdef CAPACITY
	std::cout << "Current CAPS: " << cap << std::endl;
#endif

	strings();
	tcast();
	average();
	return 0;
}
