#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
	int cnt=0,cnt1=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			cnt1=0;
			while(n%i==0)
			{
				cnt1++;
				cnt++;
				n/=i;
			}
			if(cnt1==2)	return 0;
		}
	}
	if((n==1 && cnt==3) || (n!=1 && cnt==2))	return 1;
	return 0;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		if(check(n)==1)	cout << "1"	<< endl;
		else cout << "0" << endl;
	}
}
