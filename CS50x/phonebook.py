people = {
    "Carter": "+1-617-495-1000",
    "David": "+1-949-468-2750"
}

name = input("Name: ")

if name in people.keys():
    print(f"Number: {people[name]}")
