// miller-rabin test algo 4.24

/*
Algorithm Miller-Rabin probabilistic primality test
	cited from Book "Handbook of Applied Cryptography", pp. 139

MILLER-RABIN(n,t)
INPUT: an odd integer n ≥ 3 and security parameter t ≥ 1.
OUTPUT: an answer “prime” or “composite” to the question: “Is n prime?”
1. Write n − 1 = 2 s r such that r is odd.
2. For i from 1 to t do the following:
2.1 Choose a random integer a, 2 ≤ a ≤ n − 2.
2.2 Compute y = a r mod n using Algorithm 2.143.
2.3 If y 	 = 1 and y 	 = n − 1 then do the following:
j←1.
While j ≤ s − 1 and y 	 = n − 1 do the following:
Compute y←y 2 mod n.
If y = 1 then return(“composite”).
j←j + 1.
If y 	 = n − 1 then return (“composite”).
3. Return(“prime”).

*/


#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include "PrimalityTest.h"
#include "Basic.h"
#include<string>
using namespace std;

string PrimalityTest:: millerRabin(long int oddInteger , long int securityParameter)
{
	long int s,r,i,y,temp1,randomNumber; // s,r,i,y are the same as defined in algo above.
	if ((oddInteger % 2)&& (oddInteger >=3) && (securityParameter>=1))
	{
		temp1 = oddInteger-1;         // this temp1 is for while loop only because modified in this loop.
						s=0;
						while((temp1 % 2)==0)
							{                  // this loop calculates the factors of n that are multiple of 2.
								temp1=temp1/2;
								s++;
							}
						//cout<< "value of s is "<< s <<endl; 
						if(temp1 % 2)
						r = temp1;
						//cout<<"value of r is "<< r <<endl;
						modularExponent modExp;
						for(i=1;i<securityParameter;i++)
							{
								randomNumber = rand() % (oddInteger-2) +2;
								//cout << "value of random no. is "<< a << endl;
								y = modExp.toModularExponent(randomNumber,r,oddInteger);
								//cout << "value of y is "<< y << endl; 
								if(y!=1 && y!=(oddInteger-1))
									{
										int j =1;
										while((j<= s-1) && (y!= oddInteger-1))
											{
												y = (y*y) % oddInteger;
												//cout<<"value of new y is "<< y << endl;
												if (y==1)
													return "composite";
												j = j+1;
											 }
										 if(y!= oddInteger-1)
												return "composite";
										}
									}
								return "prime";
							}
					}


