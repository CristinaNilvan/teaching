fisier = open("exemplu", "w")

for item in range(1, 25, 2):
    item = str(item)
    fisier.write(item)
    fisier.write(" ")

fisier.close()
