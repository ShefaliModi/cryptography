// for finding the factor of p-1
// code written by Shefali Modi

#include<iostream>
#include<cstdlib>
#include<cmath>
#include"Basic.h"

using namespace std;

//class Factorization{
//		public:

 int* Factorization:: factors(long int n)
		{
			int len=1;			
			int *ret = (int*)malloc(len * sizeof(int));
			
			int i;
			long int temp = n;
			for(i=2;i < n;i++){
					if(temp %i == 0){
							ret[len-1]=i;							
							len = len+1;
							
							while(temp %i==0){
									temp = temp/i;
									
								}
						}
				} 
		return ret;
		}
//};

// Driver program

/*int main(){
	int* array;
	//int len = 4;
	//array = (int*) malloc(len * sizeof(int));
	int i=0;
	Factorization fact;
	array = fact.factors(6);
	while(array[i]!=0){
		cout<< array[i] << endl;
		i++;
	}
   
}*/
