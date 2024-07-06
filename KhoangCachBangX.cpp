#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin >> t;
	while(t--){
		int n, x,ok=0; cin >> n >> x;
		int a[n];
		set<int> s;
		for(int i=0;i<n;i++)	
		{
			cin >> a[i];
			s.insert(a[i]);
		}
		for(auto it : s)
		{
			if(ok==0)
			{
				int cnt=it+x;
				if(s.find(cnt) != s.end())	
				{
					ok=1;
					cout << 1;
				}
			}
		}
		if(ok==0)	cout << -1;
		cout << endl;
	}
}
