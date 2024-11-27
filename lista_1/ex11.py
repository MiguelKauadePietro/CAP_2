n = int(input("Insira um número: "))

digito = int(n / (10 ** 3))

val1 = n % (10 ** 3)

prox_digito1 = int(val1/(10 ** 2))

val2 = n % (10 ** 2)

prox_digito2 = int(val2/(10 ** 1))

val3 = n % (10 ** 1)

prox_digito3 = int(val3/(10 ** 0))

print(f"{digito} * 10 ^ 3 + {prox_digito1} * 10^2 + {prox_digito2} * 10^1 + {prox_digito3} * 10^0")

