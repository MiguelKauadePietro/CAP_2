import math

n = int(input("Insira um número: "))

for i in range(0, n):
    val = int(input("Insira um número para saber seu quadrado: "))
    result = math.pow(val, 2)
    print(result)