#include <iostream>
#include <vector>
#include <algorithm> 
/**
 * @brief функция проверки входных данных 
 * 
 * @param input_1 - входное число
 * @return int - 1 если число подходит, 0 в противном случае
 */
int checkInput(int input_1)
{
    if(input_1 <= 64)
    {
        return 0;
    } else
    {
        return 1;
    }
}