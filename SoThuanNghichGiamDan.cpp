#include<bits/stdc++.h>
using namespace std;
struct cmp{
	bool operator()(const string& a, const string& b)
	{
		if(a.size()==b.size())	return a > b;
		else return a.size()>b.size();
	}
};
int check(string s)
{
	if(s.size()<2)	return 0;
	int l=0, r=s.size()-1;
	while(l<=r)
	{
		if(s[l]!=s[r])	return 0;
		l++; r--;
	}
	return 1;
}
int main()
{
	string s;
	map<string, int,cmp> mp;
	while(cin >> s)
	{
		if(check(s))	mp[s]++;
	}
	for(auto it : mp)	cout << it.first << " " << it.second << endl;
}
