class ReverseBits:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        r = 0
        for i in range(32):
            r = (r << 1) ^ (n & 0x1);
            n >>= 1;
        return r

if __name__ == "__main__":
    rb = ReverseBits()
    print 43261596
    print rb.reverseBits(43261596)

