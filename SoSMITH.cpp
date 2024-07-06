#include<bits/stdc++.h>
using namespace std;
int snt(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return 1;
	}
	return 0;
}
int sum(int n)
{
	int tong=0;
	while(n>0)
	{
		tong+=(n%10);
		n/=10;
	}
	return tong;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		int tong1=0,tong=sum(n);
		if(snt(n))	
		{
			for(int i=2;i<=sqrt(n);i++)
			{
				if(n%i==0)
				{
					while(n%i==0)
					{
						tong1+=sum(i);
						n/=i;
					}
				}
			}
			if(n!=1)	tong1+=sum(n);
			if(tong1==tong)	cout << "YES";
			else cout << "NO";
		}
		else cout << "NO";
		cout << endl;
	}
}
