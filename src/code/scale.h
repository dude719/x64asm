#ifndef X64_SRC_CODE_SCALE_H
#define X64_SRC_CODE_SCALE_H 

#include <vector>

#include "src/code/operand.h"

namespace x64 {

/** A scaling constant for use in forming addresses.
*/
class Scale {
	public:
		inline Scale() 
				: s_(4) { 
		}

		inline Scale(Operand s) 
				: s_(s) { 
		}

		inline operator Operand() const {
			return s_;
		}

		inline bool is_null() const {
			return s_ >= 4;
		}

		typedef const std::vector<Scale>::const_iterator iterator;

		static iterator begin() {
			return domain_.begin();
		}

		static iterator end() {
			return domain_.end();
		}

	private:
		Operand s_;

		static const std::vector<Scale> domain_;
};

extern const Scale times_1;
extern const Scale times_2;
extern const Scale times_4;
extern const Scale times_8;
extern const Scale scale_null;

} // namespace x64

#endif
