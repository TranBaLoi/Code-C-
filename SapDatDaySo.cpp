#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n; cin >> n;
		long long a[n],result[n];
		for(int i=0;i<n;i++)	cin >> a[i];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==a[j]) 
				{
					result[i]=i;
					break;
				}
				else result[i]=-1;
			}
		}
		for(int i=0;i<n;i++)	cout << result[i] << " ";
		cout << endl;
	}
}
