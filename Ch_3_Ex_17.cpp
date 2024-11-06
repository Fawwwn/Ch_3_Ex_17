//A addition math program that can used as a tutor for a student.


#include <iostream>

using namespace std;

int main()
{

	double x, y;
	
	cout << "Put the two numbers you're trying to add seperated by a space: " << endl;
	cin >> x >> y;
	double z = x + y;
	cout << "Press enter to see the answer.\n";

	cin.ignore();
	cin.get();

		cout << "The answer is: " << z << endl;

		return 0;
}