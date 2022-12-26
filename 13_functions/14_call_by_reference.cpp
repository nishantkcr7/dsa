// Call by reference
#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    cout << "Call by reference" << endl;
    int x = 10;
    int y = 20;
    printf("\nPrev. Values\nX: %d\tY: %d", x, y);
    swap(x, y);
    printf("\nNext Values\nX: %d\tY: %d", x, y);
    return 0;
}