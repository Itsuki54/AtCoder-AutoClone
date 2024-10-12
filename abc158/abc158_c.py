def main():
    A, B = map(int, input().split())
    
    for i in range(10000):
        x = i * 0.08
        y = i * 0.1
        if int(x) == A and int(y) == B:
            print(i)
            return
    
    print(-1)

if __name__ == "__main__":
    main()
