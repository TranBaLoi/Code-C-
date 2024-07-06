#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
	map<char,int>	mp;
	for(auto x : s)	mp[x]++;
	int len = mp.size();
	int ans = 1e9, left=0;
	int dem[1000]={0}, cnt=0;
	for(int i=0;i<s.size();i++)
	{
		dem[s[i]]++;
		if(dem[s[i]] == 1)	cnt++;
		if(cnt == len)
		{
			while(dem[s[left]] > 1)
			{
				dem[s[left]]--;
				left++;
			}
			ans = min(ans, i-left+1);
		}
	}
	cout << ans << endl;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string s;	cin >> s;
		solve(s);
	}
}
