"addi t2,zero,16\n\t"
"loop1:\n\t"
"lw t0,0(%[h])\n\t"
"lw t1,0(%[x])\n\t"
"add t0,t0,t1\n\t"
"sw t0,0(%[y])\n\t"
"addi %[h],%[h],4\n\t"
"addi %[x],%[x],4\n\t"
"addi %[y],%[y],4\n\t"
"addi t2,t2,-1\n\t"
"bne zero,t2,loop1\n\t"

/*
"li t2,16\n\t"
"addi %[arith_cnt], %[arith_cnt], 1\n\t"
"vvaddint32:\n\t"
"addi %[others_cnt], %[others_cnt], 1\n\t"
 "vsetvli t0, t2, e32, ta, ma\n\t" // Set vector length based on 32-bit vectors
"addi %[others_cnt], %[others_cnt], 1\n\t"
 "vle32.v v0, (%[h])\n\t"
"addi %[lw_cnt], %[lw_cnt], 1\n\t"
 "sub t2, t2, t0\n\t"// Decrement number done
"addi %[arith_cnt], %[arith_cnt], 1\n\t"
 "slli t0, t0, 2\n\t"// Multiply number done by 4 bytes
"addi %[arith_cnt], %[arith_cnt], 1\n\t"
 "add %[h], %[h], t0\n\t" // Bump pointer
"addi %[arith_cnt], %[arith_cnt], 1\n\t"
 "vle32.v v1, (%[x])\n\t" //Get second vector
"addi %[lw_cnt], %[lw_cnt], 1\n\t"
"add %[x], %[x], t0\n\t" // Bump pointer
"addi %[arith_cnt], %[arith_cnt], 1\n\t"
 "vadd.vv v2, v0, v1\n\t" // Sum vectors
"addi %[arith_cnt], %[arith_cnt], 1\n\t"
 "vse32.v v2, (%[y])\n\t" // Store result
"addi %[sw_cnt], %[sw_cnt], 1\n\t"
 "add %[x], %[x], t0\n\t" // Bump pointer
"addi %[arith_cnt], %[arith_cnt], 1\n\t"
 "bnez t2, vvaddint32\n\t" // Loop back
"addi %[arith_cnt], %[arith_cnt], 1\n\t"
*/

