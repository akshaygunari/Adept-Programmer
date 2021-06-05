/*
Akshaykumar Gunari _AK_
05-06-2021
*/

#include <iostream>
using namespace std;

int main() {
	long long t, D, d, p, q, sum=0, x, z;
	cin>>t;
	while(t--)
	{
	    cin>>D>>d>>p>>q;
	    z = D/d;
	    x = D%d;
	    sum = (z*d)*p + ((z-1)*z*(d)/2)*q;
	    if(D%d!=0)
	    {
	        sum = sum + x*(p+(z*q));  
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
