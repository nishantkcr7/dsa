#include <stdio.h>
#include<stdlib.h>
struct Rectangle {
    int length;
    int width;
};
int main(){
    struct Rectangle *ptr = (struct Rectangle *) malloc(sizeof(struct Rectangle));
    ptr->length = 20;
    ptr->width = 10;
    printf("Lenght of Rectangle: %d\nWidth of Rectangle: %d\n", ptr->length, ptr->width);
    printf("---------- Dynamic Structure in Heap Memory ----------\n");
    (*ptr).length = 30;
    (*ptr).width = 20;
    printf("Lenght of Rectangle: %d\nWidth of Rectangle: %d", ptr->length, ptr->width);
    return 0;    
}