#include<bits/stdc++.h>
using namespace std;
string thuong(string s){
	for(int i=0;i<s.length();i++)	s[i]=tolower(s[i]);
	return s;
}
string inhoa(string s){
	s[0]=toupper(s[0]);
	return s;
}
int main(){
	string s;
	vector<string> mp;
	while(cin >> s){
		s=thuong(s);
		mp.push_back(s);
	}
	int k=0,ok=0;
	while(k < mp.size()){
		if(ok==0){
			mp[k]=inhoa(mp[k]);
			ok=1;
		}
		int i=mp[k].length()-1;
		if(mp[k][i] == '.' || mp[k][i] == '!' || mp[k][i] == '?' ){
			mp[k].erase(i);
			cout << mp[k] << endl;
			ok=0;
		}
		else{
			cout << mp[k] << " ";
		}
		k++;
	}
}
