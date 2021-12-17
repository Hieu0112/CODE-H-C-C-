#include<bits/stdc++.h>
//#define a() a;
using namespace std;
struct SinhVien{
string ten,lop;
int ngay,thang,nam;
char x;
double GPA;
};
void nhapThongTinSV(SinhVien &a)
{
    getline(cin,a.ten);
    cin>>a.lop;
    cin>>a.ngay;
    cin>>a.x;
    cin>>a.thang;
    cin>>a.x;
    cin>>a.nam;
    cin>>a.GPA;
}
void inThongTinSV(SinhVien a)
{
    cout<<"N20DCCN001 "<<a.ten<<" "<<a.lop<<" ";
    if(a.ngay<10) cout<<"0";
    cout<<a.ngay<<a.x;
    if(a.thang<10) cout<<"0";
    cout<<a.thang<<a.x;
    cout<<a.nam<<" ";
    cout<<fixed<<setprecision(2)<<a.GPA;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}

