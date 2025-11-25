#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j;
    int result;
    
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            result = i * j;
            cout << setw(4) << result;
        }
        cout << endl;
    }
    
    return 0;
}

