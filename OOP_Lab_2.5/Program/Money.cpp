//Money.cpp
#include "Money.h"

using namespace std;


void Money::SetFirst(int value)
{
	pair.SetFirst(value);
}

void Money::SetSecond(int value)
{
	pair.SetSecond(value);
}

Money::Money(const int F, const int S)
{
		SetFirst(F);
		SetSecond(S);	
}

Money::Money(const Money& v)
{
	pair = v.pair;
}

Money::~Money(void)
{}

Money& Money::operator = (const Money& n)
{
	pair = n.pair;
	return *this;
}

Money::operator string () const
{
	return string(pair);
}

ostream& operator <<(ostream& out, const Money& s)
{
	out << string(s);
	return out;
}

istream& operator >>(istream& in, Money& s)
{
	cout << endl;
	in >> s.pair;
	return in;
}

Money& Money::operator ++()
{
	++pair;
	return *this;
}

Money& Money::operator --()
{
	--pair;
	return *this;
}

Money Money::operator ++(int)
{
	Money s(*this);
	pair++;
	return s;
}

Money Money::operator --(int)
{
	Money s(*this);
	pair--;
	return s;
}


Money Sum(const Money& p1, const Money& p2)
{
	int P_F = p1.pair.GetFirst() + p2.pair.GetFirst();
	int P_S = p1.pair.GetSecond() + p2.pair.GetSecond();

	if (P_S > 99)
	{
		P_S = P_S - 100;
		P_F = P_F + 1;
	}

	Money tmp(P_F, P_S);
	return tmp;
}


Money Diff(const Money& p1, const Money& p2)
{
	int P_F = p1.pair.GetFirst() - p2.pair.GetFirst();
	int P_S = p1.pair.GetSecond() - p2.pair.GetSecond();

	if (P_F < 0)
	{
		if (P_S > 0)
		{
			P_S = abs(P_S - 100);
			P_F = P_F + 1;
		}
		else
			P_S = abs(P_S);
	}


	if (P_F >= 1 && P_S < 0)
	{
		P_S = P_S + 100;
		P_F = P_F - 1;
	}

	Money tmp(P_F, P_S);
	return tmp;
}


double Division(const Money& p1, const Money& p2)
{
	return (p1.GetFirst() + p1.GetSecond() / 100.) /
		(p2.GetFirst() + p2.GetSecond() / 100.);
}






