#include<bits/stdc++.h>
#include<math.h>
using namespace std; 
int check(string s)
{
	for(int i=1;i<s.length();i++)
	{
		if(abs(s[i]-'0'-(s[i-1]-'0'))!=1)	return 0;
	}
	return 1;
}
int main()
{
	int t;	cin >>t;
	while(t--)
	{
		string s;	cin>>s;
		if(check(s))	cout << "YES"<<endl;
		else cout << "NO" <<endl;
	}
}
