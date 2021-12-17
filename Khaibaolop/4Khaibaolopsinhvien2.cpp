#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string name,Class;
		int date,month,year;
		double GPA;
		char x;
	friend istream &operator>>(istream &is,SinhVien &a)
	{
	getline(is,a.name);
	getline(is,a.Class);
	is>>a.date>>a.x>>a.month>>a.x>>a.year;
	is>>a.GPA;
	return is;
	}
	friend ostream &operator<<(ostream &os,SinhVien a)
	{
	os<<"B20DCCN001"<<" ";
	os<<a.name<<" "<<a.Class<<" ";
	if(a.date<10) os<<"0";
	os<<a.date<<"/";
	if(a.month<10) os<<"0";
	os<<a.month<<"/"<<a.year<<" ";
	os<<fixed<<setprecision(2)<<a.GPA;
	return os;
	}	
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
