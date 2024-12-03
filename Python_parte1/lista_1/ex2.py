idade = int(input("Insira sua idade para saber quantos dias de vida você tem: "))

if idade < 5:
    print("Não é apto à competir ainda")
elif idade >= 5 and idade <= 7:
    print("Infantil A: 5 a 7 anos")
elif idade >= 8 and idade <= 10:
    print("Infantil B: 8 a 10 anos")
elif idade >= 11 and idade <= 13:
    print("juvenil A: 11 a 13 anos")
elif idade >= 14 and idade <= 17:
    print("juvenil B: 14 a 17 anos")
else:
    print("Adulto: Maior de 18 anos")