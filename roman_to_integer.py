romanMap = {
    'I' : 1,
    'V' : 5,
    'X' : 10,
    'L' : 50,
    'C' : 100,
    'D' : 500,
    'M' : 1000
}

text = input()

number = 0
i = 0

while i < len(text):
    if i + 1 < len(text) and romanMap[text[i]] < romanMap[text[i+1]]:
        number += romanMap[text[i+1]] - romanMap[text[i]]
        i += 2
    else:
        number += romanMap[text[i]]
        i += 1

print(number)