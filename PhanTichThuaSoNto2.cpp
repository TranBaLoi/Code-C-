#include<iostream>
using namespace std;
int main()
{
	int n;	cin >> n;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			int cnt=0;
			while(n%i==0)
			{
				cnt++;
				n/=i;
			}
			cout << i << " "<< cnt<<endl;
		}
	}
	if(n!=1)	cout << n << " 1" << endl;
}
