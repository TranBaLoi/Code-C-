#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	string s;
		int a[10]={0};
		cin >> n >> s;
		for(int i=0;i<s.size();i++)
		{
			int tmp=s[i]-'0';
			if(tmp==1)	continue;
			else if(tmp==9)	
			{
				a[3]+=2;	a[7]++;	a[2]++;	
			}	
			else if(tmp==8)	
			{
				a[7]++; a[2]+=3;
			}
			else if(tmp==6)	
			{
				a[3]++;	a[5]++;
			}
			else if(tmp==4)
			{
				a[2]+=2;	a[3]++;
			}
			else a[tmp]++;
		}
		for(int i=7;i>=2;i--)
		{
			if(a[i]!=0)
			{
				for(int j=1;j<=a[i];j++)
				{
					cout << i;
				}
			}
		}
		cout << endl;
	}
}
