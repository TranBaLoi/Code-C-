#include<bits/stdc++.h>
using namespace std;
class Time{
	private:
		int gio, phut, giay;
	public:
		Time()
		{
			gio = phut = giay = 0;
		}
		void nhap();
		void in();
		int Getgio(), Getphut(), Getgiay();
};
int Time::Getgio(){
	return gio;
}
int Time::Getphut(){
	return phut;
}
int Time::Getgiay(){
	return giay;
}
void Time::nhap()
{
	cin >> gio >> phut >> giay;
}
void Time::in()
{
	cout << gio << " " << phut << " " << giay << endl;
}
bool cmp(Time a, Time b)
{
	if(a.Getgio() == b.Getgio())
	{
		if(a.Getphut() == b.Getphut())
		{
			return a.Getgiay() < b.Getgiay();
		}
		else return a.Getphut() < b.Getphut();
	}
	else return a.Getgio() < b.Getgio();
}
int main()
{
	int n;	cin >> n;
	Time ds[n];
	for(int i=0;i<n;i++)	ds[i].nhap();
	sort(ds,ds+n,cmp);
	for(int i=0;i<n;i++)	ds[i].in();
	return 0;
}
