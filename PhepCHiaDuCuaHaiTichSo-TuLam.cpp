#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int p = 1e9+7;
int check(ll a, ll b, ll c)
{
	ll d = ((a%c) * (b%c)) % c;
	return d;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		ll a,b,c; cin >> a >> b >>c;
		check(a,b,c);
		cout << endl;
	}
}
