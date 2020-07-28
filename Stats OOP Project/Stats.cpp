#include "Stats.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Stats::Stats()
{
	for (int i = 0;i < MAX;i++)
	{
		array[i] = 0;
	}
}

void Stats::setValue(int num, double a)
{
	if (a>=0)
	{
		array[num] = a;
	}
	else if (a<0)
	{
		array[num] = 0;
	}
}

void Stats::getValues()
{
	for (int i = 0;i < MAX;i++)
	{
		cout << "Month " << i << ": " << array[i] << endl;
	}
}

double Stats::getTotal()
{
	double sum = 0;
	for (int i = 0;i < MAX;i++)
	{
		sum += array[i];
	}
	return sum;
}

double Stats::getAvg()
{
	double avg = 0;
	double sum = 0;
	for (int i = 0;i < MAX;i++)
	{
		sum += array[i];
	}
	avg = sum / MAX;
	return avg;
}

double Stats::getLargest()
{
	double largest = array[0];
	for (int i = 0;i < MAX;i++)
	{
		if (array[i] > largest)
		{
			largest = array[i];
		}
	}
	return largest;
}

double Stats::getSmallest()
{
	double smallest = array[0];
	for (int i = 0;i < MAX;i++)
	{
		if (array[i] < smallest)
		{
			smallest = array[i];
		}
	}
	return smallest;
}