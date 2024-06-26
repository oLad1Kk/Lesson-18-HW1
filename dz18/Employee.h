#pragma once
#include <iostream>
using namespace std;

struct employee {
	char surname[100];
	int byear;
	char position[100];
	float salary;
	char education[100];

	void showEmployee() {
		cout << "Surname:\t" << surname << endl;
		cout << "Birth year:\t" << byear << endl;
		cout << "Position:\t" << position << endl;
		cout << "Salary:  \t" << salary << endl;
		cout << "Education:\t" << education << endl;
		cout << "\n";
	}
};
