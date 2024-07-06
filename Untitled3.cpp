#include<bits/stdc++.h>
using namespace std;
struct Point{
	double x,y;
};
void input(Point &A)
{
	cin >> A.x	>> A.y;
}
double	distance(Point A, Point B)
{
	double	dx=B.x-A.x;
	double 	dy=B.y-A.y;
	return sqrt(dx*dx+dy*dy);
}
int main()
{
	int t;	cin >>t;
	while(t--)
	{
		Point A,B;
		input(A);	input(B);
		cout << fixed << setprecision(4) << distance(A,B)	<< endl;
	}
}
