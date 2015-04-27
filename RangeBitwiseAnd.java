public class RangeBitwiseAnd {
    public int rangeBitwiseAnd(int m, int n) {
        while (n > m)
            n = n & n - 1;
        return m & n;
    }
    public static void main(String[] str) {
        RangeBitwiseAnd rba = new RangeBitwiseAnd();
        System.out.println("[5, 7]");
        System.out.println(rba.rangeBitwiseAnd(5, 7));
    }
}
