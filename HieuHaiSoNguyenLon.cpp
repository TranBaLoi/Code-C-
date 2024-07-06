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
	for(int k=a.size()-1;k>=0;k--)
	{
		int n=a[k]-'0';
		int m=b[k]-'0';
		if(n-m-nho < 0)
		{
			int p=10+n-m-nho;
			string d=to_string(p);
			c=d+c;
			nho=1;
		}
		else 
		{
			int p=n-m-nho;
			string d=to_string(p);
			c=d+c;
			nho=0;
		}
	}
	return c;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string a,b;	cin >> a >> b;
		if(a.size() > b.size())	cout << cal(a,b);
		else if(a.size() == b.size() && a>b)	cout << cal(a,b);
		else cout << cal(b,a);
		cout << endl;
	}
}
