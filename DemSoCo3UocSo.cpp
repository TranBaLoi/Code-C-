#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int check(ll n)
{
	for(ll i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		ll n;	cin >> n;
		int cnt=0;
		for(ll i=2;i<=sqrt(n);i++)	
		{
			if(check(i))	cnt++;
		}
		cout << cnt << endl;
	}
}
