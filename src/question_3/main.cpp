#include "question3.h"
#include <iostream>

int main()
{
    int input = 0;
    do
    {
        cout<<"input number between 1-60 to get the primes: ";
        cin>>input;
        if(input<1 || input > 60)
        {
            cout<<"exiting, have a great day!\n";
            return 0;
        }
        else
        {
            vector<int> primes = get_primes(input);
            for (auto prime : primes)
            {
                cout<<prime<<", ";
            }
            cout<<"\n";
        }
    } while (input != 0);
    
    return 0;
}