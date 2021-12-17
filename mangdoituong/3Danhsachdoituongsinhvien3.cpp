#include<bits/stdc++.h>
using namespace std;
int k=0;
class SinhVien{
	public:
		string name,Class;
		int date,month,year,stt;
		double GPA;
		char x;
	friend void sapxep(SinhVien a[],int n)
	{
		for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++)
			if(a[i].GPA<a[j].GPA) swap(a[i],a[j]);
		}
	}
	friend	void chuanhoa(SinhVien &a){
			for(int i=0;i<a.name.size();i++)
			a.name[i]=tolower(a.name[i]);
			string ss="",m;
			stringstream s(a.name);
			while(s>>m){
				m[0]=toupper(m[0]);
				ss=ss+m+" ";
			}
			ss.erase(ss.end()-1,ss.end());
			a.name=ss;
		}
		
	friend istream &operator>>(istream &is,SinhVien &a)
	{
	k++;
	a.stt=k;
	scanf("\n");
	getline(is,a.name);
	chuanhoa(a);
	getline(is,a.Class);
	is>>a.date>>a.x>>a.month>>a.x>>a.year;
	is>>a.GPA;
	return is;
	}
	
	friend ostream &operator<<(ostream &os,SinhVien a)
	{
	os<<"B20DCCN0";
	if(a.stt<10) os<<"0";
	os<<a.stt<<" ";
	os<<a.name<<" "<<a.Class<<" ";
	if(a.date<10) os<<"0";
	os<<a.date<<"/";
	if(a.month<10) os<<"0";
	os<<a.month<<"/"<<a.year<<" ";
	os<<fixed<<setprecision(2)<<a.GPA<<endl;
	return os;
	}	
};
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
