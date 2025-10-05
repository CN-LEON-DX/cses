import sys

def solve():
    a = int(sys.stdin.readline())
    print(a, end=" ")
    while a > 1:
        if a % 2 == 0:
            a //= 2
        else:
            a = a*3 + 1
        print(a, end=" ")

if __name__ == '__main__':
    solve()