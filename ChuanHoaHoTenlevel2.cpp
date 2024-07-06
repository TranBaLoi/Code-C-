#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string s)
{
	s[0]=toupper(s[0]);
	return s;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int k;	cin >> k;
		cin.ignore();
		string s;	getline(cin,s);
		transform(s.begin(),s.end(),s.begin(),::tolower); //kienthuc new hihi
		vector<string>	v;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp)
		{
			v.push_back(tmp);
		}
		if(k==1)
		{
			cout << chuanhoa(v[v.size()-1]) << " ";
			for(int i=0;i<v.size()-1;i++)	cout << chuanhoa(v[i]) << " ";
		}
		if(k==2)
		{
			for(int i=1;i<v.size();i++)	cout << chuanhoa(v[i]) << " ";
			cout << chuanhoa(v[0]) << " ";
		}
		cout << endl;
	}
}

