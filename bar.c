long bar ( long a, long b ) {
    long rax, rdx, rcx;
    // mov %rdi, %rdx
    rdx = a;
    // mov $0x0,%eax
    rax = 0;
    // lea (%rdi,%rdi,4),%rcx
    rcx = a*5;
    // lea (%rdi,%rcx,2),%rcx
    rcx = a + rcx*2;
    // mov %rsi,%rdi
    a = b;
    // shl %0x4,%rdi
    a = a << 4;
    // (%rcx,%rsi,2),%rcx
    rcx = rcx + b*2;
    // sub %rdi,%rcx
    rcx = rcx - a;
    // add $0x1,%rdx
    rcx = rcx + 1;
    // jmp 0x2b
    // 2b: cmp %rsi,%rdx
    // jle 0x24
    while (rdx <= b)  {
        // 24: add $0x1,%rdx
        rdx = rdx + 1;
        // add %rcx,%rax
        rax = rax + rcx;
    }

    return rax;
}
