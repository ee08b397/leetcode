class StrStr(object):
    def strstr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        if haystack is None or needle is None:
            return -1
        for i in range(len(haystack) - len(needle) + 1): 
            c = 0 
            for j in range(len(needle)):
                if haystack[i + j] == needle[j]:
                    c += 1
            if c == len(needle):
                return i
        return -1
      	

if __name__ == "__main__":
    s = StrStr()
    haystack = "abcdef"
    needle = "bc"
    print "haystack = {}; needle = {}"\
            .format(haystack, needle)
    print s.strstr(haystack, needle)
    
    haystack = "abcdef"
    needle = "cf"
    print "haystack = {}; needle = {}"\
            .format(haystack, needle)
    print s.strstr(haystack, needle)

