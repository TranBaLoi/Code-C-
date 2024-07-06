#include<bits/stdc++.h>
using namespace std;
int snt(int n)
{
	if(n==1 || n==0)	return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int cnt=0, x;	cin >> x;
		for(int i=1;i<=x;i++)
		{
			if(__gcd(x,i)==1)	++cnt;	
		} 
		if(snt(cnt))	cout << 1 << endl;
		else cout << 0 << endl;
	}
}
