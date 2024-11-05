n1 = int(input("Insira o primeiro número: "))
n2 = int(input("Insira o segundo número: "))
n3 = int(input("Insira o terceiro número: "))

if n1 >= n2 and n1 >= n3:
    maior_num = n1
elif n2 >= n1 and n2 >= n3:
    maior_num = n2
else:
    maior_num = n3

print(f"Maior número é o {maior_num}")