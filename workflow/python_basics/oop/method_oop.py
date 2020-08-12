class Fighter:

    def __init__(self, name):
        self.name = name
        self.health = 100
        self.damage = 10


    def attack(self, victim):
        victim.health = victim.health - self.damage


    def total(self, victim):
        self.total_health = victim.health + self.health



oli = Fighter("Oliviu")
cris = Fighter("Cristina")

cris.total(oli)

print(cris.total_health)
