#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	cin.ignore();
	while(t--)
	{
		int n;	cin >> n;
		cin.ignore();
		int a[10000],k=0,cnt[10000]={0};
		string s;	getline(cin,s);
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='0' && s[i] <='9')	
			{
				a[k]=s[i]-'0';
				k++;	
			}	
		}
		for(int i=0;i<k;i++)	cnt[a[i]]++;
		sort(a,a+k);
		for(int i=0;i<k;i++)
		{
			if(cnt[a[i]]!=0)
			{
				cout << a[i] << " ";
				cnt[a[i]]=0;
			}
		}
		cout << endl;
		
	}
}
