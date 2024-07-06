#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n,m,k=0;	cin >> n >> m;
		vector<int> v;
		vector<int> v2;
		map<int, int>	mp;
		int a[n], b[m];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		for(int i=0;i<m;i++)
		{
			cin >> b[i];
		}
		for(int i=0;i<m;i++)
		{
			while(mp[b[i]] > 0)
			{
				v.push_back(b[i]);
				mp[b[i]]--;
			}
		}
		for(int i=0;i<n;i++)	
		{
			if(mp[a[i]] != 0)
			{
				v2.push_back(a[i]);
			}
		}
		sort(v2.begin(),v2.end());
		for(auto x : v2)
		{
			v.push_back(x);
		}
		for(auto x : v)	cout << x << " ";
		cout << endl;
	}
}
