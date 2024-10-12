import math

def calculate_time(N, X, T):
    needed_batches = math.ceil(N / X)
    total_time = needed_batches * T
    return total_time

def main():
    N, X, T = map(int, input().split())
    result = calculate_time(N, X, T)
    print(result)

if __name__ == "__main__":
    main()
