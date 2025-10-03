#include <stdio.h>

int main() {
    int i = 1;

    // do-while loop
    do {
        printf("Number: %d\n", i);
        i++;
    } while (i <= 5); // condition checked after execution

    return 0;
}