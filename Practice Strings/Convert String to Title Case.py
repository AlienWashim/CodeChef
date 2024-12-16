for _ in range(int(input())):
    print(' '.join(word if word.isupper() else word.capitalize() for word in input().split()))
