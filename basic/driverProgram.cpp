//2.143 Repeated square and multiply algo
//2.142 computing multiplicative inverse
//2.104 euclidean algo, if needed
//2.107 extended Euclidean algo
//3.44 fining square roots modulo n
//4.84 selecting k bit prime and generator Prime no. generation algorithm
//SHA-1 hash function H()

#include<iostream>
#include<stdio.h>
#include"Basic.h"
using namespace std;

int main()
{
	euclid test;
	cout << "gcd is from algo 2.104 \t " << test.gcd(60,37) << endl;

	extendedEuclid test1;
	int* result1 = test1.gcdExtended(4864,3458);
	cout << "\n result from algo 2.107 are: "  << endl;
	cout << "d is: " << result1[0] <<endl;
	cout << "x is: " << result1[1] <<endl;
	cout << "y is: " << result1[2] <<endl;

	moduloInverse inv;
	cout << "\ninverse is from algo 2.142 is \t " <<  inv.inverse(1529,2356) << endl;
	
	modularExponent modularExp;
	long int y = modularExp.toModularExponent(7,13,77); 
	cout << "\n output for algo 2.143 is \t "<< y <<endl ;


	

	GeneratingPrimeNo gpn;
	int* result = gpn.toGeneratePrimeNo(16,1);
	cout << "results from algo 4.84 are :" << endl;
	cout<< "\n prime no. is \t" << result[0] << endl;
	cout<< "\n alpha is  \t" << result[1] << endl;

	int count;
	cout<< "Enter the number of bits for hash output (should be multiple of 4):" << endl;
	cin >> count;
       if(count%4!=0){
        cout<< "Invalid Input!" << endl;
        return 0;
	}
        else {
        std::string str = (sha1("2345"));
  	std::string str1= str.substr(0, (count/4));
        cout <<"\n Hashed Output(In Hexadecimal) :" <<  str1 << endl;
	}

	
	
	//squareRoot square;
	//square.squareRoot(23,2 );

	return 0;
}

