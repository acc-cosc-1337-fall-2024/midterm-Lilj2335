#include "question1.h"
#include <iostream>

using namespace std;

int main()
{
    cout<<"Please input seconds since 1970: ";

    int input;   
    cin>>input;

    cout<<get_hours(input)<<":"<<get_minutes(input)<<":"<<get_seconds(input)<<"\n";

    return 0;
}