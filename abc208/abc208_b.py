from math import factorial

total_amount = int(input())
coin_count = 0

for i in range(1, 11):
    divisor = factorial(i + 1)
    remainder = total_amount % divisor
    coin_count += remainder // factorial(i)
    total_amount -= remainder

print(coin_count)
