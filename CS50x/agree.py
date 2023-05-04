s = 'undefined'
while s not in ["y", "n"]:
    s = input("Do you agree? (y/n): ").lower()

if s in "y":
    print("Agreed")
elif s in "n":
    print("Not agreed.")
