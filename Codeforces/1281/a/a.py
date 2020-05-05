import math, collections, sys
#input = sys.stdin.readline
for _ in range(int(input())):
    s = input()
    if s.endswith('po'):
        print("FILIPINO")
    elif s.endswith("desu") or s.endswith("masu"):
        print("JAPANESE")
    else:
        print("KOREAN")
