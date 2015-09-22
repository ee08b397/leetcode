class Solution:
    # @param nums, a list of integer
    # @param k, num of steps
    # @return nothing, please modify the nums list in-place.
     
    def rotate_k(self, nums, k):
        for i in range(k):
            self.rotate_1(nums)
        print nums

    def rotate_1(self, n):
        head = n[0]
        for i in range(len(n) - 1):
            n[i] = n[i+1]
        n[-1] = head

if __name__ == "__main__":
    s = Solution()
    s.rotate_k([1,2,3,4,5,6,7], 2)
    s.rotate_k([1,2,3,4,5,6,7], 4)
