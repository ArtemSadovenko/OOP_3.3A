#include "Base.h"

Base::Base():
	high(0), low(0)
{
}

Base::Base(long a, long b):
	high(a), low(b)
{
}

Base::Base(Base& a):
	 high(a.high), low(a.low)
{
}

Base::~Base()
{
}

ostream& operator<<(ostream& out, Base& a)
{
	out << "high: " << a.high << endl;
	out << "low: " << a.low << endl;
	return out;
	// TODO: вставьте здесь оператор return
}

istream& operator>>(istream& in, Base& a)
{
	cout << "high: "; in >> a.high;
	cout << "low: "; in >> a.low;
	cout << endl;
	return in;
	// TODO: вставьте здесь оператор return
}
