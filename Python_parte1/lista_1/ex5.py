print("Você está no ensino médio ou na universidade? ")

resposta = input("Insira 'ensino médio' para EM ou 'universidade' para U: ")

if resposta == "ensino médio":
    ano = input("Em qual ano do ensino médio você está?")
    materia = input("Qual a sua matéria preferida?")
    print(f"você está no {ano} ano do ensino médio")
    print(f"sua matéria favorita do ensino médio é {materia}")
elif resposta == "universidade":
    curso = input("Qual o seu curso?")
    print(f"Você está cursando {curso} na universidade")
    meio = input("Que meio de transporte você usa: carro, moto, bicicleta ou ônibus? ")
    if meio == "ônibus":
        valor = int(input("Qual o valor da passagem: "))
        print(f"Você paga {valor} pela passagem")
else:
    print("opção inválida")