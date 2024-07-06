#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n,k;	cin>>n >> k;
		int a[n];
		for(int i=0;i<n;i++)	cin >> a[i];
		while(k--)
		{
			int l,r,sum=0;	cin >> l >> r;
			for(int i=l-1;i<r;i++)
			{
				sum+=a[i];
			}
			cout << sum << endl;
		}
	}
}
