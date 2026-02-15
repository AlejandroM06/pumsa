import os

os.system("cls")
print("Fruteria -- EL INGE")
print("====================\n")

manzana = int(input("Ingresa el valor de un kg de manzanas: "))
uva = int(input("Ingresa el valor de un kg de uvas: "))
pera = int(input("Ingresa el valor de un kg de peras: "))

kiloManz = int(input("\nIngrese la cantidad de kg de manzana que desea llevar: "))
kiloUva = int(input("Ingrese la cantidad de kg de uva que desea llevar: "))
kiloPera = int(input("Ingrese la cantidad de kg de pera que desea llevar: "))

subtotal = (manzana * kiloManz) + (pera * kiloPera) + (uva * kiloUva)
iva = 16 * 0.01
total = (subtotal * iva) + subtotal

print("\nSubtotal: ", subtotal)
print("IVA: ", subtotal * iva)
print("Total: ", total)
