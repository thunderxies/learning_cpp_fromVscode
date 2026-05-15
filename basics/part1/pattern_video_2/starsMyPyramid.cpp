/*
*******
*** ***
**   **
*     *


*/



#include<iostream>
using namespace std;
int main(){
int n = 4;
int m = n-1;
int nsp = 1;

    //1st line stars 
    for(int i = 1;i <= 2*n-1;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    //now from 2nd line
   for(int j = 1 ; j<=m;j++) {
    for(int k = 1 ; k<=m+1-j;k++){
        cout<<"*";
    }

     for(int oc=1;oc<=nsp;oc++){
        cout<<" ";
    }
    nsp+=2;
    for(int k = 1 ; k<=m+1-j;k++){
        cout<<"*";
    }
    cout<<endl;
   }

   //for nsp 

   
    
   


}