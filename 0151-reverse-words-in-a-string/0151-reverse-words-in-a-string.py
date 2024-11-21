class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        ans=""
        st=[]
        words=s.split()
        for words in words:
            st.append(words)
        while st:
            ans+=st[-1]
            st.pop()
            if(len(st)>0):
                ans+=" "


            
        return ans


        