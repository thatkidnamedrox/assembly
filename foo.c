long foo (long x, long y) {
    long rax, rcx, rdx;
    // lea (%rdi,%rdi,2),%rax
    rax = x*3;
    // lea (%rdi,%rax,4),%rax
    rax = x + rax*4;
    // shl $0x2, %rax
    rax = rax << 2;
    // lea (%rsi,%rsi,2),%rcx
    rcx = y*3;
    // mov %rcx, %rdx
    rdx = rcx;
    // shl $0x5,%rdx
    rdx = rdx << 5;
    // sub %rcx,%rdx
    rdx = rdx - rcx;
    // add %rdx,%rax
    rax = rax + rdx;
    // sub %rdi, %rsi
    y = y - x;
    // lea (%rsi,%rsi,2),%rdx
    rdx = y*3;
    // shl $0x5,%rdx
    rdx = rdx << 5;
    // sub %rsi,%rdx
    rdx = rdx - y;
    // add %rdx, %rax
    rax = rax + rdx;

    return rax;
}
