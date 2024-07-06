#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		long long sum=0;
		if(n%2==0)	sum=(n+1)*(n/2);
		else sum=(n+1)*(n/2)+(n+1)/2;
		cout << sum << endl;
	}
}
