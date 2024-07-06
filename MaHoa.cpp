#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string s;	cin >> s;
		int cnt[10000]={0};
		for(int i=0;i<s.size();i++)
		{
			cnt[(int)s[i]]++;
		}
		for(int i=0;i<s.size();i++)
		{
			if(cnt[(int)s[i]]!=0)	
			{
				cout << s[i] << cnt[(int)s[i]];
				cnt[(int)s[i]]=0;
			}
		}
		cout << endl;
	}
}
