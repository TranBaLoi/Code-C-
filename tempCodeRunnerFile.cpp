#include<bits/stdc++.h>
using namespace std;
string viethoa(string s)
{
	for(int i=0;i<s.length();i++)
	{
		s[i]=toupper(s[i]);
	}
	return s;
}
int main()
{
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++)	s[i]=tolower(s[i]);
	stringstream ss(s);
	string token;
	vector<string> v;
	int k=0;
	while(ss >> token)
	{
		v.push_back(token);
	}
	int length=v.size();
	for(int i=0;i<length-1;i++)
	{
		v[i][0] = toupper(v[i][0]);
		if(i!=length-2)	cout << v[i] << " ";
		else cout << v[i];
	}
	cout << ", " << viethoa(v[length-1]);
}
	
