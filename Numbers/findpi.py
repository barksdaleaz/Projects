import math

roundto = input("Enter the number of decimal places: ")
roundint = int(roundto)

roundval = round(math.pi, roundint)

print(roundval)
