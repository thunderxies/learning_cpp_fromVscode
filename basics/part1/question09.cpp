#include <iostream>
using namespace std;
int main()
{

    int n = 4;
    int nsp = n - 1;
  
    for (int i = 1; i <= n; i++)
    {
          char a = 'A';
        for (int j = 1; j <= nsp; j++)
        {

            cout << " ";
        }
        nsp--;
        for (int k = 1; k <= i;k++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
}