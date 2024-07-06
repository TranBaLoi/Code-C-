#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string s;	cin >> s;
		int cnt[100000]={0};
		for(int i=0;i<s.length();i++)
		{
			cnt[s[i]-'0']++;
		}
		for(int i=0;i<s.length();i++)
		{
			if(cnt[s[i]-'0']==1)	cout << s[i];
		}
		cout << endl;
	}
}
