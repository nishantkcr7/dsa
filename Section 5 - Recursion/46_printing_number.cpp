#include<iostream>
using namespace std;
void printNum(int num){
    if(num > 0){
    cout << num << "\t";
    printNum(num - 1);
    }
}
int main(){
    printNum(10);
    return 0;
}