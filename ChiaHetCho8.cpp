#include<bits/stdc++.h>
using namespace std;
int check(string s, int n)
{
	int cnt = 0;
	for(int i=0;i<s.length();i++)
	{
		int sum = 0;
		for(int j=i; j<s.length(); j++)
		{
			sum = sum*10 + s[j] - 48;
			sum %= n;
			if(sum == 0)	cnt++;
		}
	} 
	return cnt;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string s;	cin >> s;
		cout << check(s,8) - check(s,24) << endl ;
	}
	return 0;
}
