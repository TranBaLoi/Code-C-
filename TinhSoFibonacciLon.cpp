#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> v;
ll mod = 1e9+7;
void fibonacci()
{
	v.push_back(0);
	v.push_back(1);
	for(int i = 2;i <= 1000 ; i++)
	{
		v.push_back((v[i-1]%mod + v[i-2]%mod) % mod);
	}
}
int main()
{
	int t;	cin >> t;
	fibonacci();
	while(t--)
	{
		int n; cin >> n;
		cout << v[n] << endl;
	}
}
