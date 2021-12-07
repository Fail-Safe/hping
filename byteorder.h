
#ifndef __BYTEORDER_H
#define __BYTEORDER_H

#if defined(__BYTE_ORDER__)
	#if __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
		#define __BIG_ENDIAN_BITFIELD
	#else
		#define __LITTLE_ENDIAN_BITFIELD
	#endif
#else
	#error Byte order not set
#endif

#endif /* __BYTEORDER_H */
