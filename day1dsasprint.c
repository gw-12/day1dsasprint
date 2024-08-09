#include <stdbool.h>
#include <limits.h>


bool checkrange(int A, int B, int C) {
    
    if (B > C) {
        int temp = B;
        B = C;
        C = temp;
    }

    
    return (A >= B && A <= C);
}

#include <stdio.h>

int main() {
    int A = 3, B =1, C = 9;
    if (checkrange(A, B, C)) {
        printf("True.\n");
    } else {
        printf("False.\n");
    }

    return 0;
}