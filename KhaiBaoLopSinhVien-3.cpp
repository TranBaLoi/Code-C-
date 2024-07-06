#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv="B20DCCN001";
	string name;
	string lop;
	string ns;
	float gpa;
	
	friend istream& operator >> (istream& in, SinhVien &x)
	{
		getline(in,x.name);
		for(int i=0;i<x.name.size();i++)
		{
			x.name[i]=tolower(x.name[i]);
		}
		in >> x.lop >> x.ns	>> x.gpa;
		if(x.ns[1]=='/')	x.ns="0"+x.ns;
		if(x.ns[4]=='/')	x.ns.insert(3,"0");
		stringstream ss(x.name);
		string s;
		string tmp;
		while(ss >> tmp)
		{
			tmp[0]=toupper(tmp[0]);
			s+=tmp;
			s+=" ";
		}
		x.name=s;
		return in;
	}
	
	friend ostream& operator << (ostream& out , SinhVien x)
	{
		out << x.msv << " " << x.name  << x.lop << " " << x.ns
		<< " " << fixed << setprecision(2) << x.gpa;
		return out;
	}
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

