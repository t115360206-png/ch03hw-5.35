#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

// a) 獶患癹璸衡材 n 禣ん计
unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int prev2 = 0;
    unsigned long long int prev1 = 1;
    unsigned long long int current = 0;

    for (unsigned int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

int main(void) {
    unsigned int n;
    printf("叫块璶―禣ん计兜计 n: ");
    scanf("%u", &n);

    printf("Fibonacci(%u) = %llu\n\n", n, fibonacci(n));

    // b) 代刚 unsigned long long int や穿程禣ん计
    printf("--- 碝т unsigned long long int ボ程禣ん计 ---\n");
    unsigned long long int f0 = 0, f1 = 1, fn = 0;
    unsigned int i = 2;

    while (1) {
        // 浪琩猭琌穦犯
        if (ULLONG_MAX - f1 < f0) {
            printf(" 64 じ╰参いぃ犯薄猵程禣ん计 Fibonacci(%u) = %llu\n", i - 1, f1);
            break;
        }
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
        i++;
    }

    return 0;
}