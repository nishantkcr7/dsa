// Dynamic Memory allocation in heap memory.
#include <stdio.h>
#include<stdlib.h>
int main(){
    int *p = (int *)malloc(5 * sizeof(int));
    int val =1; int i = 0;
    for(i = 0; i < 5; i++){
        p[i] = val;
        val++;
    }
    printf("Values inside the arrar are:\n");
    for(i =0; i < 5; i++){
        printf("p[%d]: %d\n", i+1, p[i]);
    }
}