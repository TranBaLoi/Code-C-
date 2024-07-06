#include<bits/stdc++.h>
using namespace std;
using ll=long long;
class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(ll tu = 1, ll mau = 1){
			this->tu = tu;
			this->mau = mau;
		}
		friend istream& operator >> (istream&, PhanSo&);
		friend ostream& operator << (ostream&, PhanSo);
		friend PhanSo operator + (PhanSo, PhanSo);
};
istream& operator >> (istream& in, PhanSo& x){
	in >> x.tu >> x.mau;
	return in; 
}
ostream& operator << (ostream& out, PhanSo x){
	out << x.tu << "/" << x.mau;
	return out;
}
PhanSo operator + (PhanSo a, PhanSo b){
	PhanSo tong;
	ll mc = a.mau * b.mau;
	ll tu = a.tu * b.mau + b.tu * a.mau;
	tong.tu = tu / __gcd(tu,mc);
	tong.mau = mc / __gcd(tu,mc);
	return tong;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

