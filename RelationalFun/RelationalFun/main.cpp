#include <iostream>
using namespace std;

/*
	> greater than
	>= greater than or equal to
	< less than
	<= less than or equal to
	== equal to (equality operator) not to be confused with the assignment operator of '='
	!= not equal to (equality operator)
*/

int main()
{
	cout << boolalpha; //sticky operator

	int a = 15;
	int b = 20;
	bool areEqual = a == b;
	int age = 31;
	bool ofAge = age >= 21;

	cout << (a < b) << endl;
	cout << areEqual << endl;
	cout << "If true, you may enter the club: " << ofAge << endl;

	return 0;
}