#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		ll n, m, p;	cin >> n >> m >> p;
		ll a[n], b[m], c[p];
		set<ll> s1, s2, s3;
		for(auto &x : a)
		{
			cin >> x;
			s1.insert(x);
		}
		for(auto &x : b)
		{
			cin >> x;
			s2.insert(x);
		}
		for(auto &x : c)
		{
			cin >> x;
			s3.insert(x);
		}
		int ok = 0;
		for(auto it : s1)
		{
			if(s2.count(it)!=0 && s3.count(it)!=0)
			{
				ok=1;
				cout << it << " ";
			} 
		}
		if(ok==0)	cout << "-1";
		cout << endl;
	}
}
