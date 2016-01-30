def compareStrings(A, B):
    if B is None or len(B) == 0:
        return True
    if len(A) < len(B):
        return False
    alphabet_count = [0] * 26
    for letter_A in A:
        alphabet_count[ord(letter_A) - ord('A')] += 1
        for letter_B in B:
            alphabet_count[ord(letter_B) - ord('A')] -= 1
            if alphabet_count[ord(letter_B) - ord('A')] < 0:
                return False
    return True

print "A", ""
print compareStrings("A", "")

print "ABCDEF", "DE"
print compareStrings("ABCDEF", "DE")
