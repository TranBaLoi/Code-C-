#include<bits/stdc++.h>
using namespace std;
using ll=long long;
struct PhanSo{
	ll a;
	ll b;
};
void nhap(PhanSo &A)
{
	cin >> A.a >> A.b;
}
void rutgon(PhanSo A)
{
}
void in(PhanSo A)
{
	cout << A.a/(__gcd(A.a,A.b)) << "/" << A.b/(__gcd(A.a,A.b));
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
