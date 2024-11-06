nf1 = int(input("Numerador da fração 1: "))
df1 = int(input("Denominador da fração 1: "))
nf2 = int(input("Numerador da fração 2: "))
df2 = int(input("Denominador da fração 2: "))

novo_numerador = (nf1 * df2) + (nf2 * df1)
novo_denominador = df1 * df2

print(f"{nf1}/{df1} + {nf2}/{df2} = {novo_numerador}/{novo_denominador}")