#include <iostream>
#include <cstdlib>
#include "Stats.h"
using namespace std;

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	Stats rainfall;

	double amount = 0;
	for (int i = 0;i < MAX;i++)
	{
		cout << "Enter rainfall amount for month " << i+1 << ": ";
		cin >> amount;
		rainfall.setValue(i, amount);
	}

	cout << "Annaul Rainfall Report" << endl << "Amounts:" << endl;
	rainfall.getValues();

	cout << "Total: " << rainfall.getTotal() << endl;
	cout << "Average: " << rainfall.getAvg() << endl;
	cout << "Largest: " << rainfall.getLargest() << endl;
	cout << "Smallest: " << rainfall.getSmallest() << endl;
}
