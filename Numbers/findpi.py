import math

def calculate(roundint):
    roundval = round(math.pi, roundint)
    return roundval

roundto = input("Enter the number of decimal places: ")

while (roundto >= 'a' and roundto <= 'z'):
    roundto = input("Enter the NUMBER of decimal places: ")

if not roundto:
    print("You must enter an integer.")
    roundto = input("Enter the number of decimal places: ")

if (int(roundto) < 1 or int(roundto) > 100):
    print("Too far! Choose a number between 0 and 100.")
    roundto = input("Enter a reasonable number of decimal places: ")

roundint = int(roundto)

print(calculate(roundint))
