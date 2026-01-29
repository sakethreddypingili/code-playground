#include <stdio.h>
#include <math.h>

int check_prime(int n, int sq) {
    int i;
    for(i = 2; i <= sq; ++i) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input");
        return 0;
    }
    
    int i, count = 0;
    for(i = 2; ; ++i) {
        count += check_prime(i, (int)sqrt(i));
        if(count == n) break;
    }
    
    printf("%d", i);
    return 0;
}Fing
