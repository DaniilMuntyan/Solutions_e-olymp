s = input()
res = ""
for char in s:
    res += char * 2 if char.isdigit() else char
print(res)