def escreve_nomes():

    fp = open("nomes.txt", "w")

    while True:
        nome = input("Insira um nome no arquivo: ")

        if nome == "sair":
            break

        fp.write(f"{nome}\n")


    fp.close()

escreve_nomes()