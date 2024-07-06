#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		int a[n];
		map<int,int> mp;
		set<int, greater<int> > s;
		for(auto &x : a)	
		{
			cin >> x;
			mp[x]++;
		}
		for(auto x : mp)	s.insert(x.second);	
		for(auto x : s)
		{
			for(auto it : mp)
			{
				if(it.second == x)	
				{
					while(it.second--)
					{
						cout << it.first << " ";
					}
				}
			}
		}
		cout << endl;
	}
}
