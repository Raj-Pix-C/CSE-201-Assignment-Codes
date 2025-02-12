for i in range(1, 13):
    file_name = f"ch6_q{i}.cpp"
    with open(file_name, "w") as file:
        file.write('#include <iostream>\nusing namespace std;\n\n')
        file.write('int main() {\n\t')
        file.write('\n\treturn 0;\n}')

print("success ^u^")