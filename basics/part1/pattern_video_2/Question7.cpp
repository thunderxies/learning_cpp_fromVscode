/*

###****
##****
#****
****

*/

#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    int nsp = n - 1;
    int nst = n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= nsp; j++)
        {
            cout << "#";
        }
        nsp -= 1;
        for (int p = 1; p <= nst; p++)
        {
            cout << "*";
        }

        cout << endl;
    }
}