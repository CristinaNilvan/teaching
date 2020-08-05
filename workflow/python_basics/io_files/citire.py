fisier = open("demo.txt", "r")

x = fisier.read()

x = x.split(' ')

for item in x:
	print(item)

fisier.close()