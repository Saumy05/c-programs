#include <stdio.h>
int main() {
    int a = 5, b = 2;
    printf("Arithmetic: %d %d %d %d %d\n", a+b, a-b, a*b, a/b, a%b);
    printf("Relational: %d %d\n", a>b, a==b);
    printf("Logical: %d %d %d\n", (a>0 && b>0), (a<0 || b>0), !(a==b));
    printf("Bitwise: %d %d %d %d %d\n", a&b, a|b, a^b, a<<1, a>>1);
    return 0;
}
