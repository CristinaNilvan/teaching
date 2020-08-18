prenume = input("Scrie prenumele")

prenume = prenume.lower()

print(prenume)

prenume = prenume.replace("c", "C")

print(prenume)

nume = "Nilvan"

numele_intreg = nume + " " + prenume

print(numele_intreg)

propozitie = "Ma numesc {} {} si am {} ani"

propozitie = propozitie.format(nume, prenume, 19)

print(propozitie)
