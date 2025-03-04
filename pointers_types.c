#include <stdio.h>

int main() {
    char char_arr[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_arr[5] = {1, 2, 3, 4, 5};

    char *char_pi;
    int *int_pi;


    char_pi = char_arr;
    int_pi = int_arr;


    int i;
    for (i = 0; i < 5; i++) {
        printf("[integer point] points to %p, which is %d\n", int_pi, *int_pi);
        int_pi++;
    }
    for (i = 0; i < 5; i++) {
        printf("[char point] points to %p, which is '%c'\n]", char_pi, *char_pi);
        char_pi++;
    }

}