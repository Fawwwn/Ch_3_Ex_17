//A addition math program that can used as a tutor for a student.


#include <iostream>

using namespace std;

int main()
{

	double x, y;
	
	cout << "Put the two numbers you're trying to add seperated by a space: " << endl;
	cin >> x >> y;
	double z = x + y;
	double stuAnswer;
	cout << "What is your answer?\n";
	cin >> stuAnswer;

		if (stuAnswer == z) {
			cout << "\nYou are correct!" << endl;
		}
		else {
			cout << "\nYou are incorrect." << endl;
		}

		cout << "\nThe answer is: " << z << endl;

		return 0;
}