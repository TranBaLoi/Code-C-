#include<bits/stdc++.h>
using ll = long long;
using namespace std;
ll P = 1e9 + 7;
ll fac(int n)
{
	ll fac1=1;
	for(int i=2;i<=n;i++)
	{
		fac1 *= i;
		fac1 = fac1 % P;
	}
	return fac1; 
}
int main()
{
	int t;cin >> t;
	while(t--)
	{
		int n ,k; cin >> n >> k;
		cout << (fac(n) / (fac(n-k)*fac(k))) % P << endl;
	}
}
