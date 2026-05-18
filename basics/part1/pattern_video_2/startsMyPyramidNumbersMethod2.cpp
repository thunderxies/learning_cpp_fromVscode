/*
123#567
12###67
1#####7

*/

#include <iostream>
using namespace std;
int main()
{

    int n = 4;
    int m = n - 1;
    // int count = 1;
    int nsp = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << i;
    }
    cout << endl;

    // now the logic
    for (int j = 1; j <= m; j++)
    {
        int count = 1;
        for (int k = 1; k <= m + 1 - j; k++)
        {
            cout << count;
            count++;
        }
        for (int l = 1; l <= nsp; l++)
        {
            cout << " ";
            count++;
        }

        for (int oc = 1; oc <= m + 1 - j; oc++)
        {
            cout << count;
            count++;
        }
        nsp += 2;
        cout << endl;
    }
}