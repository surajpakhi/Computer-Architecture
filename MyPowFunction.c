int power(int base, int exponent);
int _start()
{
        volatile int base = 5;
        volatile int exponent = 3;

        volatile int Value = power(base, exponent);
        volatile char* tx = (volatile char*) 0x40002000;
        volatile int out = Value;
        *tx = out;
        
        return 0;
}

int power(int base, int exponent)
{
        int result = 1;
        for(exponent; exponent>0;exponent--)
        {
                result = result * base;
        }
        return result;
}
