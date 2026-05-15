// nst and nsp

/*

  1
  121
 12321
1234321

*/

#include <iostream>
using namespace std;

int main()
{

    int n=4;
    //for rows 
    for(int i =1 ;i<=n;i++){

        //for spaces 
        for(int spaces = 1;spaces<=n-i;spaces++){
            cout<<" ";
        }
        //for bara waala triangle
        for(int bigT=1;bigT<=i;bigT++){
            cout<<bigT;
        }

        //for last waala 3rd triangle
        for(int lastT=i-1;lastT>=1;lastT--){
            
            cout<<lastT;
        }
        cout<<endl;
    }
}