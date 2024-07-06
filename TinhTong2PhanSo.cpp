#include<bits/stdc++.h>
using namespace std;
using ll=long long;
struct	PhanSo{
	ll x,y;
};
void nhap(PhanSo &A)
{
	cin >> A.x >> A.y;
}
PhanSo tong(PhanSo A, PhanSo B)
{
	PhanSo T;
	ll x1=A.x*B.y;
	ll x2=B.x*A.y;
	ll y12=A.y*B.y;
	ll x12=x1+x2;
	T.x=x12/(__gcd(x12,y12));
	T.y=y12/(__gcd(x12,y12));
	return T;
}
void in(PhanSo A)
{
	cout << A.x<< "/" << A.y;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
