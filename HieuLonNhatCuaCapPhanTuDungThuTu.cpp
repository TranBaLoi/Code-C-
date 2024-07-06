#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		int a[n],b[n*n],k=0;
		for(int i=0;i<n*n;i++)	b[i]=-1;
		for(int i=0;i<n;i++)	cin >> a[i];
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[j]-a[i]>0)	
				{
					b[k]=a[j]-a[i];
					k++;
				}
			}
		}
		sort(b,b+k);
		if(k==0)	cout << "-1" << endl;
		else cout << b[k-1]	<<endl;
		
	}
}
