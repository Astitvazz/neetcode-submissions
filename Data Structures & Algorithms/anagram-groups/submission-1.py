class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        f={}
        for num in strs:
            n= sorted(num)
            n = "".join(map(str,n))
            if n not in f:
                f[n]=[]
            f[n].append(num)
        b=[]
        for num,score in f.items():
            b.append(score)
        return b
        