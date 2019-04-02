// - создать массив чисел
// - создать массив строк
// - узнать длину массива
// - получить элемент по индексу
// - получить последний элемент
#include <stdio.h>
int int_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
char *str_array[5] = {"one", "two", "three", "four", "five"};

int print_dig_array(int elem[], int current, int last)
{
    if (current > (last - 1))
    {
        printf("\n");
        return 0;
    }
    printf("%d ", elem[current]);
    current++;
    print_dig_array(elem, current, last);
    return 0;
}

int print_str_array(char *elem[], int current, int last)
{
    if (current > (last - 1))
    {
        printf("\n");
        return 0;
    }
    printf("%s ", elem[current]);
    current++;
    print_str_array(elem, current, last);
    return 0;
}

int main()
{
    int length_int_array = sizeof(int_array) / sizeof(int_array[0]);
    int length_str_array = sizeof(str_array) / sizeof(str_array[0]);
    printf("Array of digit: ");
    print_dig_array(int_array, 0, length_int_array);
    printf("Array of string: ");
    print_str_array(str_array, 0, length_str_array);
    printf("size of digit array: %d\n", length_int_array);
    printf("size of string array: %d\n", length_str_array);
    printf("get first element from digit array:%d and second element from string array:%s\n", int_array[0], str_array[1]);
    printf("get last element from digit array:%d and last element from string array:%s", int_array[length_int_array - 1], str_array[length_str_array - 1]);
    return 0;
}