

#include<iostream>
#include<bitset>
#include"Basic.h"
using namespace std;

//class modularExponent
//{
	//public:		

int modularExponent:: toModularExponent(long int a,long int K, long int n)
								{
									long int b = 1;
									if (K == 0)
										return b;
									long int A = a;
									std:: bitset<32> x(K) ;
									//std::cout << x << std::endl;
									if(x[0]==1)
									  b=a;
									for(int i=1;i<31;i++)
									{
										A=(A*A)%n;
										//cout<< "\n A= "<< A<<endl;//debug statement.
										if(x[i]==1) b = A*b % n;				
									}
						 		return b;
								}


/* driver program. 
int main()
{
modularExponent modularExp;
cout << "\n output is "<< modularExp.toModularExponent(5,596,1234)<<endl ;
}*/
