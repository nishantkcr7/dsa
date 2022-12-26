#include <iostream>
using namespace std;
void swapValue(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swapAddress(int * a, int * b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swapReference(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int x = 10;
    int y = 20;
    cout << "Before Swap\n";
    cout << "X: " << x << "\tY: " << y << endl;
    // swapValue(x, y);
    // swapAddress(&x, &y);
    swapReference(x, y);
    cout << "After Swap\n";
    cout << "X: " << x << "\tY: " << y << endl;
    return 0;
}