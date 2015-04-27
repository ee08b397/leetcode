#include<iostream>
using namespace std;

class ReverseBits
{
public:
    int reverseBits(int n)
    {
        int reverse = 0;
        for (int i = 0; i < 32; ++i)
        {
            reverse = (reverse << 1) ^ (n & 0x1);
            n = n >> 1;
        }
        return reverse;
    }
};

int main()
{
    ReverseBits rb;
    cout << 43261596 << "\n";
    cout << rb.reverseBits(43261596) << "\n";

    return 0;
}
