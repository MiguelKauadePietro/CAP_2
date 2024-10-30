x = int(input())
y = int(input())

soma = 0

if x == y:
    soma = 0
    print(soma)
elif x > y:
    for i in range(y, x):
        if i % 2 != 0:
            soma += i
    print(soma)
else:
    for i in range(x, y):
        if i % 2 != 0:
            soma += i
    print(soma)
