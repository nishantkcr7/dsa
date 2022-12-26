#include<iostream>
#include <stdlib.h>
using namespace std;
struct Rectangle
{
    int length;
    int width;
};
int main()
{
    struct Rectangle *ptr;
    ptr  = (struct Rectangle *) malloc(sizeof(struct Rectangle));
    ptr->length = 10;
    ptr->width = 20;
    cout << "Len: " << ptr->length << " Width: " << ptr->width;
    return 0;
}