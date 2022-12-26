#include <iostream>
using namespace std;
int fib(int n)
{
    static int count = 0;
    count++;
    cout << count << "\t";
    if (n <= 1)
        return n;
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}
int main()
{
    cout << "Enter the number: ";
    int num;
    // cin >> num;
    cout << endl
         << "Fib(" << num << "): " << fib(num);
    num = 7;
    return 0;
}