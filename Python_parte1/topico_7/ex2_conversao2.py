def converte2(str_bin, n):
    num_int = int(str_bin, n)

    num_bin = bin(num_int)

    num_hex = hex(num_int)

    return f"""Decimal {num_int}\nBinário: {num_bin}\nHexadecimal: {num_hex}"""



def testes():

    print(converte2("010101", 3))



testes()

