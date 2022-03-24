// PID: 730530962 
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
	if(bit_select(instruct, OPCODE_START_BIT, OPCODE_END_BIT) == R_TYPE_OPCODE){
		return R_TYPE;
	}else{
		return I_TYPE;
	}
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
	r_instruction *r_components = malloc(sizeof(r_instruction));
	r_components->rs = bit_select(instruct, RS_START_BIT, RS_END_BIT);
	r_components->rt = bit_select(instruct, RT_START_BIT, RT_END_BIT);
	r_components->rd = bit_select(instruct, RD_START_BIT, RD_END_BIT);
	r_components->shamt = bit_select(instruct, SHAMT_START_BIT, SHAMT_END_BIT);
	r_components->func = bit_select(instruct, FUNC_START_BIT, FUNC_END_BIT);
	return r_components;
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
	i_instruction *i_components = malloc(sizeof(i_instruction));
	i_components->opcode = bit_select(instruct, OPCODE_START_BIT, OPCODE_END_BIT);
	i_components->rs = bit_select(instruct, RS_START_BIT, RS_END_BIT);
	i_components->rt = bit_select(instruct, RT_START_BIT, RT_END_BIT);
	i_components->immediate = bit_select(instruct, IMMEDIATE_START_BIT, IMMEDIATE_END_BIT);
	return i_components;
} // end create_i_instruction() function
