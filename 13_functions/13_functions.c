#include <stdio.h>
int add(int a, int b){
    int c; 
    c = a + b;
    return c;
}
int sub(int a, int b){
    int c;
    c = a - b;
    return c;
}
int mul(a, b){
    int c;
    c = a * b;
    return c;
}
int main(){
    int x, y, z;
    x = 10;
    y = 20;
    z = add(x, y);
    printf("\n%d + %d = %d", x, y, z);
    printf("\n%d - %d = %d", x, y, sub(x, y));
    printf("\n%d * %d = %d", x, y, mul(x, y));
    printf("\nFunctions in C language.");
    return 0;
}