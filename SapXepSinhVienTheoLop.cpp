#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv, ten, lop, email;
	public:
		SinhVien()
		{
			msv = ten = lop = email = "";
		}
		friend istream &operator >>(istream& in, SinhVien &);
		friend ostream &operator <<(ostream& out, SinhVien);
		string getLop();
		string getMsv();
};
string SinhVien::getLop(){
	return lop;
}
string SinhVien::getMsv(){
	return msv;
}
istream &operator >>(istream& in, SinhVien &x)
{
	in.ignore();
	getline(in, x.msv);
	getline(in, x.ten);
	getline(in, x.lop);
	in >> x.email;
	return in;
}
ostream &operator <<(ostream& out, SinhVien x)
{
	cout << x.msv << " " << x.ten << " " << x.lop << " " << x.email << endl;
	return out;
}
bool cmp(SinhVien a, SinhVien b)
{
	if(a.getLop() == b.getLop())
	{
		return a.getMsv() < b.getMsv();
	}
	else return a.getLop() < b.getLop();
}
int main()
{
	int n;	cin >> n;
	SinhVien ds[n];
	for(int i=0;i<n;i++)	cin >> ds[i];
	sort(ds,ds+n,cmp);
	for(int i=0;i<n;i++)	cout << ds[i];
	return 0;
}
