#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);

    if (a < 0) {
        printf("%d Manfiy\n", a);
    }
    else if (a > 0) {
        printf("%d Musbat\n", a);
    }
    else {
        printf("0 ga teng.\n");
    }
}