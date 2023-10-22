#include <iostream>
using namespace std;

int solve(int n)
{
    // Base case
    if (n <= 1)
        return 1;

    
    int nthCatalan = 0;

     // Applying the formula to find out the nth catalan number
    for (int i = 0; i < n; i++)
    {
        nthCatalan += solve(i) * solve(n - i - 1);
    }

    return nthCatalan;
}

// Driver function.
int main()

{
    int n = 8;

    cout << "The first " << n << " Catalan Numbers are: ";

    for (int i = 0; i < n; i++)
    {
        cout << solve(i) << " ";
    }
    cout << endl;
}