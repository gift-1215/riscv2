"li %5,8\n\t"
"loop0:\n\t"
"addi %5,%5,-1\n\t"

"li %6,8\n\t"
"loop1:\n\t"
"addi %6,%6,-1\n\t"
"bnez %6,loop1\n\t"

"bnez %5,loop0\n\t"

"end:\n\t"
