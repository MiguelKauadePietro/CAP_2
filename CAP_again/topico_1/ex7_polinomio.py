import math

a = int(input("Insira o valor de A: "))
b = int(input("Insira o valor de B: "))
c = int(input("Insira o valor de C: "))
if a == 0 and b == 0:
    print("isso não é um polinômio!!!")
elif a == 0:
    print(f"Há apenas uma raiz dada por {-c/b}")
else:
    r = math.pow(b, 2) - (4*a) * c
    if r < 0:
        print("Não há raízes reais")
    else:
        x1 = ((-b) + math.sqrt(r)) / (2*a)
        x2 = ((-b) - math.sqrt(r)) / (2*a)
        if r == 0:
            print(f"Há apenas uma raiz válida: {x1}")
        else:
            print(x1)
            print(x2)
