#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	set<ll> s;
	s.insert(0);
	s.insert(1);
	ll a[2]={0,1};
	for(int i=1;i<92;i++)
	{
		ll tong=a[0]+a[1];
		a[0]=a[1];
		a[1]=tong;
		s.insert(tong);
	}
	int t;	cin >> t;
	while(t--)
	{
		ll n;	cin >> n;
		if(s.count(n) !=0)	cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
