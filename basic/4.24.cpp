// miller-rabin test algo 4.24


#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include"Basic.h"
#include<string>
//using namespace std;
//class primalityTest
//{
//	public:
string primalityTest:: MillerRabin(long int n , long int t)
			{
				long int s,r,i,y,temp1,temp,a;
				if ((n % 2)&& (n>=3) && (t>=1))
					{
						temp1 = n-1;         // this temp1 is for while loop only because modified in this loop.
						s=0;
						while((temp1 % 2)==0)
							{                  // this loop calculates the factors of n that are multiple of 2.
								temp1=temp1/2;
								s++;
							}
						//cout<< "value of s is "<< s <<endl; // debug statement.
						if(temp1 % 2)
						r = temp1;
						//cout<<"value of r is "<< r <<endl; // debug statement.
						modularExponent modExp;
						for(i=1;i<t;i++)
							{
								a = rand() % (n-2) +2;
								//cout << "value of random no. is "<< a << endl;// debug statement.
								y = modExp.toModularExponent(a,r,n);
								//cout << "value of y is "<< y << endl; // debug statement.
								if(y!=1 && y!=(n-1))
									{
										int j =1;
										while((j<= s-1) && (y!= n-1))
											{
												y = (y*y) % n;
												//cout<<"value of new y is "<< y << endl;// debug statement.
												if (y==1)
													return "composite";
												j = j+1;
											 }
										 if(y!= n-1)
												return "composite";
										}
									}
								return "prime";
							}
					}

/*		
//driver program.         
int main()
{
string result;
primalityTest prim;
 result = prim.MillerRabin(7,2) ;
cout<< "result is "<< result <<endl; 
}*/
