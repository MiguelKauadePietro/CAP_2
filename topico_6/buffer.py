buffer_size = 10

fp = open("champs.txt", "r")

while True:
    text = fp.read(buffer_size)
    if text == "":
        break
    print(text)

fp.close()