#include<iostream>
using namespace std;

int main(){

    int n =5;
    for(int i=1;i<=n;i++){
        int a = 1;
        for(int j = 1; j<=2*n-1;j++){
            cout<<a;
          //  a+=2;;
        }
        a +=2;
        cout<<endl;
    }

}