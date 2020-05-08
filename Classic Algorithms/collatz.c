#include <stdio.h>

int counter = 0;

int collatz(n) {
    if (n == 1) {
        printf("It takes %d steps to reach 1.\n", counter);
        return 0;
    }
    else {
        if (n % 2 == 0){
            n = n/2;
            counter++;
            return collatz(n);
        }
        else if (n % 2 == 1){
            n = (3 * n) + 1;
            counter++;
            return collatz(n);
        }
    }
    return 0;
}

int main() {
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);
    collatz(n);
}
