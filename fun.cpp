#include "header.h"
#include <algorithm>

void set_numberOccur(const std::vector<int>& numbers, std::vector<int>& numbers_occur)
{
    for (size_t i = 0; i < numbers.size(); ++i)
    {
            numbers_occur[numbers[i]] += 1;
    }
}

std::vector<int> solution(std::vector<int>& numbers)
{
    int max_element = *(std::max_element(numbers.cbegin(), numbers.cend()));
    std::vector<int> numbers_occur (max_element + 1, 0);
    set_numberOccur(numbers, numbers_occur);

    std::vector<int> result(numbers.size(), 0);

    for(size_t i = 0; i < numbers.size(); ++i)
    {
        int l = 1;
        int divisible = 0;
    
        while(l * l <= numbers[i])
        {
            if(numbers[i] % l == 0)
            {
                divisible += numbers_occur[l];

                if(numbers[i] / l != l)
                    divisible += numbers_occur[numbers[i] / l];
            }
            ++l;
        }

        result[i] = numbers.size() - divisible;
    }

    return result;
}


