#include<iostream>
using namespace std;
int factorial(int n){
    if(n < 0)
        return 0;
    if(n == 0)
        return 1;
    else
        return factorial(n-1) * n;
}
int main(){
    cout << "Enter the number: ";
    int num = 0;
    cin >> num;
    cout << "Factorial of " << num << " is equal to: " << factorial(num);
    return 0;
}