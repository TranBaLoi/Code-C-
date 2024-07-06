#include<bits/stdc++.h>
using namespace std;
string init(string s)
{
	map<char,int> mp;
	int sum=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]<'0' || s[i] >'9')	mp[s[i]]++;
		else sum+=s[i]-'0';
	}
	string a;
	for(auto x : mp)
	{
		for(int i=0;i<x.second;i++)
		{
			a=a+x.first;
		}
	}
	return a+to_string(sum);
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string s;	cin >> s;
		cout << init(s) << endl;
	}
}
