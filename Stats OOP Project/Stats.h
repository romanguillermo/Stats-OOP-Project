#pragma once
#ifndef Stats_H
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX = 12;

class Stats
{
private:
	double array[12];
public:
	Stats();
	void setValue(int, double);
	void getValues();
	double getTotal();
	double getAvg();
	double getLargest();
	double getSmallest();
};

#endif