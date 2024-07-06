#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	cin.ignore();
	map<string,int>	mp;
	while(t--)
	{
		string s;	getline(cin, s);
		transform(s.begin(),s.end(),s.begin(),::tolower);
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss >> tmp)
		{
			v.push_back(tmp);
		}
		string email=v[v.size()-1];
		for(int i=0;i<v.size()-1;i++)	
		{
			email+=v[i][0];
			mp[email]++;
		}
		if(mp[email]>1)	email=email+to_string(mp[email]);
		cout << email << "@ptit.edu.vn" << endl;
	}
}
