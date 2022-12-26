#include<iostream>
using namespace std;
int exponent(int m, int n){
    static int exponentCount = 0;
    cout << "EXPO-"<< ++exponentCount << "\t";

    if(n == 0){
        return 1;
    }
    else{
        return exponent(m, (n-1)) * m;
    }
}
int exp(int m, int n){
    static int expCount = 0;
    cout << "EXP-"<< ++expCount << "\t";
    if(n == 0)
        return 1;
    if(n%2 == 0){
        return exp(m*m, (n/2));
    }
    else{
        return m * exp(m*m, (n/2));
    }
}
int main(){
    int m = 2;
    int n = 15;
    cout << endl << "POW(" << m << "," << n << "): " << exponent(m,n) << endl;
    cout << endl << "EXP(" << m << "," << n << "): " << exp(m,n);
    return 0;
}