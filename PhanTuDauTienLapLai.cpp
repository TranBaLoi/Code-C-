#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		int a[n],ok=0;
		map<int , int>	mp;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		for(int i=0;i<n;i++)
		{
			mp[a[i]]++;
			if(mp[a[i]]==2)	
			{
				cout << a[i];
				ok=1;
				break;
			}
		}
		if(ok==0)	cout << "-1";
		cout <<endl;
	}
}
