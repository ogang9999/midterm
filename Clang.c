#include <stdio.h>

int *bad() {
    int a = 10;
    int *p = &a;
    return p;
} 
// bad!
int main(void) {
    int *k = bad();
    printf("%p\n", (void *)k); //dangling pointer
    int a = 3;
    int b = 4;
    int c = 5; // entend conflict
    int as = 6
    int bs = 7;

    return 0;
}

//I hate C
