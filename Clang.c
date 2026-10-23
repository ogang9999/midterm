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

    return 0;
}

//I hate C