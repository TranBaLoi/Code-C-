#include<bits/stdc++.h>
using namespace std;
class Human{
	private:
		string ten, ns;
	public:
		string dd, mm, yy;
		Human()
		{
			ten = ns = "";
		}
		friend istream &operator >>(istream &in, Human &x);
		friend ostream &operator <<(ostream &out, Human x);
};
bool cmp(Human a, Human b)
{
	if(a.yy==b.yy)
	{
		if(a.mm==b.mm)
		{
			return a.dd < b.dd;
		}
		else return a.mm < b.mm;
	}
	else return a.yy < b.yy;
}
istream &operator >>(istream &in, Human &x)
{
	in >> x.ten >> x.ns;
	x.dd = x.ns.substr(0,2);
	x.mm = x.ns.substr(3,2);
	x.yy = x.ns.substr(6,4);
	return in;	
}
ostream &operator << (ostream &out, Human x)
{
	out << x.ten  << endl;
	return out;
}
int main()
{
	int n;	cin >> n;
	Human ds[n];
	for(int i=0;i<n;i++)	cin >> ds[i];
	sort(ds,ds+n,cmp);
	cout << ds[n-1] << ds[0];
	return 0;
}
