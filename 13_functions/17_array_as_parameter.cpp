#include <iostream>
using namespace std;
void doubleArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        arr[i] = arr[i] * 2;
    }
}
void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
/*
void printArray(int * arr, int size){
    cout << "\n";
    int i = 0;
    for(int i; i < size; i++){
        cout arr[i];
    }
}
*/
int main(){
    int size = 5;
    int a[size] = {1,2,3,4,5};
    cout << "Before Doubling Array:\n";
    printArray(a, size);
    
    doubleArray(a, size);
    cout << endl << "After Doubling Array:\n";
    printArray(a, size); 
    return 0;
}