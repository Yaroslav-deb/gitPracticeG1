#include <iostream>

using namespace std;

int fact(int N)
{
    if (N == 0)
        return 1;
    if (N == 1)
    {
        return 1;
    }
    
    

    return N * fact(N - 1);
}

int main()
{
    int n;

    cout << "enter the number for variable n: ";
    cin >> n;

    cout << "\nfactorial number " << n << "(!) = " << fact(n);
    cout << endl << n;

    return 0;
}