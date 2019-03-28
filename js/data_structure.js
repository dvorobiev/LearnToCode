function growe(array){
    for (index in array) {
        array[index]*=2;
    }
    return 0;
}

var str_arr=["one", "two", "three", "four", "five"]; // - создать массив строк
var int_arr = [1,2,3,4,5,6,7,8,9,10]; // - создать массив чисел
console.log("array of digit:",int_arr);
console.log("length:",int_arr.length); // узнать длинну массива
console.log("last item:",int_arr[int_arr.length-1]); // - получить последний элемент
console.log("get second element:",int_arr[1]); // - получить элемент по индексу
int_arr.unshift(0); // - добавить элемент в начало
int_arr.push(11); // - добавить элемент в конец
console.log("array of digit:",int_arr);
console.log("array of string:",str_arr);
console.log("length",str_arr.length); // узнать длинну массива
console.log("last item",str_arr[str_arr.length-1]); // - получить последний элемент
console.log("get second element:",str_arr[1]); // - получить элемент по индексу
str_arr.unshift('zero'); // - добавить элемент в начало
str_arr.push('six'); // - добавить элемент в конец
console.log("array of string:",str_arr);
str_arr.splice(2,1); // - удалить элемент по индексу
console.log(int_arr);
growe(int_arr); // - применить функцию ко всем элементам массива и получить новый той же длины
console.log(int_arr);
new_arr = str_arr.concat(int_arr); // - объединить два массива в один
console.log(new_arr);
