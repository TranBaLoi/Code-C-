#include<bits/stdc++.h>
using namespace std;
int n,x[100];
void Try(int i)
{
	for(int j=0;j<=1;j++)
	{
		x[i]=j;
		if(i==n)
		{
			for(int k=1;k<=n;k++)	cout << x[k] ;
			cout << endl;
		}
		else Try(i+1);
	}
}
int main()
{
	cin >> n;
	Try(1);
	return 0;
}
