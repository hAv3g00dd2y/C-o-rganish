#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("To'g'ri katta son %d\n", a);
    }
    else {
        printf("Xato. Katta son: %d\n", b);
    }

return 0;
}