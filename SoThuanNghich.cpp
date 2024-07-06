#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		long long n,sum=0;	cin >> n;
		long long m=n;
		while(n>0)
		{
			sum=sum*10+n%10;
			n/=10;	
		}	
		if(sum==m)	cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
