// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int query(void)
{
	int num = 0;
	cout << "Enter an Integer > 0: ";
	cin >> num;
	if(num == 0)
	{
		cout << "Invalid Input";
		num = query();
	}
	else
	{
		cout << "Factoral is: ";
		return num;
	}
	return 0;
}

int factoral(int num)
{
	if(num == 0)	//base case
		return 1;
	else			//recursive case
		return num * factoral(num - 1);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int num;
	num = query();
	int fact;
	fact = factoral(num);
	cout << fact;
	return 0;
}



