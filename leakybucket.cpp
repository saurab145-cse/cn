#include <iostream>
#include <Windows.h>
using namespace std;
int o_rate, buc_size;
#define buc_size 600
void leakyBucket(int pac_size, int b)
{
    cout << "Packet of size " << pac_size << " received " << endl;
    if (pac_size > buc_size)
    {
        cout << "Bucket Overflow " << endl;
    }
    else
    {
        while (pac_size > b)
        {
            Sleep(5);
            cout << "Send packet of size : " << b << endl;
            pac_size -= b;
        }
        cout << "Last packet of size " << pac_size << " sent " << endl;
    }
}
int main()
{
    cout << "Enter output rate :" << endl;
    cin >> o_rate;
    int n;
    cout << "Enter number of packet to be sent " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        Sleep(rand() % 10);
        leakyBucket(rand() % 700, o_rate);
    }
    return 0;
}
