#include "question2.h"
using std::to_string;

bool test_config()
{
    return true;
}

string get_fib_sequence(int number) {
    if (number == 0) return "0";
    if (number == 1) return "0 1";
    
    string output = "0 1 ";
    int previous2 = 0;
    int previousnumber = 1;
    
    for (int i = 2; i <= number; i++) {
        int current = previous2 + previousnumber;
        output.append(to_string(current));
        output.append(" ");
        previous2 = previousnumber;
        previousnumber = current;
    }

    return output.substr(0, output.size() - 1);
}
