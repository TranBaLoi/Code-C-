#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr1[15]={0,1,1,0,3,2,2,0,1,3,2,2,0,1,3};
	int arr2[15]={0,2,2,0,1,2,3,3,1,1,2,3,3,1,1};
	int t;	cin >> t;
	while(t--)
	{
		int made;	cin >> made;
		int kt=0;
		if(made==101)
		{
			for(int i=0;i<15;i++)
			{
				char s;	cin >> s;
				if(arr1[i]==s-'A')	kt+=1;
			}
		}
		else if(made==102)
		{
			for(int i=0;i<15;i++)
			{
				char s;	cin >> s;
				if(arr2[i]==s-'A')	kt+=1;
			}
		}
		cout << fixed << setprecision(2) << (double)kt*10/15 << endl;
	}
}
