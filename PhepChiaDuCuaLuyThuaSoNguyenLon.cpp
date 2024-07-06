#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1e9 + 7;
ll Mod1(string s, ll k)
{
	ll r = 0;
	for(int i=0;i<s.length();i++)
	{
		r = r*10 + (s[i] - '0');
		r %= k;
	}
	return r;
}
ll PowInt(ll a, ll b, ll k)
{
	ll res=1;
	while(b)
	{
		if(b%2 == 1)
		{
			res *= a;
			res %= k;
		}
		a *= a;
		a %= k;
		b /= 2;
	}
	return res;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		string a;
		ll b, k;
		cin >> a >> b >> k;
		cout << PowInt(Mod1(a,k), b, k);
		cout << endl;
	}
}
