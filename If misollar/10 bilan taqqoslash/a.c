#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);

    if (a > 10){
        printf("%d\n", a + 3);
    } else if(a < 10){
        printf("%d\n", a * 2);
    } else{
        printf("22\n");
    }
return 0;
} 