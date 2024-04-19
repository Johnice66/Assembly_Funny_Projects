#include <stdio.h>
#include <stdlib.h>

void __x86.get_pc_thunk.bx() {
    __asm__("mov (%esp),%ebx");
    __asm__("ret");
}

void deregister_tm_clones() {
    __x86.get_pc_thunk.dx();
    __asm__("add $0x2e93,%edx");
    __asm__("lea 0x6c(%edx),%ecx");
    __asm__("lea 0x6c(%edx),%eax");
    if (%ecx != %eax) {
        __asm__("mov 0x30(%edx),%eax");
        if (%eax != 0) {
            __asm__("push %ebp");
            __asm__("mov %esp,%ebp");
            __asm__("sub $0x14,%esp");
            __asm__("push %ecx");
            __asm__("call *%eax");
            __asm__("add $0x10,%esp");
            __asm__("leave");
            __asm__("ret");
        }
    }
    __asm__("ret");
}

void register_tm_clones() {
    __x86.get_pc_thunk.dx();
    __asm__("add $0x2e53,%edx");
    __asm__("push %ebp");
    __asm__("mov %esp,%ebp");
    __asm__("push %ebx");
    __asm__("lea 0x6c(%edx),%ecx");
    __asm__("lea 0x6c(%edx),%eax");
    __asm__("sub $0x4,%esp");
    __asm__("sub %ecx,%eax");
    __asm__("mov %eax,%ebx");
    __asm__("shr $0x1f,%eax");
    __asm__("sar $0x2,%ebx");
    __asm__("add %ebx,%eax");
    __asm__("sar %eax");
    if (%eax != 0) {
        __asm__("mov 0x44(%edx),%edx");
        if (%edx != 0) {
            __asm__("sub $0x8,%esp");
            __asm__("push %eax");
            __asm__("push %ecx");
            __asm__("call *%edx");
            __asm__("add $0x10,%esp");
        }
    }
    __asm__("mov -0x4(%ebp),%ebx");
    __asm__("leave");
    __asm__("ret");
}

void __do_global_dtors_aux() {
    __x86.get_pc_thunk.bx();
    __asm__("add $0x2dfb,%ebx");
    __asm__("sub $0x4,%esp");
    __asm__("cmpb $0x0,0x6c(%ebx)");
    if (%eax == 0) {
        __asm__("mov 0x34(%ebx),%eax");
        if (%eax != 0) {
            __asm__("sub $0xc,%esp");
            __asm__("push 0x4c(%ebx)");
            __asm__("call 0x10d0");
            __asm__("add $0x10,%esp");
        }
        deregister_tm_clones();
        __asm__("movb $0x1,0x6c(%ebx)");
    }
    __asm__("ret");
}

void frame_dummy() {
    __x86.get_pc_thunk.bx();
    __asm__("jmp 0x1160");
}

void __stack_chk_fail_local() {
    __x86.get_pc_thunk.bx();
    __asm__("sub $0x8,%esp");
    __asm__("call 0x1070");
}

void fail() {
    __x86.get_pc_thunk.bx();
    __asm__("add $0x2da1,%ebx");
    __asm__("push $0x1");
    __asm__("call 0x1060");
    __asm__("lea -0x1fb0(%ebx),%esi");
    __asm__("mov %esi,(%esp)");
    __asm__("call 0x1080");
    __asm__("lea -0x1f88(%ebx),%eax");
    __asm__("mov %eax,(%esp)");
    __asm__("call 0x1080");
    __asm__("mov %esi,(%esp)");
    __asm__("call 0x1080");
    __asm__("movl $0x1,(%esp)");
    __asm__("call 0x1090");
}

void success() {
    __x86.get_pc_thunk.bx();
    __asm__("add $0x2d5a,%ebx");
    __asm__("push $0x1");
    __asm__("call 0x1060");
    __asm__("lea -0x1f60(%ebx),%esi");
    __asm__("mov %esi,(%esp)");
    __asm__("call 0x1080");
    __asm__("lea -0x1f3c(%ebx),%eax");
    __asm__("mov %eax,(%esp)");
    __asm__("call 0x1080");
    __asm__("mov %esi,(%esp)");
    __asm__("call 0x1080");
    __asm__("add $0x14,%esp");
    __asm__("pop %ebx");
    __asm__("pop %esi");
    __asm__("ret");
}

