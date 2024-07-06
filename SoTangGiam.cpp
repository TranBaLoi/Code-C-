#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int snt(ll n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
int check(ll n)
{
	int cnt1=0,cnt2=0;
	while(n>9)
	{
		if((n%10) > ((n/10)%10))	cnt1++;
		else if((n%10) < ((n/10)%10))	cnt2++;
		n=n/10;
	}
	if(cnt1>cnt2)	return cnt1;
	else if(cnt1< cnt2)	return cnt2;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int cnt=0;
		int n; cin >> n;
		int l=pow(10,n-1),r=pow(10,n);
		
		for(int i=l;i<r;i++)
		{
			if( check(i)==n-1)
			{
				if(snt(i))	cnt++;
			}
		}
		cout  << cnt << endl;
	}
}

