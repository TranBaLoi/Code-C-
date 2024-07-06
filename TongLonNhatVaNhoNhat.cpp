#include<bits/stdc++.h>
using namespace std;
using ll=long long;
string sobe(string &a)
{
	for(int i=0;i<a.size();i++)
	{
		if(a[i]=='6')	a[i]='5';
	}
	return a;
}
string solon(string &a)
{
	for(int i=0;i<a.size();i++)
	{
		if(a[i]=='5')	a[i]='6';
	}
	return a;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string x1,x2;	cin >> x1 >> x2;
		ll m=stoll(sobe(x1));
		ll n=stoll(sobe(x2));
		cout << m+n << " ";
		m=stoll(solon(x1));
		n=stoll(solon(x2));
		cout << m+n << endl;
	}
}
