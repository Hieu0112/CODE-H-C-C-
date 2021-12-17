#include<bits/stdc++.h>
using namespace std;
int kt(string s){
	if(s.size()>9||s.size()<1)return 0;
	for(int  i=0;i<s.size();i++)if(s[i]<'0'||s[i]>'9')return 0;
	return 1;
}
int g(string s){
    stringstream ss(s);
    int x;
    ss>>x;
    return x;
}
int main(){
set<int>a;
map<int,int>b;
set<int>c;

ifstream is;

is.open("DATA.in");
long long sum=0;
int dem=0;
int m[2];
int i=0;
while(!is.eof()){
string s;
	is>>s;
	if(kt(s)){
	m[i++]=g(s);
	if(i==2)break;
	}
}
int j=0;
while(!is.eof()){
string s;
	is>>s;
	if(kt(s)){
		a.insert(g(s));
		b[g(s)]++;
j++;
	if(j==m[0])break;
	}
}
j=0;
while(!is.eof()){
string s;
	is>>s;
	if(kt(s)){
	if(b[g(s)]>0){
		c.insert(g(s));

	}
	}
}
is.close();
for(auto x:c)cout<<x<<" ";

}
