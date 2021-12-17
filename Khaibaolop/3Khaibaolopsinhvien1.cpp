#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string name,Class;
		int date,month,year;
		double GPA;
		char x;
		void nhap();
		void xuat();
};
void SinhVien::nhap()
{
	getline(cin,name);
	getline(cin,Class);
	cin>>date>>x>>month>>x>>year;
	cin>>GPA;
}
void SinhVien::xuat()
{	
	cout<<"B20DCCN001"<<" ";
	cout<<name<<" "<<Class<<" ";
	if(date<10) cout<<"0";
	cout<<date<<"/";
	if(month<10) cout<<"0";
	cout<<month<<"/"<<year<<" ";
	cout<<fixed<<setprecision(2)<<GPA;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
