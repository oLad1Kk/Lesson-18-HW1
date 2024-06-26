#include "Employee.h"


int main()
{
	employee arr[5] = {
		{"Vasilich", 2000, "junior", 40000, "Harward University"},
		{"Ugabugovich", 2001, "junior", 41000, "Stenford University"},
		{"Petrovich", 1995, "middle", 60000, "Cambridge University"},
		{"Trulaloev", 1990, "middle", 70000, "Cambridge University"},
		{"Geniusowich", 1980, "senior", 100000, "Harward University"},
	};


	cout << "Data:\n\n";
	for (int i = 0; i < 5; i++)
	{
		arr[i].showEmployee();
	}
}
