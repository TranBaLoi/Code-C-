#include<bits/stdc++.h>
using namespace std;
int snt(int n)
{
	if(n==1||n==2)	return n;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return i;
	}
	return n;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;		cin >> n;
		for(int i=1;i<=n;i++)
		{
			cout << snt(i) << " ";
		}
		cout << endl;
	}
}
