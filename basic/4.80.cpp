// algo 4.80


#include<iostream>
#include<ctime>
#include<cmath>
#include<cstdlib>
#include"Basic.h"
using namespace std;
//class generator{
//	public:
int generator:: generatorOfCyclic(long int G , long int n)
					
					{
						long int a,b; 
						srand(time(NULL));
						a = rand() % n + 1; // chossing alpha in G.
						//cout<< "alpha is " << a << endl; // debug statement.
						Factorization fact;
						int i=0;
						int j=0;
						int k =0;
						int pass=1;
						int* array = fact.factors(n);
						while(array[i]!=0){
							//	cout<< array[i] << endl; // debug statement.
								k++;								
								i++;
							}
						//cout << "k value is " << k << endl; // debug statement.
						for(i=0;i<k;i++){
								int temp= (n/array[i]);
								//cout<< "i is "<< i << endl; //debug statement.
								//cout<< "temp is "<< temp << endl; //debug statement.
								b = pow(a,temp) ;
								//cout<< "b value is " << b <<endl; //debug statement.
								if((b % G) == 1) {
										//cout<<"b mod G has become 1 " << b << endl; // debug statement.
										pass = 0;
										for(i=0;i<clock();i++){
												//for(j=0;j<100;j++){}
											}
										a = generatorOfCyclic(G,n);
										//cout<< "value of generator is from algo 4.80" << a << endl;//debug statement.	
									}
								
										
							}
					//if(pass == 1)
					   return a;	
					}

/*
// Driver Program.

int main() {
generator gen;
int x = gen.generatorOfCyclic(11,10);
cout<< "generator is "<< x << endl;
}*/
