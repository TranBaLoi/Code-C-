#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n,x;	cin >> n >> x;
		int a[n],b[n];
		map<int,int> mp;
		for(int i=0;i<n;i++)	
		{
			cin >> a[i];
			b[i]=abs(x-a[i]);
		}
		sort(b,b+n);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(abs(x-a[j])==b[i])	
				{
					cout << a[j] << " " ;
					a[j]=-1e6;
					break;
				}
			}
		}
		cout << endl;
	}
}
