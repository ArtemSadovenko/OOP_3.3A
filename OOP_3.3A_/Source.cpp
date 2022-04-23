#include "LongLong_Private.h"
#include"LongLong_Public.h"

int main() {
	LongLong_Private a_priv(13, 223);
	LongLong_Private b_priv(a_priv);
	b_priv++;
	--b_priv;

	LongLong_Public a_pub(1234, 325);
	LongLong_Public b_pub(a_pub);
	++b_pub;
	b_pub--;

	cout << a_priv;
	cout << b_priv << endl;

	cout << a_pub;
	cout << b_pub << endl;

	cin >> a_priv;
	cout << a_priv << endl;

	cin >> a_pub;
	cout << a_pub << endl;

	cout << (a_priv == b_priv) << endl;
	cout << (a_pub == b_pub) << endl;

	return 0;
}