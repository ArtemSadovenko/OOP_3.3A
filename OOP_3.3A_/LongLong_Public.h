#pragma once
#include "Base.h"

class LongLong_Public: public Base
{
public:
	void L_set_high(long a);
	void L_set_low(long  a);

	long L_get_high();
	long L_get_low();

	friend bool operator == (LongLong_Public& first, LongLong_Public& second);
	friend bool operator != (LongLong_Public& first, LongLong_Public& second);
	friend bool operator > (LongLong_Public& first, LongLong_Public& second);
	friend bool operator < (LongLong_Public& first, LongLong_Public& second);

	LongLong_Public();
	LongLong_Public(long a, long b);
	LongLong_Public(LongLong_Public& a);
	~LongLong_Public();

	/*friend ostream& operator << (ostream& out, LongLong_Public& a);
	friend istream& operator >> (istream& in, LongLong_Public& a);*/

	operator string();

	LongLong_Public& operator ++();
	LongLong_Public& operator --();
	LongLong_Public operator ++(int);
	LongLong_Public operator --(int);
};

