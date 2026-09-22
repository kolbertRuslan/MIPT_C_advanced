//A4 На вход программе подается беззнаковое 32-битное целое число N и натуральное число K (1 ≤ K ≤ 31).
// Требуется взять K подряд идущих битов числа N так, чтобы полученное число было максимальным. Программа должна вывести полученное число

#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint32_t N, maska, current, max=0;
    int K;

    scanf("%u", &N);
    scanf("%d", &K);

    maska = (1U<<K)-1;

    for (int i=0; i <= (32-K); i++) {
        current = (N>>i) & maska;
        if (current > max) max = current;
    }
    

    printf("%u\n", max);

    return 0;
}
