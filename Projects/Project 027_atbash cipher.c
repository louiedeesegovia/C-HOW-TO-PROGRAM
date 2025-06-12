#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Atbash decryption function
void atbash_decrypt(char *str) {
		int i;
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (isupper(ch)) {
            str[i] = 'Z' - (ch - 'A');
        } else if (islower(ch)) {
            str[i] = 'z' - (ch - 'a');
        }
        // Leave punctuation and spaces unchanged
    }
}

int main() {
    char message[] = 
         "Sr! hliib uli gsv ozgv klhg.\n"
         "Rgh yvvm z evib yfhb nlmgs drgs xznkrmt zmw hxsllo zxgrergrvh.\n\n"
         
         "Sld ziv blf? R slkv vevibgsrmt rh tlrmt dvoo uli blf.\n"
         "Dsvm droo dv hvv vzxs lgsvi ztzrm? R nrhh blfi hnrov.\n"
         "R nrhh vevibgsrmt zylfg blf.\n\n"
         
         "Rn hliib uli mlg yvrmt yizev vmlfts gl gvoo blf gsrh rm kvihlm.\n"
         "Rn zuizrw blf nrtsg qfhg hvv nv zh zm liwrmzib tfb, yvxzfhv bvzs,\n"
         "R zn qfhg zm liwrmzib tfb zmw gszg rh gifv.\n\n"
         
         "Hrmxv gsv wzb R ovug vevibgsrmt szh uvog xloliovhh gl nv.\n"
         "R zn gibrmt nb yvhg gl nlev ulidziw, yfg rg szh mlg yvvm gsv hznv.\n"
         "R szev xlnv gl zxxvkg gszg gslhv nlnvmgh ziv mld qfhg nvnlirvh.\n"
         "Hlnvgrnvh, R dlmwvi ru blf hgroo ivnvnyvi gsv hnzoo nlnvmgh dv hszivw,\n"
         "yvxzfhv R xziib gsvn tvmgob vevib wzb.\n\n"
         
         "R wlmg ivzoob hzb nfxs yfg R qfhg dzmg blf gl pmld gsrh...\n\n"
         
         "R zn szkkb gszg blf ziv wlrmt dvoo. Zoo gsv kslglh R hvv lu blf lm gsv kztv nzpv nv hnrov.\n"
         "Pvvk rg fk drgs blfi nrmrhgib dlip blf ziv wlrmt tivzg rg zoo yirmth dzings gl nb svzig.\n"
         "blf szev yvxlnv z kzig lu nb hrovmg kizbvih vevib mrtsg.\n\n"
         
         "Vevm ru R zn qfhg dzgxsrmt uiln zuzi, R droo zodzbh yv illgrmt uli blf.\n"
         "Pvvk hviermt, pvvk tildrmt rm uzrgs, zmw qfhg pvvk hdrnnrmt rm oruv.\n"
         "Mvevi ulitvg gszg hlnvlmv lfg sviv jfrvgob zwnrivh vevibgsrmt blf wl.\n"
         "Vevm ru dv dzop wruuvivmg ilzwh mld, kzig lu nv droo zodzbh hnrov dsvm R gsrmp lu blf.\n\n"
         
         "R wlmg pmld dsvm R droo yv zyov gl klhg ztzrm rg rh yvvm ivzoob yfhb ozgvob.\n"
         "Yfg yvuliv zmbgsrmt vohv, R qfhg dzmg gl ovzev gsrh nvhhztv uli blf.\n"
         "Ml nzggvi dsviv oruv gzpvh fh.\n"
         "Kovzhv gzpv xziv lu blfihvou, vhkvxrzoob lm gsv wzbh gszg uvvo gll nfxs.\n"
         "Fmgro dv nvvg ztzrm... R droo yv hrovmgob drhsrmt blf zoo gsv yvhg.\n\n";

    atbash_decrypt(message); // Decrypt the message before printing
    printf("%s", message);
    return 0;
}

