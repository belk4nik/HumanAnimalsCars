#pragma once
#include <string>

//У меня пробег на машине в double А Enum только инт, поэтому я решил что машину я скипну

namespace age
{
    enum themAge{
        John = 42,
        Max = 27
    };

    std::string correctAlpha(std::string str);
    int correctCount(int count);
}
