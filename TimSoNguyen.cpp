#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int a=0;a<=10;a++)
	{
		for(int b=0;b<=10;b++)
		{
			for(int c=0;c<=10;c++)
			{
				for(int d=0;d<=10;d++)
				{
					if(a!=b && a!=c && a!=d &&b!=c && b!=d && c!=d)
					{
						if(a*d*d==b*c*c*c)	cout << a << " " << b  << " "<< c <<" " <<d << endl;
					}
				}
			}
		}
	}
}
