#include<bits/stdc++.h>
using namespace std;
int check(long long a)
{
	while(a>0)
	{
		int n=a%10;
		if(n==1 || n==2 || n==3 || n==4 || n==5 || n==7|| n==9)	return 0;
		a/=10;
	}
	return 1;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		long long n;	cin >> n;
		if(check(n))	cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
