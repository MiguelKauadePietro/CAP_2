n1 = int(input("Insira o primeiro número: "))
n2 = int(input("Insira o segundo número: "))

soma = 0

if n1 > n2:
    temp = n2
    n2 = n1
    n1 = temp

    for i in range(n1, n2):
        soma += i
elif n1 == n2:
    soma = 0
else:
    for i in range(n1, n2):
        soma += i

print(f"Soma = {soma}")
