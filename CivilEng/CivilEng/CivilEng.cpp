/********************************************************
 *
 *  Project :  CivilEng
 *  File    :  CivilEng.cpp
 *  Name    :  Anthony Browness
 *  Date    :  5 Sept 13
 *
 *  Description : 
 *
 *    1) Purpose:
 *        
 *		 A program that calculates the stress placed on a 
 *		 beam given the following values:
 *		 
 *		   Load - the weight of the load placed in lbs
 *		   Inertia - the movement of inertia in in^4
 *		   Distance - the distance load is placed from the fixed end of beam
 *		   Height - theheight in inches of a symetrical beam
 *    
 *    2) Data-Structures:
 *
 *       None:
 *
 *    3) Data-Structure Implementation: Algorithms, techniques, etc:
 *
 *       Stress = (Load * Distance * c(half of height)) / 2
 *
 *  Changes :  N/A
 *
 ********************************************************/

#include "stdafx.h"
#include <iostream>
using namespace std;

/****************************************************
 * Method     : queryLoad 
 *
 * Purpose    : Querys the user for the Load variable and returns it.
 *
 * Parameters : This method does not require parameters. 
 *
 * Returns    : This method does not return a value.
 *
 ****************************************************/
double queryLoad(void)
{
	double load;
	cout << "Input the load placed on the beam(lbs): ";
	cin >> load;
	return load;
}

/****************************************************
 * Method     : queryInertia 
 *
 * Purpose    : Querys the user for the Inertia variable and returns it.
 *
 * Parameters : This method does not require parameters. 
 *
 * Returns    : This method does not return a value.
 *
 ****************************************************/              
double queryInertia(void)
{
	double inertia;
	cout << "Input the rectangular movement of inertia(in^2): ";
	cin >> inertia;
	return inertia;
}

/****************************************************
 * Method     : queryDistance 
 *
 * Purpose    : Querys the user for the Distance variable and returns it.
 *
 * Parameters : This method does not require parameters. 
 *
 * Returns    : This method does not return a value.
 *
 ****************************************************/
double queryDistance(void)
{
	double distance;
	cout << "Input the distance the load is placed from the fixed end(movement arm): ";
	cin >> distance;
	return distance;
}

double queryHeight(void)
{
	double height;
	cout << "Input the height of the symmetrical beam(in): ";
	cin >> height;
	return height;
}

double halfBeam(double beam)
{
	double half = beam / 2;
	return half;
}

double calcStress(double length, double dist, double half, double inertia)
{
	double stress = (length * dist * half) / inertia;
	return stress;
}

int _tmain(int argc, _TCHAR* argv[])
{
	double L = queryLoad(); //weight of load placed in lbs
	double I = queryInertia(); //rectangular movement of intertia in in^4
	double d = queryDistance(); //distance load is placed from the fixed end of beam
	double h = queryHeight(); //height in inches of a symetrical beam
	double c = halfBeam(h); //half of the beam
	double S = calcStress(L, d, c, I); //the stress in lbs/in^2
	cout << "\nThe stress placed on a steel beam with: " 
			<< "\nLoad \t\t- " << L  <<" lbs"
			<< "\nInertia \t- " << I <<" in^4"
			<< "\nDistance \t- " <<d <<" in"
			<< "\nHeight \t\t- " <<h <<" in"
			<<"\n\nHas a Stress of: " <<S <<" lbs/in^2.\n";
	system("pause");
	return 0;
}