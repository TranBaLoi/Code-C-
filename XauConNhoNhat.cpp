#include<bits/stdc++.h>
using namespace std;
void solve(string s1, string s2)
{
	int ans = 1e9, left=0, id=-1, cnt=0;
	int dem1[1000]={0}, dem2[1000]={0};
	for(int i=0;i<s2.size();i++)
	{
		dem2[s2[i]]++;
	}
	for(int i=0;i<s1.size();i++)
	{
		dem1[s1[i]]++;
		if(dem1[s1[i]] <= dem2[s1[i]]) ++cnt;
		if(cnt == s2.size())
		{
			while(dem1[s1[left]] > dem2[s1[left]] || dem2[s1[left]]==0)
			{
				if(dem1[s1[left]] > dem2[s1[left]])	dem1[s1[left]]--;
				++left;
			}
			if(ans > i-left+1)
			{
				ans = i-left+1;
				id = left;
			}
		}
	}
	if(id == -1)
	{
		cout << "-1" << endl;
	}
	else cout << s1.substr(id, ans) << endl;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string s1, s2; cin >> s1 >> s2;
		solve(s1, s2);
	}
}
