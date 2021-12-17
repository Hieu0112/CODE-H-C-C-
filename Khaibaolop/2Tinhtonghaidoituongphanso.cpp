#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	public:
		long long tu,mau;
		PhanSo(long long tu,long long mau)
		{
			this->tu=tu;
			this->mau=mau;
		}
	friend istream &operator>>(istream &is,PhanSo &p)
		{
		is>>p.tu>>p.mau;
		return is;
		}
	friend ostream &operator<<(ostream &os,PhanSo p)
		{
		os<<p.tu<<"/"<<p.mau;
		return os;
		}
	PhanSo operator+(PhanSo &p)
	{
	long long x,y;
    x=tu*p.mau+mau*p.tu;
    y=mau*p.mau;
    long long GCD=__gcd(x,y);
    x/=GCD;
    y/=GCD;
    return PhanSo(x,y);
	}			
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
