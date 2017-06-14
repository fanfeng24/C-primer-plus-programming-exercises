/*
 * Write a C++ program that asks for a distance in furlongs and converts it to yards.
 * (One furlong is 220 yards.)
*/

#include <iostream>
using namespace std;

int main(){
	
	double dist;
	cout << "Enter a number for a distance in furlongs:";
	cin >> dist;
	dist = dist * 220;
	cout << "The distance is " << dist << " yards.\n";
	return 0;
}