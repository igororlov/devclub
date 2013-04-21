/*
Написать функцию:
int arrayUnique(int array[], int size)
Удалить из массива дубликаты элементов. Вернуть новую длину массива.

Примечание: пример ввода и вывода показан для лучшего понимания условия задачи. Выводить результат на печать не нужно.
Пример ввода

1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 10 10 5 4 3 2 1

Пример вывода

array = 1 2 3 4 5 6 7 8 9 10
len = 10
*/

#include <stdio.h>


// CODE WORKS
int arrayUnique(int array[], int size) {
    int marker = array[0];
    int len = 1;

    for ( int i = 1; i < size; i++ ) {
        if ( array[i] != marker ) {
            array[len] = array[i];
            
            for ( int j = i + 1; j < size; j++ ) {
                if ( array[j] == array[len] ) {
                    array[j] = marker;
                }
            }
            len += 1;
        }
    }

    return len;
}

void printArray(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
}

int main(int argc, char const *argv[]) {
    int array[] = { 1, 1, 2, 3, 5, 2, 1, 4, 5, 6, 1, 5, 6 };
    //int array[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
    //int array[] = { 1, 2, 3, 4, 5, 6 };

    printArray(array, sizeof(array)/sizeof(int));
    printf("\n");
    int len = arrayUnique(array, sizeof(array)/sizeof(int));
    printArray(array, len);

    return 0;
}