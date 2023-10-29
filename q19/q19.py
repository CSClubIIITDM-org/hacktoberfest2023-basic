def subtractt(a, b):
    if b == 0:
        return "Cannot divide by zero"

    quotient = 0
    while a >= b:
        a -= b
        quotient += 1

    return quotient, a

input_str = input("Enter two integers separated by a space (a b): ")
input_values = map(int, input_str.split())

output = subtractt(*input_values)

print("Result:", output)
