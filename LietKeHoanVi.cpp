#include<bits/stdc++.h>
using namespace std;
void Hvi(int m, int a[], int vs[], int n)
{
	if(m > n)
	{
		for(int i=1;i<=n;i++)	cout << a[i];
		cout << " ";
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(vs[i] == 0)
		{
			a[m] = i;
			vs[i] = 1;
			Hvi(m+1, a, vs , n);
			vs[i] = 0;
		}
	}
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n, a[100]={0}, vs[100] = {0};
		cin >> n;
		for(int i=1;i<=n;i++)	a[i] = i;
		Hvi(1,a,vs,n);
		cout << endl; 
	}
}
