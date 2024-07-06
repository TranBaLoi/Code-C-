#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		ll a,b,c; cin >> a >> b >> c;
		a = a % (ll)(1e9+7);
		b = b % (ll)(1e9+7);
		c = c % (ll)(1e9+7);
		cout << ((a%c)*(b%c))%c << endl;
	}
}
