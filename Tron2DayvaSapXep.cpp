#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n,m; 	cin >> n >> m;
		int a[n],b[m],c[n+m],k=0;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			c[k]=a[i];
			k++;
		}
		for(int i=0;i<m;i++)
		{
			cin >> b[i];
			c[k]=b[i];
			k++;
		}
		sort(c,c+k);
		for(int i=0;i<k;i++)	cout << c[i] << " ";
		cout << endl;
	}
}
