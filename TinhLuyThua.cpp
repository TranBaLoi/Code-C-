#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		ll x,y,z;	cin >> x >> y >>z;
		int sum=1;
		while(y--)
		{
			sum=((sum%z)*(x%z)%z);
		}
		cout << sum << endl;
	}
}
