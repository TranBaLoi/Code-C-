#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int i; cin >> i; 
	while(i--){ 
		int n; cin >> n; 
		int a[n]; 
		set <int> se; 
		for(int i = 0; i < n; i++){ 
			cin >> a[i]; 
			se.insert(a[i]); 
		} 
		vector <int> v; 
		for(auto x :se){ 
			v.push_back(x); 
		} 
		for(int i = 0; i < n; i++){ 
			bool check = false; 
			for(auto x :v){ 
				if(x > a[i]){ 
						check = true; 
						cout << x <<" "; break; 
					} 
				} 
			if(check == false){ 
				cout <<"_" <<" "; 
			} 
		} 
		cout << endl; 
	} 
	return 0; 
}
