#include <stdio.h>
#include <stdlib.h>
int main(){
    int a = 5;
    int *ptrA;
    int *ptr = (int *)malloc(1 * sizeof(int));
    ptrA = &a;
    printf("A: %d\n", a);
    printf("Address of a: %d\n", ptrA);
    printf("Value of a: %d", *ptrA);
    printf("Address of dynamic var: %d\n", ptr);
    // Adding the value to the dynamic memory
    *ptr = 10;
    printf("Value at dynamic var ptr: %d", *ptr);

    return 0;
}