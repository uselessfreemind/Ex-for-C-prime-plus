#include "E2.H"

int main(int argc,char ** argv)
{
    int argv_dec1=0,argv_dec2=0;
    argv_dec1=StrBin2Int(argv[1]);
    argv_dec2=StrBin2Int(argv[2]);
    size_t argv1_len=strlen(argv[1]);
    size_t argv2_len=strlen(argv[2]);

    printf("%d,%d's not operation result is %s and %s\n",argv_dec1,argv_dec2,show_bin(~argv_dec1),show_bin(~argv_dec2));
    printf("%d,%d's OR operation result is %s and %s\n",argv_dec1,argv_dec2,show_bin(0x10|argv_dec1),show_bin(0x20|argv_dec2));
    printf("%d,%d's AND operation result is %s and %s\n",argv_dec1,argv_dec2,show_bin(0x10&argv_dec1),show_bin(0x20&argv_dec2));
    printf("%d,%d's XOR operation result is %s and %s\n",argv_dec1,argv_dec2,show_bin(0x10^argv_dec1),show_bin(0x20^argv_dec2));
    return 0;
}
