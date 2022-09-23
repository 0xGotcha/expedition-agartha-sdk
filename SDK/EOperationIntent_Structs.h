#pragma once

/**
 * Name: Agartha
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * UserDefinedEnum EOperationIntent.EOperationIntent
	 */
	enum class EOperationIntent : uint8_t
	{
		NewEnumerator0 = 0,
		NewEnumerator2 = 1,
		NewEnumerator4 = 2,
		NewEnumerator6 = 3,
		NewEnumerator8 = 4,
		MAX            = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
