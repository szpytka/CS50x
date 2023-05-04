def main():
    height = get_height()
    for i in range(height):
        print("#")
    print("?" * 5)

    for i in range(3):
        for j in range(3):
            print("#", end="")
        print()


def get_height():
    while True:
        try:
            n = int(input("Height > 0: "))
            if n > 0:
                return n
        except ValueError:
            print("Not an integer")


main()
