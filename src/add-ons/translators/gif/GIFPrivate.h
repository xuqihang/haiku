#ifndef GIF_PRIVATE_H
#define GIF_PRIVATE_H


#define BLOCK_TERMINATOR		0x00

#define EXTENSION_INTRODUCER	0x21
#define DESCRIPTOR_INTRODUCER	0x2c
#define TERMINATOR_INTRODUCER	0x3b

#define GRAPHIC_CONTROL_LABEL	0xf9
#define COMMENT_EXTENSION_LABEL	0xfe
#define LOOP_BLOCK_LABEL		0xff

#define LZ_MAX_CODE				4095
#define LZ_MAX_BITS				12


#endif	// GIF_PRIVATE_H
