#include <stdio.h>

int main() {
    int a, d, l;
    printf("Please enter first term: ");
    scanf("%d", &a);
    printf("Please enter the difference: ");
    scanf("%d", &d);
    printf("Please enter last term: ");
    scanf("%d", &l);
    
    if (d == 0) {
        printf("Invalid difference\n");
        return 0;
    }
    
    if ((l - a) % d != 0) {
        printf("Last term is not valid for this AP\n");
        return 0;
    }

    int n = (l - a) / d + 1;
    int term = a;
    
    for(int i = 0; i < n; ++i) {
        printf("%d ", term);
        term += d;
    }
    
    return 0;
}
