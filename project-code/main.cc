#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include "funcs.h"
using namespace std;

int main (int argc, char *argv[ ])
{

  //the values that we get from the 
  //command line will be put into these
  //variables. we can use them later in the program
  //like for checking if they have valid values
  int cache_capacity = 0;
  int cache_blocksize = 0;
  int cache_associativity = 0;

  //if(!parseParams(argc, argv, cache_capacity, cache_blocksize, cache_associativity)) {
	//exit(2);
  //}     
        int val;
        cout<<"Enter Value"<<endl;
        cin>>hex>>val;
        cout<<val<<endl;
  cout << "Cache Capacity: " << cache_capacity << endl;
  cout << "Cache BlockSize: " << cache_blocksize << endl;
  cout << "Cache Associativity: " << cache_associativity << endl;

}

