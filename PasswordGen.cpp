#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int count;
    cout << "Password length: ";
    cin >> count;
    srand(time(0));
    char data[99] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890~!@#$%^&*()_-+=[{]}':;.>,</?";
    cout << "Your Password: ";
    for (int i = 0; i <= count; i++)
    {
        cout << data[rand() % 93];
    }
}