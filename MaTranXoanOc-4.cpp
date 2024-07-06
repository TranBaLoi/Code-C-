#include<bits/stdc++.h>
#define FOR(i,a,b)	for(int i=a;i<=b;i++)
#define UNFOR(i,a,b)	for(int i=b;i>=a;i--)
using namespace std;
int main()
{
	int n;	cin >> n;
	int a[n][n],b[n*n],k=0,l=0;
	FOR(i,0,n-1)
	{
		FOR(j,0,n-1)	
		{
			cin >> a[i][j];
			b[k]=a[i][j];
			k++;
		}
	}
	sort(b,b+k);
	int h1=0,h2=n-1,c1=0,c2=n-1;
	while(h1<=h2 && c1<=c2)
	{
		FOR(i,c1,c2)	
		{
			a[h1][i]=b[l];
			l++;
		}
		h1++;
		FOR(i,h1,h2)	
		{
			a[i][c2]=b[l];
			l++;
		}
		c2--;
		if(h1<=h2)
		{
			UNFOR(i,c1,c2)
			{
				a[h2][i]=b[l];
				l++;
			}
			h2--;
		}
		if(c1<=c2)
		{
			UNFOR(i,h1,h2)
			{
				a[i][c1]=b[l];
				l++;
			}
			c1++;
		}
	}
	FOR(i,0,n-1)
	{
		FOR(j,0,n-1)	cout << a[i][j] << " ";
		cout << endl;
	}
}
