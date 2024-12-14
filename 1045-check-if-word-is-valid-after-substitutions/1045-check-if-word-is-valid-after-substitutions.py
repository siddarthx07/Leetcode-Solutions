class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        while len(s)>0 and "abc" in s:
            s=s.replace("abc","")

        return len(s)==0