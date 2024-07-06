#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;	getline(cin,s);
		stringstream ss(s);
		string token;
		int chan=0,le=0;
		while(ss >> token)
		{
			if((token[token.size()-1]-'0')%2==0)	chan++;
			else le++;
		}
		if(((chan+le)%2==0 && chan >le)||
		((chan+le)%2==1 && chan < le)) cout <<"YES";
		else cout<<"NO";
		cout << endl;
	}
}
