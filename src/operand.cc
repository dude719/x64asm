#include "src/operand.h"

#include "src/op_set.h"

namespace x64asm {

Operand::~Operand() {
	// Does nothing.
}	

OpType Operand::type() const {
	return OpType::OPERAND;
}

bool Operand::check() const {
	return true;
}

void Operand::insert_in(OpSet& os, bool promote) const {
	assert(false);
}

AtomicOperand::~AtomicOperand() {
	// Does nothing.
}	

OpType AtomicOperand::type() const {
	return OpType::ATOMIC_OPERAND;
}

CompoundOperand::~CompoundOperand() {
	// Does nothing.
}	

OpType CompoundOperand::type() const {
	return OpType::COMPOUND_OPERAND;
}

} // namespace x64asm