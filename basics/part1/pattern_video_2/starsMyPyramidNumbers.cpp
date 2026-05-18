/*
123#567
12###67
1#####7

*/





#include<iostream>
using namespace std;
int main(){

    int n = 4;
    int m =n-1;
    int count = 1;
    int nsp =1;
     for(int i = 1 ; i <=2*n-1;i++){
         cout<<i;
     }
     cout<<endl;

    //now the logic 
    for(int j = 1;j<=m;j++){
      
        for(int k=1;k<=m+1-j;k++){
            cout<<k;
            count++;
        }
        for(int l = 1 ;l<=nsp;l++){
            cout<<"#";
            count++;
        }
        
        int start = (m+1-j) + nsp +1; //caculating where the start would be after printing all those hashes 
        
        for(int oc = 1;oc<=m+1-j;oc++){
            cout<<start;
           start++;
        }
        nsp +=2;
        cout<<endl;
    }
    
    
    

}