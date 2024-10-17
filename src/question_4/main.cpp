#include "question4.h"
#include<iostream>

using namespace std;

int main()
{
    int input = 0;
    do
    {
        cout<<"input number between 1-15 for fib sequence: ";
        cin>>input;
        if(input<1 || input > 15)
        {
            cout<<"exiting, have a great day!\n";
            return 0;
        }
        else
        {
            int fib = get_fib_sequence(input);
            cout<<fib<<"\n";
        }
    } while (input != 0);
    
    return 0;
}