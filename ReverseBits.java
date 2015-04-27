public class ReverseBits
{
    public int reverseBits(int n)
    {
        int reverse = 0;
        for (int i = 0; i < 32; ++i)
        {
            reverse = (reverse << 1) ^ (n & 0x1);
            n >>>= 1;
        }
        return reverse;
    }

    public static void main(String[] str)
    {
        ReverseBits rb = new ReverseBits();
        System.out.println(43261596);
        System.out.println(rb.reverseBits(43261596));
    }
}
