// дан массив [1,1,2,3,5,8,13,21]
// - с помощью цикла while просуммировать все элементы массива
// - с помощью цикла for найти произведение всех элементов массива с чётными индексами (на местах 0, 2, 4 и т.д.)
#include <stdio.h>

int int_array[8]={1,1,2,3,5,8,13,21};

int sum_of_elem(int *array, int len){
    int i, sum =0;
    while(i < len){
        sum = sum + array[i];
        ++i;
    }
    return sum;
}

int product_of_elem(int *array, int len){
    int product = 1;
    for(size_t i = 0; i < len; i+=2)
    {
        product = product*array[i];
    }
    return product;
}

int main(){
    printf("Summ of elements array is %d\n", sum_of_elem(int_array, 8));
    printf("Product of elements array is %d\n", product_of_elem(int_array, 8));
}