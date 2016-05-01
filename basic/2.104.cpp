#include <iostream>
#include"Basic.h"

using namespace std;

//class euclid
//{
	//public:

long int euclid:: gcd(long int a ,long int b)
		{
				
			if(b>a)
			{
				cout << "ERROR" << endl;
				return 0;
			}
			else
			while (b!=0)
			{
				long int r=a%b;
				a=b;
				b=r;
			}
			cout << "\ngcd " << a << endl; // debug statement
			return a;
		}
	
//Driver program
/*
int main()
{
	euclid test;
	int result = test.gcd(29,24);
	cout << "gcd is " << result << endl;
	return 0;
}
*/
