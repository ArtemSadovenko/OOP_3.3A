#include "LongLong_Private.h"

void LongLong_Private::L_set_high(long  a) {
	set_high(a);
}

void LongLong_Private::L_set_low(long a) {
	set_low(a);
}

long LongLong_Private::L_get_high() {
	return get_high();
}

long LongLong_Private::L_get_low() {
	return get_low();
}



LongLong_Private::LongLong_Private()
{
	set_high(0);
	set_low(0);

}

LongLong_Private::LongLong_Private(long a, long b)
{
	set_high(a);
	set_low(b);
}

LongLong_Private::LongLong_Private(LongLong_Private& a)
{
	set_high(a.get_high());
	set_low(a.get_low());
}

LongLong_Private::~LongLong_Private()
{
}

LongLong_Private::operator string()
{
	stringstream sout;
	sout << "high = " << get_high() << endl <<
		"low = " << get_low() << endl;
	return sout.str();
}

LongLong_Private& LongLong_Private::operator++()
{
	set_high(get_high() + 1);
	return *this;
	// TODO: вставьте здесь оператор return
}

LongLong_Private& LongLong_Private::operator--()
{
	set_high(get_high() - 1);
	return *this;
	// TODO: вставьте здесь оператор return
}

LongLong_Private LongLong_Private::operator++(int)
{
	LongLong_Private t(*this);
	set_low(get_low() + 1);
	return t;
}

LongLong_Private LongLong_Private::operator--(int)
{
	LongLong_Private t(*this);
	set_low(get_low() - 1);
	return t;
}


bool operator==(LongLong_Private& first, LongLong_Private& second)
{
	return first.get_high() == second.get_high() && first.get_low() == second.get_low();
}

bool operator!=(LongLong_Private& first, LongLong_Private& second)
{
	return !(first == second);
}

bool operator>(LongLong_Private& first, LongLong_Private& second)
{
	return first.get_high() > second.get_high() || (first.get_high() == second.get_high() && first.get_low() > second.get_low());
}

bool operator<(LongLong_Private& first, LongLong_Private& second)
{
	return !(first > second);
}

ostream& operator<<(ostream& out, LongLong_Private& a)
{
	out << "high: " << a.get_high() << endl;
	out << "low: " << a.get_low() << endl;
	return out;
	// TODO: вставьте здесь оператор return
}

istream& operator>>(istream& in, LongLong_Private& a)
{
	long h;
	long l;
	cout << "high: "; in >> h;  a.set_high(h);
	cout << "low: "; in >> l;  a.set_low(l);
	cout << endl;
	return in;
	// TODO: вставьте здесь оператор return
}
