code = input("Encrypted message: ")
code_set = set(code)
print(code_set)
base = len(code)
print(base)
new_list = []
for x in range(len(code)):
    new_list.append(x)
    print(x)
temp = new_list[0]
new_list[0] = new_list[1]
new_list[1] = temp
sec = 1
for y in range(1,len(code)):
    sec = len(code_set)*sec + new_list[y]
print("Answer: ", sec)
