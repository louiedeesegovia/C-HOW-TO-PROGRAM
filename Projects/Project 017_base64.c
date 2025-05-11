#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#ifdef _WIN32
#include <windows.h>
#define sleep(x) Sleep(1000 * (x))
#endif

char b64_table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

void base64_decode(const char *input, char *output) {
    int val = 0, valb = -8;
    int len = strlen(input);
    int pos = 0;
    int i;
    
    for (i = 0; i < len; i++) {
        char *p = strchr(b64_table, input[i]);
        if (!p) continue;
        val = (val << 6) + (p - b64_table);
        valb += 6;
        if (valb >= 0) {
            output[pos++] = (char)((val >> valb) & 0xFF);
            valb -= 8;
        }
    }
    output[pos] = '\0';
}

int main() {
	int i;
    const char *encoded[] = {
        "SGks",
        "SWYgeW91J3JlIHJlYWRpbmcgdGhpcywgdGhlbiB0aGlzIG1lc3NhZ2UgaXMgZm9yIHlvdS4=",
        "Rmlyc3Qgb2YgYWxsLCBJIHdhbnQgdG8gY29uZ3JhdHVsYXRlIHlvdSwgbm90IGp1c3QgZm9yIGJlaW5nIGN1cmlvdXMgZW5vdWdoIHRvIHJ1biB0aGlzIHByb2dyYW0sIGJ1dCBmb3Igc2ltcGx5IGJlaW5nIHlvdS4=",
        "SSBob3BlIG9uZSBkYXkgeW91IHJlYWxpemUgdGhhdCBJIGhhdmUgZmVlbGluZ3MgZm9yIHlvdS4uLiBtYXliZSB5b3UgYWxyZWFkeSBkby4=",
        "RGlkIHlvdSBrbm93PyBIYWxmIG9mIHRoZSBzb25ncyBJIHBvc3Qgb24gbXkgbm90ZXMgYXJlIG1lYW50IGZvciB5b3Uu",
        "VGhlIG90aGVyIGhhbGY/IEkganVzdCBsaWtlIHRoZW0sIGJ1dCBldmVuIHRoZW4sIHlvdSBzdGlsbCBjcm9zcyBteSBtaW5kLg==",
        "SeKAmW0gb2theSB3aXRoIGp1c3QgYmVpbmcgZnJpZW5kcywgZXZlbiBmcm9tIGEgZGlzdGFuY2Uu",
        "QnV0IGRlZXAgZG93biwgSSBzdGlsbCBob3BlIHRoYXQgc29tZWRheSBvdXIgcGF0aHMgd2lsbCBjcm9zcyBhZ2Fpbi4=",
        "SWYgdGhleSBkbywgSSBwcm9taXNlIEkgd29uJ3Qgc3RvcCBsb29raW5nIGF0IHlvdS4=",
        "KE9rYXksIG1heWJlIHRoYXQgc291bmRzIGEgbGl0dGxlIGNyZWVweSwgaGVoZSwgYnV0IGl04oCZcyB0cnVlLik=",
        "WW91J3JlIHNvIGJlYXV0aWZ1bC4=",
        "SG93IGFyZSB5b3Ugbm93PyBJIHdvbmRlciB3aGF0IHlvdSdyZSBkb2luZyBhdCB0aGlzIHZlcnkgbW9tZW50Lg==",
        "QXJlIHlvdSBzbWlsaW5nPyBBcmUgeW91IGNoYXNpbmcgZHJlYW1zPw==",
        "QXJlIHlvdSBzdXJyb3VuZGVkIGJ5IHBlb3BsZSB3aG8gbWFrZSB5b3VyIGhlYXJ0IGZlZWwgbGlnaHQ/",
        "VGhlcmUgYXJlIGRheXMgd2hlbiBJIGltYWdpbmUgdXMgYnVtcGluZyBpbnRvIGVhY2ggb3RoZXIgYWdhaW4s",
        "bWF5YmUgaW4gY2h1cmNoLCBtYXliZSBpbiBtYWxsLCBvciBtYXliZSBqdXN0IGluIHNvbWUgcmFuZG9tLCBiZWF1dGlmdWwgYWNjaWRlbnQu",
        "QW5kIHdoZW4gdGhhdCBkYXkgY29tZXMsIEkgaG9wZSBJIGhhdmUgdGhlIGNvdXJhZ2UgdG8gc2F5IGV2ZXJ5dGhpbmcgSeKAmW0gd3JpdGluZyBub3cuLi4gb3V0IGxvdWQu",
        "VW50aWwgdGhlbiwgSeKAmWxsIGtlZXAgY2hlZXJpbmcgZm9yIHlvdSBxdWlldGx5IGZyb20gYWZhciw=",
        "dGhyb3VnaCBub3Rlcywgc29uZ3MsIGFuZCBsaXR0bGUgc2lnbnMgSSBob3BlIHlvdSBub3RpY2Uu",
        "",
        "QnV0IEkgaGF2ZSBzb21ldGhpbmcgdG8gdGVsbCB5b3Uu",
        "V2hlbiBJIGdyYWR1YXRlLCBJIG1pZ2h0IG5vdCBzdGF5IGhlcmUgaW4gQnV0dWFuIENpdHku",
        "SSBtaWdodCBlbmQgdXAgZmFyIGF3YXku",
        "TWF5YmUgSeKAmWxsIGdvIGJhY2sgdG8gbXkgbW90aGVy4oCZcyBob21ldG93biwgTGFtYnVzYW4sIENlYnUu",
        "T3IgbWF5YmUgSeKAmWxsIGZpbmQgd29yayBpbiBEYXZhbyBDaXR5Lg==",
        "SSBkb27igJl0IGtub3cgZm9yIHN1cmUsIGJ1dCB3aG8ga25vd3M/IE1heWJlIHdl4oCZbGwgbWVldCBhZ2Fpbi4=",
        "",
        "VGFrZSBjYXJlIGFsd2F5cy4=",
        "U2VlIHlvdSBpbiB0aGUgZnV0dXJlLg==",
        "",
        "V2l0aCBsb3ZlLA==",
        "TG91aWUgRGVlIFNlZ292aWE="
    };

    int lines = sizeof(encoded) / sizeof(encoded[0]);
    char decoded[1024];

    for (i = 0; i < lines; i++) {
        base64_decode(encoded[i], decoded);
        printf("%s\n", decoded);
        sleep(2);
    }

    return 0;
}

