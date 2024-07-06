#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string mnv, ten, gt, ns, dc, mst, hd;
	public:
		string dd  ,mm , yy;
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
	x.yy = (x.ns.substr(6,4));
	x.dd = (x.ns.substr(0,2));
	x.mm = (x.ns.substr(3,2));
	return in;
}
ostream &operator <<(ostream &out, NhanVien x)
{
	cout << x.mnv << " " << x.ten << " "
	<< x.gt << " " << x.ns <<" " << x.dc << " "
	<< x.mst << " " << x.hd << endl;
	return out;
}
bool cmp(NhanVien a, NhanVien b)
{
	if(a.yy == b.yy)
	{
		if(a.dd == b.dd)
		{
			return a.mm < b.mm;
		}
		else return a.dd < b.dd;
	}
	else return a.yy < b.yy;
}
void sapxep(NhanVien ds[], int n)
{
	sort(ds,ds+n,cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
