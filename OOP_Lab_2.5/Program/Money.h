//Money.h
#pragma once
#pragma pack(1)
#include "Pair.h"

class Money
{
private:
	Pair pair;

public:

	int GetFirst() const { return pair.GetFirst(); }
	int GetSecond() const { return pair.GetSecond(); }
	void SetFirst(int value);
	void SetSecond(int value);

	Money(const int first = 0, const int second = 0);
	Money(const Money& s);
	~Money(void);

	Money& operator = (const Money& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Money& s);
	friend istream& operator >> (istream& in, Money& s);

	Money& operator ++ ();
	Money& operator -- ();
	Money operator ++ (int);
	Money operator -- (int);

	friend Money Sum(const Money& p1, const Money& p2);
	friend Money Diff(const Money& p1, const Money& p2);
	friend double Division(const Money& p1, const Money& p2);

};