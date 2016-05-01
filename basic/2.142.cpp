//modulo-inverse

#include<iostream>
#include<cstdlib>
#include"Basic.h"
using namespace std;
//class moduloInverse
//{
//	public:

int moduloInverse:: inverse( long int z,long int n)
	{
		long int a = n;
		long int b = z;
		long int d,x,y;
		if(b==0)
			{
				d=a; x=1; y=0;
			}
		long int x2=1, x1=0, y2=0, y1=1,q=0, r=0;
		while(b>0)
			{
				q = a/b;
			//cout << "q is " << q << endl;//debug statement
				r = a- q*b;
			//cout << "r is " << r << endl;//debug statement
				x = x2- q*x1;
				y = y2- q*y1;
				a = b;
				b = r;
				x2 = x1;
				x1 = x;
				y2 = y1;
				y1 = y;
			//cout << "b is " << b << endl;//debug statement
				if(b== 0)
					break;
				else continue;
			}
		d = a; x = x2; y = y2;
		if (y < 0)
			y = y + n;
		
		//cout << "d is " << d << endl;//debug statement
		//cout << "y is " << y << endl;//debug statement
		//cout << "x is " << x << endl;//debug statement
		if(d>1)
			return 0;
		else return y;
	}
//};

/*//driver program
int main()
{
moduloInverse inv;
int y = inv.inverse(1529,2356);
cout << "inverse is " <<  y << endl;
return 0;

}
*/
