#include<iostream>
using namespace std;
int fun(int num){
    if(num>0){
        return fun(num-1) + num;
    }
    return 0;
}
int main(){
    int a = 5;
    cout << fun(a);
    return 0;
}