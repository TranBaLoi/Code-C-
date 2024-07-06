#include<bits/stdc++.h>
using namespace std;
int snt(int n)
{
	if(n==0 || n==1)	return 0;
	else if(n==2)	return 1;
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
		int n;	cin >> n;
		int ok=1;
		for(int i=2;i<=n/2;i++)
		{
			if(snt(i) && snt(n-i))
			{
				cout << i << " " << n-i << endl;
				ok=0;
				break;
			}
		}
		if(ok==1)	cout << "-1" <<endl;
	}
}
