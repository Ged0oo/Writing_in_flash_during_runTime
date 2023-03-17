extern void fun2(void);
unsigned int x=10;
unsigned short y=0;
unsigned char z;
const unsigned int var = 0x11223344;

void fun1(void)
{
    x++;
    y++;
    z++;
    fun2();
}

