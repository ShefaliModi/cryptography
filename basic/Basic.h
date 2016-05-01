
#ifndef SHA1_HPP
#define SHA1_HPP

#include <iostream>
#include<string>

using namespace std;

// algo 2.143
class modularExponent
{
	public:
		int toModularExponent(long int ,long int , long int );

};

/*class PrimalityTest
{
	public:
		string millerRabin(long int  , long int );
};*/

class RandomSearch
{
	public:
		int randomSearch(int  , int );
};

class Factorization
{
	public:
		int* factors(long int n);
};

class generator
{
	public:
		int generatorOfCyclic(long int G , long int n);
};

class GeneratingPrimeNo
{
	public:
		int* toGeneratePrimeNo(int k,int t);
};

// algo 2.142
class moduloInverse
{
	public:
		int inverse( long int z,long int n);
};

// algo 2.104
class euclid
{
	public:
		long int gcd(long int a ,long int b);
};

// algo 2.107
class extendedEuclid
{
	public:
		 int* gcdExtended(long int a, long int b);
};

/*class squareRoot
{
	public:
		long long twoPower(long n);
		long long root(long long n,long long p);
		long long pow(long long base,long long exponent,long long modulus);
		long long gcd(long long a,long long b,long long *x,long long *y);
};*/


class ElgamalPublicKeyGen
{
	public:
		int* KeyGen(long int m);
};

class SHA1
{
public:
    SHA1();
    void update(const std::string &s);
    void update(std::istream &is);
    std::string final();
    static std::string from_file(const std::string &filename);
 
private:
    typedef unsigned long int uint32;   /* just needs to be at least 32bit */
    typedef unsigned long long uint64;  /* just needs to be at least 64bit */
 
    static const unsigned int DIGEST_INTS = 5;  /* number of 32bit integers per SHA1 digest */
    static const unsigned int BLOCK_INTS = 16;  /* number of 32bit integers per SHA1 block */
    static const unsigned int BLOCK_BYTES = BLOCK_INTS * 4;
 
    uint32 digest[DIGEST_INTS];
    std::string buffer;
    uint64 transforms;
 
    void reset();
    void transform(uint32 block[BLOCK_BYTES]);
 
    static void buffer_to_block(const std::string &buffer, uint32 block[BLOCK_BYTES]);
    static void read(std::istream &is, std::string &s, int max);
};
 
std::string sha1(const std::string &string);
 
 
 
#endif /* SHA1_HPP */
