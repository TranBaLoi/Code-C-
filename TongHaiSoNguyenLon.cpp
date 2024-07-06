#include<bits/stdc++.h>
using namespace std;
string cal(string a,string b)
{
	string c;
	for(int i=b.size();i<a.size();i++)
	{
		b="0"+b;
	}
	int nho=0;
	for(int i=a.size()-1;i>=0;i--)
	{
		int n=a[i]-'0';
		int m=b[i]-'0';
		int p=n+m+nho;
		if(p >= 10)
		{
			c=to_string(p%10)+c;
			nho=1;
		}
		else 
		{
			c=to_string(p)+c;
			nho=0;
		}
	}
	if(nho==1)	c="1"+c;
	return c;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string a,b;	cin >> a >> b;
		if(a.size() >= b.size())	cout << cal(a,b);
		else cout << cal(b,a);
		cout << endl;
	}
}
