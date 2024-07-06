#include<iostream>
using namespace std;
int main()
{
	int n;	cin >> n;
	long long sum=0,a=1;
	for(int i=1;i<=n;i++)
	{
		a=a*i;
		sum+=a;
	}
	cout << sum;
}
