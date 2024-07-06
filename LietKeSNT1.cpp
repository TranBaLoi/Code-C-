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
	int a,b;	cin >> a >> b;
	if(a>b)	
	{
		int tmp=a;
		a=b;
		b=tmp;
	}
	for(int i=a;i<=b;i++)
	{
		if(snt(i))	cout << i << " ";
	}
	cout << endl;
	}
}
