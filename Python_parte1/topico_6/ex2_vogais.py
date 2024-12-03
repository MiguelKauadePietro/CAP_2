def conta_vogal(arq):
        fp = open(arq, "r")

        cont = 0

        while True:
            text = fp.read(1)

            # if text == "a" or text == "e" or text == "i" or text == "o" or text == "u":
            #         cont += 1

            if text == "":
                break
            elif text in "aeiou":
                cont += 1
                
        return cont


def testes():

    print(conta_vogal("descricao.txt"))

testes()