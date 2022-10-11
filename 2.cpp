#include <iostream>
#include <string.h>
using namespace std;
int binarytodecimal(string num)
{
    string num ;
    int dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        while (num > 0)
        {
            if (num[i] =='1')
                dec_value += base;
            base = base * 2;
        }
        return dec_value;
    }
}
int main()
    {
        string num = “10101000”;
        cout << binarytodecimal(num) << endl;
    }