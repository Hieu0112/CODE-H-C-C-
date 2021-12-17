#include<bits/stdc++.h>
using namespace std;
struct ThiSinh {
	string ten,sn;
	double A,B,C;
};
void nhap(ThiSinh &a)
{
	getline(cin,a.ten);
	getline(cin,a.sn);
	cin>>a.A>>a.B>>a.C;
}
void in(ThiSinh a)
{
	cout<<a.ten;
	cout<<" "<<a.sn<<" ";
	cout<<fixed<<setprecision(1)<<a.A+a.B+a.C;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

