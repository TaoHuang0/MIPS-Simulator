// PID: 
// I pledge the COMP 211 honor code.

#include <stdint.h>
#include <stdlib.h>

#include "bit_utils.h"
#include "instructions.h"

// ------------------------------------
// Function implementation that determines whether you are
// working with an R type or I type instruction
//
// Arguments:	an unsigned 32-bit integer
//
// Return:      instruction_type: R_TYPE or I_TYPE (see instructions.h)
//
instruction_type get_type_of_instruction(uint32_t instruct){

	// Your code here

} // end get_type_of_instruction() function

// ------------------------------------
// Function implementation that creates an R-type instruction
// based on the integer given (see instructions.h)
//
// Arguments:	an unsigned 32-bit integer
//
// Return:      a pointer to an r_instruction (see instructions.h).
//              This consists of the following structure members
//              you will have to set: rs, rt, rd, shamt, func
//
r_instruction *create_r_instruction(uint32_t instruct){

	// Your code here

} // end create_r_instruction() function

// ------------------------------------
// Function implementation that creates an I-type instruction
// based on the integer given (see instructions.h)
//
// Arguments:	an unsigned 32-bit integer
//
// Return:      a pointer to an i_instruction (see instructions.h).
//              This consists of the following structure members
//              you will have to set: opcode, rs, rt, immediate
//
i_instruction *create_i_instruction(uint32_t instruct){

	// Your code here

} // end create_i_instruction() function
