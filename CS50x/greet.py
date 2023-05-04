import sys

if len(sys.argv) >= 2:
    print(f"Hello, {sys.argv[1]}")
else:
    print("Hello, World")

for arg in sys.argv[1:]:
    print(arg)
