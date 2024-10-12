def is_palindrome(n):
    s = str(n)
    return s == s[::-1]

def count_palindromes(A, B):
    count = 0
    for i in range(A, B + 1):
        if is_palindrome(i):
            count += 1
    return count

# 標準入力から A と B を取得
A, B = map(int, input().split())

# 回文数の個数をカウント
result = count_palindromes(A, B)
print(result)
