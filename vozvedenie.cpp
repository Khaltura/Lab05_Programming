#include <iostream>
#include <vector>
#include <algorithm> 
std::vector<int> vozvedenie(int input_1, std::vector<int> vec)
{
    for (int i = 1; i < input_1; ++i) {
        int carry = 0;
        for (int j = 0; j < vec.size(); ++j) {
            int product = vec[j] * 2 + carry;
            vec[j] = product % 10;
            carry = product / 10;
        }
        while (carry > 0) {
            vec.push_back(carry % 10);
            carry /= 10;
        }
    }
    return vec;
}