#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		int a[n];
		vector<int> v;
		for(int i=0; i<n; i++)	cin >> a[i];
		for(int i=0;i<n;i++)
		{
			if(a[i] != 0 && a[i+1] == a[i] && a[i+1] != 0)
			{
				v.push_back(2*a[i]);
				a[i+1]=0;
			}
			else if(a[i] != 0)
			{
				v.push_back(a[i]);
			}
		}
		for(auto x : v)	cout << x << " ";
		for(int i=v.size();i<n;i++)	cout << "0 " ;	
		cout << endl;
	}
}
