//Напишите-ка, например, рекурсивную функцию, которая проверяет правильность расстановки скобок:
//
//()()) — неправильно
//)( — неправильно
//(()(()())) — правильно (вроде). Ну вы поняли. 
//
//Бонус пойнтс: допускать (и игнорировать) любые произвольные символы внутри скобок
//
//Это задача со звёздочкой, необязательная :)
let first = true

function parentheses_validation(string) {
    if (string.length==0) {
        if (counter!=0){
            console.log("no valid")
            return false;
        } else {
            console.log("valid")
            return true;
        }
    }
    if (string[0]!="(" && string[0]!=")"){
        parentheses_validation(string.substr(1,string.length-1))
    } else if (string[0]==')'){
        if (first) {
            console.log("no valid")
            return false; 
        }
        counter-=1;
        parentheses_validation(string.substr(1,string.length-1))
    } else if (string[0]=='('){
        counter+=1;
        first = false
        parentheses_validation(string.substr(1,string.length-1))
    }
}
let counter = 0

console.log(parentheses_validation('(2*2)%(5+7)'))

console.log(parentheses_validation('()()'))
console.log(parentheses_validation(')('))
console.log(parentheses_validation('(()(()())'))