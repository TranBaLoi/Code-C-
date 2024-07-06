#include<bits/stdc++.h>
using namespace std;
int n,x[100],vs[100];
void Try(int m)
{
	if(m>n)
	{
		for(int i=1;i<=n;i++)	cout << x[i];
		cout << endl;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(vs[i]==0)
		{
			x[m]=i;
			vs[i]=1;
			Try(m+1);
			vs[i]=0;
		}
	}
}
int main()
{
	for(int i=1;i<=n;i++)
	{
		vs[i]=0; // mang danh dau 
	}
	cin >> n;
	Try(1);
	return 0;
}
