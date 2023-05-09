// TODO : 
"li %[flag], 0\n\t" // Initialize flag to 0
"addi %[CPI5_cnt], %[CPI5_cnt], 1\n\t" // Increment CPI5_cnt

"vsetvli t0, a0, e16, m2\n\t"
"addi %[CPI3_cnt], %[CPI3_cnt], 1\n\t" // Increment CPI3_cnt

"vle16.v v0, 0(%[p_x])\n\t" // v0 = p_x
"addi %[CPI5_cnt], %[CPI5_cnt], 1\n\t" // Increment CPI5_cnt

"li t1, 8\n\t"
"addi %[CPI5_cnt], %[CPI5_cnt], 1\n\t" // Increment CPI5_cnt

"loop%=: \n\t"

"lh t2, 0(%[p_x])\n\t" // t2 = p_x[i]
"addi %[CPI5_cnt], %[CPI5_cnt], 1\n\t" // Increment CPI5_cnt

"vadd.vx v2, v0, t2\n\t" // v2 = v0 + t2
"addi %[CPI4_cnt], %[CPI4_cnt], 1\n\t" // Increment CPI4_cnt

"vmseq.vx v4, v2, %[target]\n\t" // Flag elements equal to target
"vfirst.m t2, v4\n\t" // Zero found?
"addi %[CPI3_cnt], %[CPI3_cnt], 2\n\t" // Increment CPI3_cnt

"addi %[CPI3_cnt], %[CPI3_cnt], 1\n\t" // Increment CPI3_cnt
"bgez t2, flag%=\n\t"

"addi %[p_x], %[p_x], 2\n\t" // *p_x +=2
"addi t1, t1, -1\n\t" // *t1--
"addi %[CPI4_cnt], %[CPI4_cnt], 2\n\t" // Increment CPI4_cnt

"addi %[CPI3_cnt], %[CPI3_cnt], 1\n\t" // Increment CPI3_cnt
"bnez t1, loop%=\n\t"

"addi %[CPI3_cnt], %[CPI3_cnt], 1\n\t" // Increment CPI3_cnt
"jal exit%=\n\t"

"flag%=: \n\t"

"li %[flag], 1\n\t" // Initialize flag to 0
"addi %[CPI5_cnt], %[CPI5_cnt], 1\n\t" // Increment CPI5_cnt

"exit%=: \n\t"


