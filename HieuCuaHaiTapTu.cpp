#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;	cin.ignore();
	while(t--)
	{
		string s1,s2;	
		getline(cin,s1);	getline(cin,s2);
		set<string>	tap1;
		set<string>	tap2;
		stringstream s11(s1);
		stringstream s22(s2);
		string tmp,tmp1;
		while(s11 >> tmp)
		{
			tap1.insert(tmp);
		}
		while(s22 >> tmp1)
		{
			tap2.insert(tmp1);
		}
		for(auto i : tap1)	
		{
			if(tap2.count(i)==0)	cout << i << " ";
		}
		cout << endl;
	}
}
