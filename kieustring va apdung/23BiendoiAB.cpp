#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int a[1000009],b[1000009];
int main(){
		string s;
		cin>>s;
		a[0]=0,b[0]=0;
		if(s.size()==1){
		    if(s[0]=='A')	cout<<"0";
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

