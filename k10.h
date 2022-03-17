
#define DEF_SU(x) typedef union{\
unsigned char b[(1<<x)];\
signed char c[(1<<x)];\
} u_##x;
DEF_SU(0);

#define DEF_MU(x) typedef union{\
unsigned char b[(1<<x)];\
signed char c[(1<<x)];\
unsigned short us[(1<<x)/2];\
signed short s[(1<<x)/2];\
} u_##x;
DEF_MU(1);

#define DEF_U(x) typedef union{\
unsigned char b[(1<<x)];\
signed char c[(1<<x)];\
unsigned short us[(1<<x)/2];\
signed short s[(1<<x)/2];\
unsigned int ui[(1<<x)/4];\
signed int i[(1<<x)/4];\
} u_##x;
DEF_U(2);
DEF_U(3);

DEF_U(4);
DEF_U(5);
DEF_U(6);
DEF_U(7);
DEF_U(8);
DEF_U(9);
DEF_U(10);
DEF_U(11);
DEF_U(12);
DEF_U(13);
DEF_U(14);
DEF_U(15);
DEF_U(16);
DEF_U(17);
DEF_U(18);
DEF_U(19);
DEF_U(20);
DEF_U(21);
DEF_U(22);
DEF_U(23);
DEF_U(24);
DEF_U(25);
DEF_U(26);
DEF_U(27);
DEF_U(28);
DEF_U(29);
DEF_U(30);
