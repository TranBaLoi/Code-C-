#include<bits/stdc++.h>
using namespace std;
int n,	a[100];
void XauNPke(int a[], int n)
{
	for(int i=1;i<=n;i++) a[i]=0;
	for(int i=1;i<=n;i++) cout << a[i];
	cout << endl;
	while(1)	
	{
		int i=n;
		while(i>0 && a[i]==1)
		{
			a[i]=0;
			--i;
			//tim vi tri dau tien = 1;
		}
		if(i==0)	return;
		else a[i]=1;
		for(int j=1;j<=n;j++)	cout << a[j];
		cout << endl;
	}
}
int main()
{
	cin >> n;
	XauNPke(a,n);
}
