#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n,k; 	cin >> n >> k;
		int a[n][k],b[n*k],m=0;;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<k;j++)
			{
				cin >> a[i][j];
				b[m]=a[i][j];
				m++;
			}
		}
		sort(b,b+m);
		for(int i=0;i<m;i++)	cout << b[i] << " ";
		cout << endl;
	}
}
