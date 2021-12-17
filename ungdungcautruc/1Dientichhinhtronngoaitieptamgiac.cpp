#include<bits/stdc++.h>
#include<cmath>
#define PI 3.141592653589793238 
using namespace std;
double S(double a,double b,double c)
{
	return sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1;
		cin>>x2>>y2;
		cin>>x3>>y3;
		double a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		double b=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
		double c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
		if(a+b<=c||b+c<=a||a+c<=b) cout<<"INVALID";
		else{
			double R=(a*b*c)/(4*S(a,b,c));
			printf("%.3lf",PI*R*R);
		}
		cout<<endl;
	}
}


