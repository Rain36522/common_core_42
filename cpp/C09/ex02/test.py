import random

def generate_int(quantity):
    x = 'INPUT = '
    i = 0
    min_value = 0
    max_value = 100

    while (i < quantity):
        j = random.randint(min_value, max_value)
        x = x + str(j) + ' '
        i += 1

    print(x)

n = int(input("Entrez nombre a generer : "))
generate_int(n)