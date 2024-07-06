#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string mnv, ten, gt, ns, dc, mst, hd;
	public:
		NhanVien()
		{
			mnv = ten = gt = ns = dc = mst = hd = "";
		}
		friend istream &operator>>(istream &in, NhanVien &x);
		friend ostream &operator <<(ostream &out, NhanVien x);
};
int cnt=1;
istream &operator>>(istream &in, NhanVien &x)
{
	x.mnv = string(5-to_string(cnt).size(),'0') + to_string(cnt);
	cnt++;
	in.ignore();
	getline(in, x.ten);
	getline(in, x.gt);
	getline(in, x.ns);
	getline(in, x.dc);
	getline(in, x.mst);
	in >> x.hd;
	return in;
}
ostream &operator <<(ostream &out, NhanVien x)
{
	cout << x.mnv << " " << x.ten << " "
	<< x.gt << " " << x.ns<<" " << x.dc << " "
	<< x.mst << " " << x.hd << endl;
	return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
