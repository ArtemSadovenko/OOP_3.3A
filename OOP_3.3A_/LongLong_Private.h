#pragma once
#include "Base.h"
class LongLong_Private: private Base
{
public:
	void L_set_high(long a);
	void L_set_low(long  a);

	long L_get_high();
	long L_get_low();

	friend bool operator == (LongLong_Private& first, LongLong_Private& second);
	friend bool operator != (LongLong_Private& first, LongLong_Private& second);
	friend bool operator > (LongLong_Private& first, LongLong_Private& second);
	friend bool operator < (LongLong_Private& first, LongLong_Private& second);

	LongLong_Private();
	LongLong_Private(long a, long b);
	LongLong_Private(LongLong_Private& a);
	~LongLong_Private();

	friend ostream& operator << (ostream& out, LongLong_Private& a);
	friend istream& operator >> (istream& in, LongLong_Private& a);

	operator string();

	LongLong_Private& operator ++();
	LongLong_Private& operator --();
	LongLong_Private operator ++(int);
	LongLong_Private operator --(int);
};

