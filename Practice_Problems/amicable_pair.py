def aliquot(n: int) -> int:
    t = 2
    aliq = 1
    while t * t < n:
        if n % t == 0:
            aliq += t + n//t
        t += 1
    if n % t == 0:
        aliq += t
    return aliq

def amicable_pairs(start: int, limit: int) -> [(int, int)]:
    for n in range(start, limit):
        aliq_of_n = aliquot(n)
        if aliq_of_n < n:
            if aliquot(aliq_of_n) == n:
                yield (aliq_of_n, n)

import sys
start = int(sys.argv[1])
limit = int(sys.argv[2])
for pairs in amicable_pairs(start, limit):
    print(pairs)
