#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		long long a[n],k=0;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			if(a[i]!=0)	
			{
				cout << a[i] << " ";
				k++;
			}
		}
		for(int i=0;i<n-k;i++)	cout << "0 ";
		cout << endl;
	}
}
