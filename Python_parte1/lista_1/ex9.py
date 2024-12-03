n = int(input("Insira um número para descobrir o seu fatorial: "))

fat = 0

i = 1

res = n

if n == 0:
    fat = 0
else:
    for i in range(i, n):
        fat = (n - 1)
        res *= fat


print(f"o fatorial de {n} é: {res}")