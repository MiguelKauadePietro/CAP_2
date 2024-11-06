n1 = int(input("Insira o primeiro valor: "))
n2 = int(input("Insira o segundo valor: "))
n3 = int(input("Insira o terceiro valor: "))

if n1 < n2 and n1 < n3:
    print(f"{n1}")
elif n2 < n1 and n2 < n3:
    temp = n1
    n1 = n2
    n2 = temp
    print(f"{n1}")
else:
    temp = n1
    n1 = n3
    n3 = temp
    print(f"{n1}")

if n2 > n1 and n2 < n3:
    print(f"{n2}")
elif n1 > n2 and n1 < n3:
    temp = n2
    n2 = n1
    n1 = temp
    print(f"{n2}")
else:
    temp = n2
    n2 = n3
    n3 = temp
    print(f"{n2}")

if n3 > n2 and n3 > n1:
    print(f"{n3}")
elif n2 > n1 and n2 > n3:
    temp = n3
    n3 = n2
    n2 = temp
    print(f"{n3}")
else:
    temp = n3
    n3 = n1
    n1 = temp
    print(f"{n3}")
