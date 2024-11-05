import random

encerrar = False
ganhou = False

num_oculto = random.randint(1, 9)
print(num_oculto)

creditos = 0.0

print("BEM-VINDO À LOTERIA PREMIUM!!!")


while encerrar != True:
    ganhou = False
    print(f"Menu \n -------- \n 1. Inserir créditos (você possui R$ {creditos}) \n 2. Jogar \n 3. Sair")
    opcao = int(input("Digite a opção: "))

    if opcao == 1:
        valor = float(input("Insira quantos créditos você deseja inserir: "))
        creditos += valor
        if valor < 0:
            print("Exiba valores positivos!!!")
    elif opcao == 2:

        while ganhou == False and creditos >= 5:
                num = int(input("Insira um chute: "))
                if num == num_oculto:
                    creditos += 50.0
                    num_oculto = random.randint(1, 9)
                    print(num_oculto)
                    ganhou = True
                else:
                    creditos -= 5.0
                    print(f"Você errou(você possui R$ {creditos})")
        if creditos == 0:
            print("Seus créditos acabaram, recarregue-os clicando a opção 1!")
    elif opcao == 3:
        print("Tchau!!!")
        encerrar = True
    else:
        print("Opção Desconhecida")