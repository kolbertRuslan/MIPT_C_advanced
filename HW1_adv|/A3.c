//A3 На вход программе подается беззнаковое 32-битное целое число N и натуральное число K (1 ≤ K ≤ 31).
// Требуется взять K младших битов числа N и вывести полученное таким образом число.

#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint32_t N, result;
    int K;

    scanf("%u", &N);
    scanf("%d", &K);

    result = N<<(32-K);
    result = result>>(32-K);
    printf("%u\n", result);

    return 0;
}
