#include<bits/stdc++.h> 
using namespace std; 
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string n;
		long long m,res=0;	cin >> n >> m;
		for(auto x : n)
		{
			res=res*10+(x-'0');
			if(res>=m)	res=res%m;	
		}
		cout << res << endl;
	}
	
}
