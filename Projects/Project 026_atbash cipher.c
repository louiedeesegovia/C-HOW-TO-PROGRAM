#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Atbash decryption function
void atbash_decrypt(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
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
        "Wvzi Hlnvlmv\n\n"
        
		"R'n sviv ztzrm, slkrmt blfev\n"
		"ivzw Kilqvxg 17 nb nvhhztv\n"
		"qfhg drhsrmt uli vevm gsv\n" 
		"hnzoovhg hrtm gszg blf'ev hvvm\n"
		"rg. Sld ziv blf? R slkv blf'iv\n"
		"wlrmt lpzb. Kovzhv, ovg nv\n" 
		"pmld ru gsrh ivzxsvh blf.\n\n"

		"R xzm'g svok yfg uvvo orpv R'ev\n"
		"yvvm hgifxp yb hlnvgsrmt\n"
		"wvvkvi gszm R vevi vckvxgvw. R\n" 
		"wlm'g ufoob fmwvihgzmw gsrh\n" 
		"uvvormt bvg, yfg rg'h hgilmt, zmw\n"
		"rg'h ivzo. Wl blf uvvo rg gll?\n" 
		"Xlfow rg yv nfgfzo?\n\n"

		"Rg yivzph nb svzig gszg dv'iv\n" 
		"mlg gltvgsvi zmbnliv. R urmw\n" 
		"nbhvou drhsrmt, levi zmw levi\n" 
		"ztzrm, gszg R xlfow gfim yzxp\n"
		"grnv. Ru R xlfow ivhvg\n" 
		"vevibgsrmt R dlfow tl yzxp gl\n" 
		"gszg evib urihg nlnvmg R hzd\n" 
		"blf. Gsv urihg grnv R xzftsg\n" 
		"blfi hnrov, gsv urihg tozmxv\n" 
		"rmgl blfi vbvh, gsv urihg grnv\n" 
		"blfi hxvmg ormtvivw mvzi nv.\n" 
		"Gsv urihg glfxs, vevm ru rg dzh\n" 
		"qfhg z hrnkov yifhs lu blfi\n" 
		"zin. Gsv urihg grnv blf\n" 
		"nvhhztvw nv, hzrw nb mznv R\n" 
		"givzhfiv zoo lu rg.\n"
		"R nrhh zoo gsv ''urihgh'' dv\n" 
		"hszivw, zmw R'w trev zmbgsrmt\n" 
		"gl vckvirvmxv gsvn ztzrm.\n" 
		"Nzbyv gsrh rh olev. Li nzbyv\n" 
		"rg'h gsv nvnlib lu dszg xlfow\n" 
		"szev yvvm. Vrgsvi dzb, blf ovug\n" 
		"hlnvgsrmt rm nv gszg dlm’g\n" 
		"tl zdzb.\n\n"

		"Drgs zoo nb svzig,\n"
		"Olfrv Wvv Hvtlerz\n";

    atbash_decrypt(message); // Decrypt the message before printing
    printf("%s", message);
    return 0;
}

