#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string s;	cin >> s;
		int a[27]={0},ok=1;
		for(char x : s)
		{
			a[x-'a']++;
			if(a[x-'a'] > (s.length()+1)/2)	
			{
				ok=0;
				break;
			}
		}
		cout << ok << endl;
	}
}
