n = int(input("Insira quantas vezes se repetirá: "))

maior = 0

num = int(input("Insira um número: "))

maior = num

for i in range(0, n - 1):
    num = int(input("Insira um número: "))

    if num > maior:
        maior = num

print(f"O maior valor é de: {maior}")
