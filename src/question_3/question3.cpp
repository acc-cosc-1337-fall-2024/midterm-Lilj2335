#include "question3.h"

bool test_config()
{
    return true;
}

bool is_prime(int num)
{
    if (num <= 1) return false;
    if (num == 2) return true;

    for (int j = 2; j * j <= num; j++)
    {
        if (num % j == 0)
            return false;
    }

    return true; 
}

vector<int> get_primes(int num)
{
    if (num == 2) return vector<int>{2};

    vector<int> output;

    for (int i=2; i<num; i++) {
        if(is_prime(i))
        {
            output.push_back(i);
        }
    }

    return output;
}