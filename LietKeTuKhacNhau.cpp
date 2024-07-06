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
	set<string> ss;
	fstream file;
	file.open("VANBAN.in");
	string s;
	while(file >> s)
	{
		s = lower(s);
		ss.insert(s);
	}
	for(auto x : ss)	cout << x << endl;
	file.close();
}
