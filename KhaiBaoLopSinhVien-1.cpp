#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv="B20DCCN001";
	string name;
	string lop;
	string ns;
	float gpa;
	
	void nhap()
	{
		getline(cin,name);
		cin >> lop >> ns >> gpa;
	}
	void xuat()
	{
		if(ns[1]=='/')	ns="0"+ns;
		if(ns[4]=='/')	ns.insert(3,"0");
		cout << msv << " " << name << " " << lop << " " << ns << " "
		<< fixed << setprecision(2) << gpa;
	}
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

