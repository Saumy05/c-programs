#include <stdio.h>
int main() {
    int n = 3;
    if (n > 0) printf("Positive\n");
    else printf("Non-positive\n");

    switch(n) {
        case 1: printf("One\n"); break;
        case 2: printf("Two\n"); break;
        default: printf("Other\n");
    }

    printf("For loop: ");
    for(int i=0;i<5;i++) printf("%d ", i);

    printf("\nWhile loop: ");
    int j=0;
    while(j<3) { printf("%d ", j); j++; }

    printf("\nDo-while: ");
    int k=0;
    do { printf("%d ", k); k++; } while(k<2);

    return 0;
}
