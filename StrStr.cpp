#include <stdio.h>
#include <iostream>

using namespace std;

class StrStr {
	public:
		int strStr(string haystack, string needle) {
		// 	int i, j;
		// 	for (i = 0; i < (source.length() - target.length() + 1); i++) {
		// 		for (j = 0; j < target.length(); j++) {
		// 			if (source[i + j] != target[j]) {
		// 				break;
		// 			}
		// 		}
		// 		if (j == target.length()) {
		// 			return i;
		// 		}
		// 	}
		// 	return -1;
		// }
			
		// my code doesn't work, segmentation fault for the second case
		// the code found online below works

   		int i = 0;  // index under examine in haystack
        int j = 0;  // index under examine in needle
		while (haystack[i] && needle[j]) {
            if (haystack[i] == needle[j]) {
                i++;
                j++;
            } else {
                // roll back:
                // reset haystack index back to (i - j + 1), since in current examine
                // start index in haystack is (i - j)
                i = i - j + 1;
                // reset needle back to its beginning
                j = 0;
            }
        }
        // if haystack ends but needle not ends, 
        // we know needle is not in the haystack, then return -1.
        return (needle[j]) ? -1 : (i - j);
	        }
};

int main() {
	StrStr s;
	cout << s.strStr("abcdef", "bc") << "\n";
	cout << s.strStr("abb", "abaaa") << "\n";
	return 0;
}