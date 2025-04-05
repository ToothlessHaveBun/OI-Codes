import math

N = int(input())

count = 0
e = 1

while True:
    t = 1 << e
    if t > N:
        break
    Q = N // t
    if Q == 0:
        e += 1
        continue
    m = math.isqrt(Q)
    cnt += (m + 1) // 2
    e += 1

print(cnt)