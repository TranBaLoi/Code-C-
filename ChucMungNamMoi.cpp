#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	int t;	cin >> t;
	vector<string> v;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		v.push_back(s);
	}
	int cnt=1;
	for(int i=1;i<v.size();i++)
	{
		int ok=0;
		for(int j=0;j<i;j++)
		{
			if(v[i].compare(v[j])==0)
			{
				ok=1;	break;
			}
		}
	if(ok==0)	++cnt;	
	}
	cout << cnt << endl;
}
