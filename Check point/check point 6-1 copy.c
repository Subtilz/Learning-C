#include <stdio.h>
#define num 5

int main() {
    int i = num;

    while (i > 0) {
        int j = 0;
        while (j < i) {
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }
    
    return 0;
}
