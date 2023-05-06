# TODO
from cs50 import get_float

count = 0  # to keep track of coins used
while True:
    change = get_float("Change owed: ")
    if change > 0:
        break
cent  = round(change * 100)  #round up to the nearest whole number

while cent >= 25:
    cent = cent - 25
    count += 1

while cent >= 10:
    cent = cent - 10
    count += 1

while cent >= 5:
    cent = cent - 5
    count += 1

while cent >=1:
    cent = cent - 1
    count += 1

print(count)