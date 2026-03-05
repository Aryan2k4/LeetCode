class Solution(object):
    def minOperations(self, s):
        n = len(s)
        pat1 = []
        pat2 = []
        one = False

        for _ in range(n):
            if one:
                pat1.append('1')
            else:
                pat1.append('0')
            one = not one

        one = True
        for _ in range(n):
            if one:
                pat2.append('1')
            else:
                pat2.append('0')
            one = not one

        cnt1 = 0
        cnt2 = 0

        for i in range(n):
            if s[i] != pat1[i]:
                cnt1 += 1
            if s[i] != pat2[i]:
                cnt2 += 1

        return min(cnt1, cnt2)