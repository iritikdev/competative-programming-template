import sys

sys.stdout = open('./python/output.txt', 'w')
sys.stdin = open('./python/input.txt', 'r')


def solve():
    # write your code...
    pass


test_cases = int(input())
while test_cases:
    solve()
    test_cases -= 1
