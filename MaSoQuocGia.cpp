#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string s;	cin >> s;
		int k;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0' && s[i+1]=='8' && s[i+2]=='4')	k=i;
		}
		string s1=s.substr(0,k);
		string s2=s.substr(k+3,s.length()-k-3);
		string s3=s1+s2;
		cout << s3 << endl;
	}
}
