#pragma once
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

class Base
{
private:
	long int high;
	long int low;
public:
	void set_high(long a) { high = a; }
	long get_high() { return high; }

	void set_low(long a) { low = a; }
	long get_low() { return low; }

	Base();
	Base(long a, long b);
	Base(Base& a);
	~Base();
	
	friend ostream& operator << (ostream& out, Base& a);
	friend istream& operator >> (istream& in, Base& a);
};

