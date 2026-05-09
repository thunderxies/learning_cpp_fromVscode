#include <iostream>
using namespace std;
int main()
{

    int n = 4;
    int k = 1;
    // printing 1 3 5 7 stars in down

    for (int i = 1; i <= n; i++)
    {

        // spaces from rhombus waala 
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        { // 1357 odd numbers printing.

            cout << "*";
        }
        cout << endl;
    }
}