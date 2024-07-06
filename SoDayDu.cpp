#include<bits/stdc++.h>
using namespace std;
int check(string s)
{
	set<int> se;
	for(int i=0;i<s.size();i++)
	{
		if(s[0]=='0')	return 0;
		if(s[i]<'0' || s[i] >'9')	return 0;
		else 
		{
			se.insert(s[i]-'0');
		}
	}
	if(se.size()==10)	return 1;
	if(se.size() < 10)	return -1;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string s;	cin >> s;
		if(check(s)==1)	cout << "YES" << endl;
		else if(check(s)==-1) cout << "NO" << endl;
		else cout << "INVALID" << endl;
	}
}
