//A5 На вход программе подается беззнаковое 32-битное целое число N.
// Требуется найти количество единичных битов в двоичном представлении данного числа.

#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint32_t N=0, maska=0, counter=0;

    scanf("%u", &N);

    for (int i=1; i<=32; i++) {
        maska = (1<<i);
        if (N & maska) counter++;
    }

    printf("%u\n", counter);

    return 0;
}
