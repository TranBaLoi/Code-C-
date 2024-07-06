#include<bits/stdc++.h>
using namespace std;
int mountain(int a[],int n,int l,int r)
{
	int res=l,check=1;
	for(int i=l;i<r;i++)
	{
		if(a[i] > a[i+1])
		{
			res=i+1;
			break;
		}
	}
	if(res==r)	return 1;
	if(res!=l)
	{
		for(int i=res;i<r;i++)
		{
			if(a[i] < a[i+1])	return 0;
		}
	}
	return 1;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		int a[n];
		for(int i=0;i<n;i++)	cin >> a[i];
		int l,r;	cin >> l >> r;
		if(mountain(a,n,l,r))	cout << "Yes" <<endl;
		else cout << "No" << endl;
	}
}
