#include <stdio.h>

int fibonacci_sum(int limit) {
    int a = 1, b = 2;  
    int total_sum = 0;
    int temp = b

    while (a <= limit) {
        if (a % 2 == 0) {
            total_sum += a;
        }

        b = a + b;
        a = temp;
    }

    return total_sum;
}

int main() {
    int limit = 4000000;
    int sum_even_terms = fibonacci_sum(limit);
    printf("%d\n", sum_even_terms);

    return 0;
}

