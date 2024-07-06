#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;	cin >> s;
		int max=-1e9,so=0,k=1;
		for(int i=0;i<s.size();i=i+k)
		{
			k=1;
			if(s[i]>='0' && s[i]<='9')
			{
				so=s[i]-'0';
				for(int j=i+1;j<s.size();j++)
				{
					if(s[j]>='0' && s[j]<='9')	
					{
						so=so*10+(s[j]-'0');
						k++;
					}
					else if(s[j]<'1' || s[j]>'9')
					{
						break;
					}	
				}	
				if(so>max)	max=so;
			}	
		}
		cout  << max << endl;
	}
}
