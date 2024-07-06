#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int m=n-1;
		int a[m];
		for(int i=0;i<m;i++)	cin >> a[i];
		for(int i=1;i<m;i++)
		{
			if(a[i]-a[i-1]>1) 
			{
				cout << a[i-1]+1 << endl;
				break;
			}
		}
	}
}
