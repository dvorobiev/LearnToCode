function is_Punctuation(char) {
    return char == ',' || char == '.' || char == '!' || char == '?' || char == ' '
}

function is_palindrom(palindrome) {
    if (palindrome.length < 2) {
        console.log("True");
        return true;
    } else if (is_Punctuation(palindrome[0])) {
        is_palindrom(palindrome.substr(1, palindrome.length - 1));
    } else if (is_Punctuation(palindrome[palindrome.length - 1])) {
        is_palindrom(palindrome.substr(0, palindrome.length - 1));
    } else if (palindrome[0].toLowerCase() == palindrome[palindrome.length - 1].toLowerCase()) {
        is_palindrom(palindrome.substr(1, palindrome.length - 2));
    } else {
        console.log("False");
        return false;
    }
}
console.log(is_palindrom("Madam, I'm Adam"))
