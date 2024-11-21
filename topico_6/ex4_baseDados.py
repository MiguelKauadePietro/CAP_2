def inserir_dados(arq, indice):

    fp = open(arq, "a")

    nome = input("Insira seu nome: ")
    idade = int(input("Insira sua idade: "))
    profissao = input("Insira sua profissão: ")
    emprego = input("Você possui emprego?: ")

    fp.write(f" User{indice}:\n Nome: {nome}\n Idade: {idade}\n Profissão: {profissao}\n Emprego: {emprego}\n ---------\n")

    fp.close()

def imprimir_dados(arq, indice):
    fp = open(arq, "r")

    while True:
        text = fp.readline()
        if text == "":
            break
        print(text)
    fp.close()

i = 0

while True:
    print(" Menu\n ----\n 1. Inserir informações de usuário\n 2. Imprimir dados\n 3. Encerrar\n")
    opcao = int(input("Insira uma opção: "))

    i+=1

    if opcao == 1:
        inserir_dados("dados.txt", i)
    elif opcao == 2:
        imprimir_dados("dados.txt", i)
    elif opcao == 3:
        break
    else:
        print("Insira uma opção válida!!!")