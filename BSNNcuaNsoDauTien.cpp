#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
	while(b!=0)
	{
		int tmp=b;
		b=a%b;
		a=tmp;
	}
	return a;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >>n;
		long long lcm=1;
		for(int i=2;i<=n;i++)
		{
			lcm=lcm*i/gcd(lcm,i);
		}
		cout << lcm << endl;
	}
}
