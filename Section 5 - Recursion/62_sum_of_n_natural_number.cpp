#include<iostream>
using namespace std;
int sumOfNaturalNumberUpTo(int num){
    if(num == 0)
        return 0;
    else
        return sumOfNaturalNumberUpTo(num-1) + num;
}
int main(){
    int n;
    cout << "Enter desired sum up to number: ";
    cin >> n;
    int result = sumOfNaturalNumberUpTo(n);
    cout << endl << "Sum of natural number upto " << n << " : "<< result;

    return 0;
}