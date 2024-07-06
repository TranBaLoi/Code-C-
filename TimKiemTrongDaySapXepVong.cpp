#include<bits/stdc++.h>
using namespace std;
int first_pos(int a[],int n,int x)
{
	int l=0,r=n-1,res=-1;
	while(l<=r)
	{
		int m=(l+r)/2;
		if(a[m] == x)	
		{
			res=m;
			r=m-1;
		}
		else if(a[m] < x)	l=m+1;
		else r=m-1;
	}
	return res+1;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n,x; cin >> n >> x;
		int a[n],b[n],k=1;
		for(int i=0;i<n;i++)	cin >> a[i];
		b[0]=a[0];
		for(int i=0;i<n-1;i++)
		{
			if(a[i]<=a[i+1])	
			{
				b[k]=a[i+1];
				k++;
				a[i]=0;
			}
			else break;
		}
		a[k-1]=0;
		if(x>=b[0] && x<=b[k-1]	)	cout << first_pos(b,k,x);
		else cout << first_pos(a,n,x);
		cout << endl;
	}
}
