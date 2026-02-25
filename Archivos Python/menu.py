import subprocess


def clr():
    subprocess.run(["cmd", "/c", "cls"])


ancho = 80
alto = 20
L = 0
W = 0
opc = -1

while opc != 4:
    clr
    while L < alto:
        while W < ancho:
            if L == 0 or L == alto - 1:
                print("=")
            elif W == 0 or ancho - 1:
                print("|")
            elif L == 2 and W == 6:
                print("Menú de opciones.")
