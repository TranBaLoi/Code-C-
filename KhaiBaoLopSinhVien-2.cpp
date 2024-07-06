#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv="B20DCCN001";
	string name;
	string lop;
	string ns;
	float gpa;
	
//	if(ns[1]=='/')	ns="0"+ns;
//		if(ns[4]=='/')	ns.insert(3,"0");
	friend istream& operator >> (istream& in, SinhVien &x){
		getline(in,x.name);
		in >> x.lop >> x.ns >> x.gpa;
		if(x.ns[1]=='/')	x.ns="0"+x.ns;
		if(x.ns[4]=='/')	x.ns.insert(3,"0");
		return in;
	}
	
	friend ostream& operator << (ostream& out, SinhVien x){
		out << x.msv  << " " << x.name << " " << x.lop << " " 
		<< x.ns << " " << fixed << setprecision(2) << x.gpa;
		return out;
	}
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}


