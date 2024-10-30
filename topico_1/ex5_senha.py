USER = "Binho_bolinha19"
SENHA = "binho19"

opcao = int(input("Insira uma das opções:\n Opções\n ----------\n 1. entrar\n 2. sair\n"))

if opcao == 1:
    user = input("insira o usuário: ")
    senha = input("insira a senha: ")
    if user == USER and senha == SENHA:
        print("Login feito com sucesso!")
    else:
        print("username ou senha incorretos!")
elif opcao == 2:
    print("adeus!")
else:
    print("Digite uma opção válida!")