int main(int argc, char *argv[]) {
    __asm__("lea 0x4(%esp),%ecx");
    __asm__("and $0xfffffff0,%esp");
    __asm__("push -0x4(%ecx)");
    __asm__("push %ebp");
    __asm__("mov %esp,%ebp");
    __asm__("push %edi");
    __asm__("push %esi");
    __asm__("push %ebx");
    __asm__("push %ecx");
    __asm__("sub $0x228,%esp");
    __x86.get_pc_thunk.bx();
    __asm__("add $0x2d07,%ebx");
    __asm__("mov 0x4(%ecx),%edx");
    __asm__("mov %gs:0x14,%eax");
    __asm__("mov %eax,-0x1c(%ebp)");
    __asm__("xor %eax,%eax");
    __asm__("mov 0x3c(%ebx),%eax");
    __asm__("mov (%eax),%edi");
    __asm__("cmpl $0x2,(%ecx)");
    if (%eax == 0) {
        __asm__("mov $0x1,%esi");
        __asm__("mov 0x3c(%ebx),%eax");
        __asm__("mov %eax,-0x22c(%ebp)");
        __asm__("lea -0x1f16(%ebx),%eax");
        __asm__("mov %eax,-0x230(%ebp)");
        __asm__("cmp $0x6,%esi");
        if (%eax == 0) {
            __asm__("mov -0x22c(%ebp),%eax");
            __asm__("cmp (%eax),%edi");
            if (%eax != 0) {
                __asm__("sub $0x4,%esp");
                __asm__("push %edi");
                __asm__("push $0x200");
                __asm__("lea -0x21c(%ebp),%eax");
                __asm__("push %eax");
                __asm__("call 0x1050");
                __asm__("add $0x10,%esp");
                __asm__("test %eax,%eax");
                if (%eax != 0) {
                    __asm__("sub $0x4,%esp");
                    __asm__("push $0xa");
                    __asm__("push $0x0");
                    __asm__("lea -0x21c(%ebp),%eax");
                    __asm__("push %eax");
                    __asm__("call 0x10c0");
                    __asm__("add $0x10,%esp");
                    __asm__("add $0x1,%esi");
                    __asm__("add $0x10,%esp");
                    __asm__("cmp %eax,0x50(%ebx,%esi,4)");
                    if (%eax != 0) {
                        fail();
                    }
                }
            }
        }
        __asm__("sub $0x8,%esp");
        __asm__("lea -0x1f18(%ebx),%eax");
        __asm__("push %eax");
        __asm__("push 0x4(%edx)");
        __asm__("call 0x10a0");
        __asm__("mov %eax,%edi");
        __asm__("add $0x10,%esp");
        __asm__("jmp 0x12d2");
    } else {
        __asm__("sub $0x4,%esp");
        __asm__("push %esi");
        __asm__("push -0x230(%ebp)");
        __asm__("push $0x1");
        __asm__("call 0x10b0");
        __asm__("add $0x10,%esp");
        __asm__("jmp 0x12fe");
    }
    __asm__("add $0x2d5a,%ebx");
    __asm__("mov -0x1c(%ebp),%eax");
    __asm__("sub %gs:0x14,%eax");
    __asm__("jne 0x1395");
    __asm__("mov $0x0,%eax");
    __asm__("lea -0x10(%ebp),%esp");
    __asm__("pop %ecx");
    __asm__("pop %ebx");
    __asm__("pop %esi");
    __asm__("pop %edi");
    __asm__("pop %ebp");
    __asm__("lea -0x4(%ecx),%esp");
    __asm__("ret");
    __asm__("call 0x13a0");
    __asm__("xchg %ax,%ax");
    __asm__("xchg %ax,%ax");
    __asm__("xchg %ax,%ax");
    __asm__("ret");
}

void _fini() {
    __x86.get_pc_thunk.bx();
    __asm__("sub $0x8,%esp");
    __asm__("add $0x2bf3,%ebx");
    __asm__("add $0x8,%esp");
    __asm__("pop %ebx");
    __asm__("ret");
}


