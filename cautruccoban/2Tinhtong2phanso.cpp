#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu;
	long long mau;
};
void nhap(PhanSo &a)
{
	cin>>a.tu>>a.mau;
}
PhanSo tong(PhanSo &a,PhanSo &b)
{
	a.tu=a.tu*b.mau+a.mau*b.tu;
	a.mau=a.mau*b.mau;
	long long UCLN=__gcd(a.tu,a.mau);
	a.tu/=UCLN;
	a.mau/=UCLN;
	return a;
}
void in(PhanSo &a)
{
	cout<<a.tu<<"/"<<a.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

