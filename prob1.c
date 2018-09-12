#include<stdio.h>
int main() {
    int sum = 0;
    int i;
    for(i = 999; i >= 0; i--) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;


}

