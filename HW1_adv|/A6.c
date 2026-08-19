//A6 На вход программе подается беззнаковое 32-битное целое число N.
// Требуется изменить значения всех битов старшего байта числа на противоположные и вывести полученное таким образом число.

#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint32_t N=0, maska=0, result=0;

    scanf("%u", &N);
    result = N;

    for (int i=0; i<8; i++) {
        maska = (1<<(31-i));
        result = result ^ maska;
    }

    printf("%u\n", result);

    return 0;
}
