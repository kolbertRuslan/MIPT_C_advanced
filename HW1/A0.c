//A0 На стандартном потоке ввода задаётся натуральное число N (N > 0),
// после которого следует последовательность из N целых чисел.
// На стандартный поток вывода напечатайте, сколько раз в этой
// последовательности встречается максимум.
// Указание: использовать массивы запрещается.

#include <stdio.h>

int main(void) {
    int quantity, max;
    scanf("%d", &quantity); //считать количество
    //printf("%d\n", quantity);
    
    scanf("%d", &max); //считать 1е число
    int counter = 1;
    //printf("%d\n", max);

    for (int i=2; i<=quantity; i++) {
        int current;
        scanf("%d", &current);

        if (current == max) counter++;
        else if (current > max) {
            max = current;
            counter = 1;
        }
        //printf("%d\n", current);
    }

    printf("%d\n", counter);
    //printf("%d\n", max);

    return 0;
}
