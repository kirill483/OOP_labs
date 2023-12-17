#include "task.h"

int main(){
    std::string str;
    getline(std::cin, str);
    if(is_palindrome(str)){
        std::cout << "String is palindrome" << std::endl;
    }
    else{
         std::cout << "String is not palindrome" << std::endl;
    }
    return 0;
}

