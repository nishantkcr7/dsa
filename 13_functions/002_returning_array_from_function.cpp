#include <iostream>
#include <stdlib.h>
using namespace std;
int* getArray(int size){
    cout << endl << "Creating an array of size: " << size << endl;
    int *arrayToReturn;
    arrayToReturn = (int *)malloc(size * sizeof(int));
    return arrayToReturn;
}
void setArray(int *arr, int size, int value){
    cout << endl << "Setting values of an array of size: " << size << " with " <<  value <<  endl;
    for(int i = 0; i < size; i++){
        arr[i] = value;
    }
}
void printArray(int * arr, int size){
    cout << endl << "Printing values of an array of size: " << size << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int *newArr;
    int size = 5;
    newArr = getArray(size);
    setArray(newArr, size, 5);
    printArray(newArr, size);    
    return 0;
}