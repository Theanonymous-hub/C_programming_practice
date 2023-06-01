S =input()
from collections import Counter
d=Counter(S)
if d['z']*2 ==d['o']:
    print("Yes")
else:
    print("No")

