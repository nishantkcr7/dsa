#include <stdio.h>
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    printf("Call by value: SWAPPING TWO NUMBERS");
    int x = 10;
    int y = 20;
    printf("\nPrev. Values\nX: %d\tY: %d", x, y);
    swap(&x, &y);
    printf("\nNext Values\nX: %d\tY: %d", x, y);
}