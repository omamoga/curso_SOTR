//void __main(void)
//{ }

long funcion (long A, long B)
{
long ret=B;
__asm__ __volatile__("movq %0, %%rax":"=m"(A));
__asm__ __volatile__("movq %0, %%rbx":"=m"(B));
__asm__ __volatile__("xchgq %%rax, %0":"=m"(ret));
  return ret;
}

int main()
{
long  a=20,b=40;
return funcion(a,b);
}
