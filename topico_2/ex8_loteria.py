import random

num_oculto = random.randint(1, 20)
print(num_oculto)

acertou = False

# 5 tentativas

# for i in range(0, 5):
#     num = int(input("Insira um chute: "))

#     if num == num_oculto:
#         print("Parabéns você acertou o número secreto!!!")
#         break
#     else:
#         print("Você errou! Tente novamente!!!")

#     if i == 4:
#         print("Acabou suas tentativas! Você perdeu fera!!!")

cont = 0

while acertou == False: # n tentativas
    num = int(input("Insira um chute: "))

    cont += 1

    if num == num_oculto:
        print(f"Parabéns!!! você acertou em {cont} tentativa(s)")
        acertou = True
    else:
        print("Você errou, tente novamente!!!")

    if cont == 5:
        print("Fim de jogo!")
        break