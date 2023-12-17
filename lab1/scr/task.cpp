#include "task.h"


bool is_palindrome(const std::string& str){
    size_t lenth = str.length();
    for(size_t i = 0; i < lenth / 2; i++){
        if(str[i] != str[lenth - i - 1]){
            return false;
        }
    }
    return true;
}


