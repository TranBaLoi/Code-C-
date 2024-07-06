#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string s;
		int k,cnt=0;	cin >> s >> k;
		for(int i=0;i<s.length();i++)
		{
			set<char> se;
			for(int j=i;j<s.length();j++)
			{
				se.insert(s[j]);
				if(se.size()==k)	cnt++;
				if(se.size() > k) break;
			}
		}
		cout << cnt << endl;
	}
}
