#include "bit_utils.h"

char *itob (int num, int size) {
    char *bitstring = malloc(size+1);
    for (int i=0; i<size; i++) {
        bitstring[i] = (num & (0x1 << (size-i-1))) ? '1' : '0';
    }
    return bitstring;
}

// Returns num after mask has been applied.
int mask_bits(int num, int mask) {
    return num & mask;
}

// Returns num after bits have been set.
int set_bits(int num, int bits) {
    return num | bits;
}

// Returns num after bits have been inversed.
int inverse_bits(int num, int bits) {
    return num ^ bits;
}

// returns the bits in the number from startbit to
// end bit (including startbit and endbit). The
// bits are returned in the lowest order positions
// of the result
int bit_select(int num, int startbit, int endbit) {
    unsigned int topmask = 0xffffffff;
    return (num >> endbit) & (~(topmask << (startbit-endbit+1)));
}
