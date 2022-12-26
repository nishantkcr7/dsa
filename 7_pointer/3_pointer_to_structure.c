// Pointer to structure
#include <stdio.h>
struct Rectangle {
    int length;
    int width;
};
int main(){
    struct Rectangle r;
    struct Rectangle *ptr = &r;
    r.length = 10;
    r.width = 5;
    printf("Structure to pointer");
    printf("Rectangle Details:\n");
    printf("Length: %d\nWidth: %d", r.length, r.width);
    // Setting value of Rectangle using pointer
    ptr->length = 50;
    ptr->width = 25;
    printf("Rectangle Details (Pointer):\n");
    printf("Length: %d\nWidth: %d", ptr->length, ptr->width);
    return 0;
}