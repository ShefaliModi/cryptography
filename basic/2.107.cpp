
#include"Basic.h"
#include<iostream>
#include<cstdlib>
using namespace std;

//class extendedEuclid
//{
	//public:

 int* extendedEuclid:: gcdExtended(long int a,long int b)
{
    // Base Case
			long int d,x,y;
			int* ret = (int*) malloc(3* sizeof(long int));
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
					ret[0] = d;
					ret[1]= x;
					ret[2] = y;
					//cout << "results from algo 2.107(extended eulidean) are: \n " <<endl;
					//cout << "d is: " << d <<endl;
					//cout << "\n x is: " << x <<endl;
					//cout << "\n y is: " << y <<endl;
				return ret;
   
}
 
// Driver Program
/*
int main()
{
    int a = 3, m = 11;
    extendedEuclid test;
	 long int result = test.gcdExtended()
    return 0;
}
*/
