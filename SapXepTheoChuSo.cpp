#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
	string s1 = a + b;
	string s2 = b + a;
	return s1 > s2;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		vector<string>	v;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			v.push_back(to_string(a[i]));	
		}	
		sort(v.begin(),v.end(),cmp);
		for( auto x : v)	cout << x ;
		cout << endl;
	}
}
