s = "".join(input("s: ").lower().split())
t = "".join(input("t: ").lower().split())

if s == t:
    print("Same")
else:
    print("Different")

print(f"s: {s}")
print(f"t: {t}")
