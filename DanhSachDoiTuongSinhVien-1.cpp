#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv, ten, lop, ns;
	public:
		double gpa;
		SinhVien()
		{
			msv = ten = lop = ns = "";
			gpa = 0;
		}
		friend istream& operator >>(istream& in, SinhVien& x);
		friend ostream& operator <<(ostream& out, SinhVien x);
};
int cnt[3] = {0,0,1};
istream& operator >>(istream& in, SinhVien& x)
{
	x.msv = "B20DCCN";
	for(int i=0;i<3;i++)
	{
		x.msv += to_string(cnt[i]);
	}
	cnt[2]++;
	if(cnt[2] > 9)
	{
		cnt[2] = 0;
		cnt[1]++;
	}
	in.ignore();
	getline(in, x.ten);
	for(int i=0;i<x.ten.size();i++)
	{
		x.ten[i] = tolower(x.ten[i]);
	}
	stringstream ss(x.ten);
	string token;
	vector<string> v ;
	while(ss >> token)
	{
		v.push_back(token);
	}
	x.ten = "";
	for(int i=0;i<v.size();i++)
	{
		v[i][0] = toupper(v[i][0]);
		x.ten += v[i];
		x.ten += " ";
	}
	in >> x.lop >> x.ns >> x.gpa;
	return in;
}
bool cmp(SinhVien A, SinhVien B)
{
	return A.gpa > B.gpa;
}
void sapxep(SinhVien ds[], int N)
{
	sort(ds,ds+N,cmp);
}
ostream& operator <<(ostream& out, SinhVien x)
{
	if(x.ns[2] != '/')	x.ns = "0" + x.ns;
	if(x.ns[5] != '/') x.ns.insert(3,"0");
	out << x.msv << " " << x.ten << x.lop << " "
	<< x.ns << " " << fixed << setprecision(2) << x.gpa << endl;
	return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
