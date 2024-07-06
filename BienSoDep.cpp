#include<bits/stdc++.h>
using namespace std;
int check(string s)
{
	int ok=0;
	if(s[5]<s[6] && s[6]<s[7] && s[7] < s[9] && s[9] < s[10])	return 1;
	if(s[5]==s[6] && s[6]==s[7] && s[7] == s[9] && s[9] == s[10])	return 1;
	if(s[5]==s[6] && s[6]==s[7] && s[9] == s[10])	return 1;
	for(int i=5;i<11;i++)
	{
		if(i==8)	continue;
		if(s[i]=='6' || s[i] =='8')	ok=1;
		else return 0;
	}
	return 1;
}
int main()
{
	int t;	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;	getline(cin, s);
		if(check(s))	cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
