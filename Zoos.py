// BY AYUSH AKASH
s = input()

from collections import Counter
d = Counter(s)
if d['z']*2 == d['o']:
    print("Yes")
else:
    print("No")
