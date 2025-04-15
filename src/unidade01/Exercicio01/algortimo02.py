import math

def temColisao(xa, ya, ra, xb, yb, rb):
    distancia = math.sqrt((xa - xb)**2 + (ya - yb)**2)
    return distancia <= (ra + rb)

print(temColisao(0, 0, 2, 3, 0, 2))  # True, colisão
print(temColisao(0, 0, 1, 5, 0, 1))  # False, sem colisão
