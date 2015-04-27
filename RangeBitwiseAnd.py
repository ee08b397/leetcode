class RangeBitwiseAnd:
    # @param m, an integer
    # @param n, an integer
    # @return an integer
    def rangeBitwiseAnd(self, m, n):
        while(n > m):
            n = n & n - 1;
        return m & n;

if __name__ == "__main__":
    rba = RangeBitwiseAnd()
    print "[5, 7]"
    print rba.rangeBitwiseAnd(5,7)

