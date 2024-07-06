#include<bits/stdc++.h>
using namespace std;
string lower(string s)
{
	for(int i=0;i<s.size();i++)
	{
		s[i] = tolower(s[i]);
	}
	return s;
}
int main()
{
	set<string>	s,s1,s2;
	fstream file1, file2;
	file1.open("DATA1.in");
	file2.open("DATA2.in");
	string ss;
	while(file1 >> ss)
	{ 
		ss = lower(ss);
		s1.insert(ss);
		s.insert(ss);
	}
	while(file2 >> ss)
	{
		ss = lower(ss);
		s2.insert(ss);
		s.insert(ss);
	}
	for(auto x : s)	cout << x << " ";
	cout << endl;
	for(auto x : s1)
	{
		if(s2.count(x) != 0)	cout << x << " ";
	}
	file1.close();
	file2.close();
}
