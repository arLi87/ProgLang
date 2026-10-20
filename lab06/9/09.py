import string

val = 1
for letter in string.ascii_lowercase:
    for num in range(100):
        var_name = f"{letter}{num}"
        globals()[var_name] = val
        val += 1

print("a0 =", a0)
print("a99 =", a99)
print("b0 =", b0)
print("z99 =", z99)