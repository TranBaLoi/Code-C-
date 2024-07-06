#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string mnv="00001";
	string name;
	string sex;
	string ns;
	string dc;
	string mst;
	string hd;
	
	friend istream& operator >> (istream& in, NhanVien &x)
	{
		getline(in,x.name);
		in >> x.sex >> x.ns;
		in.ignore();
		getline(in,x.dc);
		in >> x.mst >> x.hd;
		return in;
	}
	friend ostream& operator << (ostream& out, NhanVien x)
	{
		out <<x.mnv << " " << x.name << " " << x.sex << " " << x.ns << " " << x.dc
		<< " " << x.mst << " " << x.hd;
		return out;
	}
};
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
