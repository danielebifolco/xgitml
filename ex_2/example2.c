#include <stdio.h>

int main() {
    int x;
    char a[] = "Hello world!";
    scanf("%d", &x);
    if (x>0) {
        printf("%s, %d è maggiore di 0.\n",a,x);
    }
    return 0;
}