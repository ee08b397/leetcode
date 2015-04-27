/* Given a range [m, n] where 0 <= m <= n <= 2147483647,
 * return the bitwise AND of all numbers in this range,
 * inclusive. For example, given the range [5, 7], you
 * should return 4.
 */

#include<iostream>
using namespace std;

class RangeBitwiseAnd
{
public:
    int rangeBitwiseAnd(int m, int n)
    {
        while (n > m)
        {
            n = n & n - 1;
        }
        return m & n;
    }
};

int main()
{
    RangeBitwiseAnd rangebitwiseand;
    cout << "[5, 7]" << "\n";
    cout << rangebitwiseand.rangeBitwiseAnd(5, 7) << "\n";

    return 0;
}

