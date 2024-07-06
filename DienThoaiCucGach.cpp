#include<bits/stdc++.h>
using namespace std;
int check(string s)
{
	int l=0,r=s.size()-1;
	while(l<r)
	{
		if(s[l]!=s[r])	return 0;
		l++;r--;
	}
	return 1;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string s,s1;	cin >> s;
		for(int i=0;i<s.length();i++)
		{
			if((s[i]>='a' && s[i]<='c') ||(s[i]>='A' && s[i]<='C'))	s1=s1+"2";
			else if((s[i]>='d' && s[i]<='f') ||(s[i]>='D' && s[i]<='F'))	s1=s1+"3";
			else if((s[i]>='g' && s[i]<='i') ||(s[i]>='G' && s[i]<='I'))	s1=s1+"4";
			else if((s[i]>='j' && s[i]<='l') ||(s[i]>='J' && s[i]<='L'))	s1=s1+"5";
			else if((s[i]>='m' && s[i]<='o') ||(s[i]>='M' && s[i]<='O'))	s1=s1+"6";
			else if((s[i]>='p' && s[i]<='s') ||(s[i]>='P' && s[i]<='S'))	s1=s1+"7";
			else if((s[i]>='t' && s[i]<='v') ||(s[i]>='T' && s[i]<='V'))	s1=s1+"8";
			else if((s[i]>='w' && s[i]<='z') ||(s[i]>='W' && s[i]<='Z'))	s1=s1+"9";
		}
		if(check(s1))	cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
