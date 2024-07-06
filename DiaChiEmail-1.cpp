#include<bits/stdc++.h>
using namespace std;
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
	cout<<v[v.size()-1];
	for(int i=0;i<v.size()-1;i++)
	{
		cout << v[i][0] ;
	}
	cout<< "@ptit.edu.vn";
}
