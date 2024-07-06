#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	int t;	cin >> t;
	set<ll> s;
	s.insert(0);
	s.insert(1);
	ll a=0,b=1;
	for(int i=1;i<92;i++)
	{
		ll tong=a+b;
		a=b;
		b=tong;
		s.insert(tong);
	}
	while(t--)
	{
		int n;	cin >> n;
		int a[n]; 
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			if(s.count(a[i])!=0)	cout << a[i] << " ";
		}
		cout << endl;
	}
}
