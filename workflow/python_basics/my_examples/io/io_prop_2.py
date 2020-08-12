fisier = open("exemplu", "r")

numere = fisier.read()

print(numere)

numere = numere.split(" ")

print(numere)

fisier.close()
