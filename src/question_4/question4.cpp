//
bool test_config()
{
    return true;
}


int get_fib_sequence(int number)
{
    if (number == 0) return 0;
    if (number == 1) return 1;
    
    int previous2 = 0;
    int previousnumber = 1;
    int current = 0;
    for (int i = 2; i <= number; i++) {
        current = previous2 + previousnumber;
        previous2 = previousnumber;
        previousnumber = current;
    }

    return current;
}