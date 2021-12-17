#include<bits/stdc++.h>
using namespace std;
void slove(){
	string s1,s2;
	cin>>s1>>s2;
	int dem1[256]={},dem2[256]={};
	for(auto x:s2)dem2[x]++;
	int l=0,cnt=0,mil=9999999,index=-1;
	for(int i=0;i<s1.size();i++){
		dem1[s1[i]]++;
		if(dem1[s1[i]]<=dem2[s1[i]])cnt++;
		if(cnt==s2.size()){
			while(dem1[s1[l]]>dem2[s1[l]]||dem2[s1[l]]==0){
			if(dem1[s1[l]]>dem2[s1[l]])	dem1[s1[l]]--;
			l++;
			}
if(mil>i-l+1){
	mil=i-l+1;
	index=l;
}
		}
	}
	if(index==-1)cout<<"-1";
	else cout<<s1.substr(index,mil);
	cout<<endl;
}
int main(){
int t;
cin>>t;
long s=0;
cin.ignore();
while(t--){
slove();
}	
	}
	
	
#include<bits/stdc++.h>
using namespace std;
void slove(	string s1,string s2){

	
	int dem1[256]={},dem2[256]={};
	for(auto x:s2)dem2[x]++;
	int l=0,cnt=0,mil=9999999,indx=-1;
	for(int i=0;i<s1.size();i++){
		dem1[s1[i]]++;
		if(dem1[s1[i]]<=dem2[s1[i]])cnt++;
		if(cnt==s2.size()){
			while(dem1[s1[l]]>dem2[s1[l]]||dem2[s1[l]]==0){
			if(dem1[s1[l]]>dem2[s1[l]])	dem1[s1[l]]--;
			l++;
			}
if(mil>i-l+1){
	mil=i-l+1;
	indx=l;
}
		}
	}
	if(indx==-1)cout<<"-1";
	else cout<<mil;
	cout<<endl;
}
int main(){
int t;
cin>>t;
long s=0;
cin.ignore();
while(t--){
string s1;
cin>>s1;
string s2;
int b[256]={};
for(auto x:s1){
	if(b[x]==0)s2+=x;
	b[x]++;
}
slove(s1,s2);
}	
	}

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int a[1000009],b[1000009];
int main(){
	faster();
		string s;
		cin>>s;
		a[0]=0,b[0]=0;
		if(s.size()==1){
		    if(s[0]=='A')cout<<"0";
		    else cout<<"1";
		}
		else{
		    for(int i=0;i<s.size();i++){
			if(s[i]=='A'){
				a[i+1]=a[i];
				b[i+1]=min(b[i],a[i])+1;
			}
			else {
				a[i+1]=min(b[i],a[i])+1;
				b[i+1]=b[i];
			}
		}
		cout<<a[s.size()];
		}
		
		
}

