#!/usr/bin/env python3

import random
random.seed(10)

NUM_CASES=15
NUM_FUNCS=400
NUM_ITER=20

with open("l1-icache-miss/l1-icache-miss.c",'w') as f:

    f.write("#include <stdio.h>\n\n")

    for j in range(NUM_FUNCS):
        f.write(f"int bigswitch{j}(int n) {{\n    int new_n;\n    switch (n) {{\n")
        for n in range(NUM_CASES):
            next_case = random.randint(1,int(NUM_CASES/2))
            f.write(f"        case {n}: new_n = n + {next_case}; break;\n")
        f.write(f"        default: new_n = 100;\n") 
        f.write("    }\n    return new_n;\n}\n\n")

    f.write(f"""
int main() {{
    int next_n = 0;
    for (int i=0; i < {NUM_ITER}; i++) {{\n""")
    for j in range(NUM_FUNCS):
        f.write(f"        next_n += bigswitch{j}(next_n);\n")
    f.write("""    }
    printf("Final n: %ld",next_n);
    return 0;
}\n""")