#include<bits/stdc++.h>
using namespace std;
int sum(string s)
{
	int tong=0;
	for(int i=0;i<s.size();i++)
	{
		tong+=s[i]-'0';
	}
	return tong;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string s;	cin >> s;
		if(sum(s)%9==0 && s!="0")	cout << 1 ;
		else cout << 0 ;
		cout << endl;
	}
}
