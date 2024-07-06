#include<bits/stdc++.h>
using namespace std;
int n , k, a[100];
void LkeTohop(int i)
{
	for(int j=a[i-1]+1; j<= n-k+i; j++)
	{
		a[i]=j;
		if(i==k)
		{
			for(int m=1;m<=k;m++)	cout << a[m];
			cout << " ";
		}
		else LkeTohop(i+1);
	}
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		LkeTohop(1);
		cout << endl;
	}
}

