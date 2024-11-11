#include "Enum.h"
#include <iostream>

std::string age::correctAlpha(std::string str)
{
    for (int i = 0; i < str.length(); ++i) {
        if(!isalpha(str.at(i)) && !ispunct(str.at(i)))
        {
            std::cout << "Некорректный ввод данных в поле" << std::endl << "____________" << std::endl;
            return "undefined";
        }
    }
    return (str == "undefined") ? "undefined" : str;
}

int age::correctCount(int count)
{
    if(count >= 0) return count;
    else
    {
        std::cout << "Некоректный ввод данных в поле" << std::endl << "_______________" << std::endl;
        return 0;
    }
}