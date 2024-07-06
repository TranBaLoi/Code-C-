#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		ll x,y,z,n;	cin >> x >> y >> z >> n;
		ll xy=x*y/__gcd(x,y);
		ll lcm=xy*z/(__gcd(xy,z));
		if(lcm>pow(10,n))	cout << "-1" << endl;
		else 
		{
			ll l=pow(10,n-1)/lcm, r=pow(10,n);
			for(ll i=l;i<r;i++)
			{
				if(lcm*i >=pow(10,n-1) && lcm <pow(10,n))
				{
					cout << lcm *i << endl;
					break;
				}
			}
		}
	}
}
