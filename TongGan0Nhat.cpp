#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		int a[n],min=10e9;
		for(int i=0;i<n;i++)	cin >> a[i];
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(abs(min) > abs(a[i]+a[j]))	min=a[i]+a[j];
			}
		}
		cout << min <<endl;
	}
}
