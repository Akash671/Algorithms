/* author : @akash kumar */

#include <iostream>
using namespace std;

void solve(int n)
{
    long binary = 0, pow = 1;

    while (n > 0)
    {
        int lastBit = n % 2;
        binary += lastBit * pow;
        pow *= 10;
        n = n / 2;
    }
    cout<<binary<<"\n";
}

int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}
