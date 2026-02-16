def crear_marco(ancho, alto):
    for i in range(alto):
        for j in range(ancho):
            if i == 0 and j == 0: print("┌", end="")
            elif i == 0 and j == ancho - 1: print("┐", end="")
            elif i == alto - 1 and j == 0: print("└", end="")
            elif i == alto - 1 and j == ancho - 1: print("┘", end="")
            elif i == 0 or i == alto - 1: print("─", end="")
            elif j == 0 or j == ancho - 1: print("│", end="")
            else: print(" ", end="")
        print()

crear_marco(20, 10)