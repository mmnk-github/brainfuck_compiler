import sys
import subprocess

# コマンドライン引数の読み込み
args = sys.argv
if len(args) < 2:
    print("note: Please add the path of the file you want to compile to the command line arguments.")
    print("example: python compiler.py example_code.bf output_name")
    exit(0)
elif len(args) == 2:
    code_path = args[1]
    exe_name = 'a'
else:
    code_path = args[1]
    exe_name = args[2]

# brainfuckコードの読み込み
try:
    with open(code_path) as f:
        bfcode = f.read()
except OSError as e:
    print(str(e) + ": Could not open A.")
    exit(0)

# C言語に変換して出力
tab_count = 1
ccode = """
#include <stdio.h>
int main(void){
    char m[30000] = {0};
    char* ptr = m;
"""
for inst in bfcode:
    if inst == ']':
        tab_count -= 1
        if tab_count <= 0:
            print("syntax error: Check the correspondence between '[' and ']'.")
            exit(0)
    
    ccode += "    " * tab_count
    
    if inst == '>':
        ccode += "ptr++;\n"
    elif inst == '<':
        ccode += "ptr--;\n"
    elif inst == '+':
        ccode += "(*ptr)++;\n"
    elif inst == '-':
        ccode += "(*ptr)--;\n"
    elif inst == ',':
        ccode += "*ptr = getchar();\n"
    elif inst == '.':
        ccode += "putchar(*ptr);\n"
    elif inst == '[':
        ccode += "while(*ptr){\n"
        tab_count += 1
    elif inst == ']':
        ccode += "}\n"

ccode += """    return 0;
}"""

with open("temp.c", mode='w') as f:
    f.write(ccode)

# C言語をコンパイル
command = "gcc temp.c -o " + exe_name
subprocess.call(command)