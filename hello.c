#include<stdio.h>
int main() {
    int t1 = 0, t2 = 1, nextTerm = 0, n;

    printf ("Enter a positive number: ");
    scanf("%d",n);

    // displays the first two terms which is always 0 and 1
    printf("Fiboaci Series");
    printf(t1);
    rintf(t2);

    nextTerm = t1 + t2;

    while(nextTerm <= n) {
        printf(nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}
