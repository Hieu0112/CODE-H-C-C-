#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	double x1,x2,y1,y2;
	cin>>t;
	while(t--)
	{
		cin>>x1>>y1;
		cin>>x2>>y2;
		cout<<fixed<<setprecision(4)<<sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		cout<<endl;
	}
}
