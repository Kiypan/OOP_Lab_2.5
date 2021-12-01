//Source.cpp
#include <iostream>
#include "Money.h"
#include "Pair.h"

using namespace std;

int main()
{
	//////////////////////////пара//////////////////////////
	Pair p1, p2;
	cout << "Input first pair" << endl;
	cin >> p1;
	cout << "Input second pair" << endl;
	cin >> p2;

	cout << endl;
	cout << "First pair a and b";
	cout << p1 << endl;

	cout << "Second pair a is c, b is d";
	cout << p2 << endl;

	//додавання пар
	cout << "Sum of pairs:" << Sum(p1, p2) << endl << endl;

	//множення на число
	int number;
	cout << "(number, you want to multiply on) n = ";
	cin >> number; cout << endl;

	cout << "First pair multyplied on n : " << Dob(p1, number) << endl;
	cout << "Second pair multiplyed on n: " << Dob(p2, number) << endl;
	cout << "--------------------------------------------" << endl << endl;


	//////////////////////////гроші//////////////////////////
	Money m1, m2;

	cout << endl;
	cout << "Input money 1: ";
	cin >> m1;

	cout << endl;
	cout << "Input money 2: ";
	cin >> m2;

	cout << endl;
	cout << "Money 1: ";
	cout << m1 << endl;

	cout << "Money 2: ";
	cout << m2 << endl;

	//додавання пар
	cout << "Sum of money: " << Sum(m1, m2) << endl;

	//віднімання пар
	cout << "Difference of money: " << Diff(m1, m2) << endl;

	//ділення пар
	cout << "Division of money: " << Division(m1, m2) << endl;
	cout << "--------------------------------------------" << endl << endl;

	/////////////////////////////////////////////////////////
	cout << endl;
	cout << "p1: " << p1 << endl;
	cout << "++p1: " << ++p1 << endl;
	cout << "--p1: " << --p1 << endl;
	cout << "p1++: " << p1++ << endl;
	cout << "p1--: " << p1-- << endl << endl;
	cout << "--------------------------------------------" << endl << endl;

	cout << "m1: " << m1 << endl;
	cout << "++m1: " << ++m1 << endl;
	cout << "--m1: " << --m1 << endl;
	cout << "m1++: " << m1++ << endl;
	cout << "m1--: " << m1-- << endl << endl;

}

