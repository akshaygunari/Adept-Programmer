/*
Akshaykumar Gunari _AK_
04-06-2021
*/
#include <iostream>
using namespace std;

int main() {
	int T, xA, xB, XA, XB, A, B;
	cin>>T;
	while(T--)
	{
	    cin>>xA>>xB>>XA>>XB;
	    A = XA/xA;
	    B = XB/xB;
	    cout<<A+B<<endl;
	}
	return 0;
}