#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int thuannghich(string s)
{
	int l=0,r=s.length()-1;
	while(l<r)
	{
		if(s[l]!=s[r] || (s[l]-'0')%2!=0)	return 0;
		l++;r--;
	}
	return 1;
}
int main()
{
	int t;	cin >>t;
	while(t--)
	{
		string s;	cin >> s;
		if(thuannghich(s))	cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
