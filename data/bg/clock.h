#ifndef CLOCK_MAP_H
#define CLOCK_MAP_H

#define clock_data_length 14
const unsigned char clock_data[] = {
	127, 255, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	255, 255,   0,   0, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	128, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	127, 255, 128, 128, 129, 131, 135, 143, 143, 143, 135, 135, 131, 131, 129, 129, 
	127, 255, 128, 128, 129, 131, 135, 143, 143, 159, 159, 159, 159, 191, 191, 191, 
	191, 191, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 
	191, 191, 191, 191, 158, 190, 156, 156, 136, 152, 128, 128, 128, 128, 128, 128, 
	191, 191, 191, 191, 159, 191, 159, 159, 143, 159, 135, 143, 129, 131, 128, 128, 
	128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,   0,   0, 
	192, 192, 224, 224, 240, 240, 248, 248, 248, 252, 240, 248, 192, 224,   0,   0, 
	254, 254, 254, 254, 252, 254, 254, 252, 248, 252, 240, 248, 192, 224,   0,   0, 
	255, 255,   0,   0, 128, 128, 128, 128, 128, 132, 140, 140, 156, 158, 190, 190, 
	255, 255,   0,   0, 192, 224, 240, 248, 248, 252, 252, 252, 252, 254, 254, 254, 
};

#define clock_tiles_width 2
#define clock_tiles_height 18
#define clock_offset 12
const unsigned char clock_tiles[] = {
	 12,  13, 
	 14,  15, 
	 16,  13, 
	 14,  15, 
	 17,  13, 
	 18,  15, 
	 17,  13, 
	 19,  15, 
	 17,  13, 
	 20,  21, 
	 17,  13, 
	 20,  22, 
	 17,  13, 
	 20,  23, 
	 17,  24, 
	 20,  23, 
	 17,  25, 
	 20,  23, 
};

#endif
