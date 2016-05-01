//primality test driver program.  
#include<iostream>
#include "PrimalityTest.h"
#include<string> 
using namespace std;
      
int main()
{
string result;
PrimalityTest prim;
 result = prim.millerRabin(7,2) ;
cout<< "result is "<< result <<endl; 
}
