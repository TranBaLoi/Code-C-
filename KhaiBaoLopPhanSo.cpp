#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long t=1, long long m=1)
		{
			tu = t, mau = m;
		}
		friend istream& operator >> (istream& in, PhanSo&x)
		{
			in >> x.tu >> x.mau;
			return in;
		}
		friend ostream& operator << (ostream& out, PhanSo x)
		{
			out << x.tu << "/" << x.mau;
			return out;
		}
		void rutgon();
};
void PhanSo::rutgon()
{
	long long t = __gcd(tu,mau);
	tu = tu / t;	mau = mau / t;
}
int main()
{
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
