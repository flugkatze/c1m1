#include "data.h"

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base){
	uint8_t length=1;
	uint32_t r;
	uint32_t abs;
	*ptr = '\0';
	uint8_t *op_ptr = ptr+1;
	if(data < 0){
		abs = (uint32_t)(-data);
	}else {
		abs = (uint32_t)data;
	}
	while(abs>0){
		r = abs % base;
		if (r < 10){
			*op_ptr++ = r + '0';
		}else {
			*op_ptr++ = r - 10 + 'a';
		}
		length++;
		abs/=base;
	}
	if (data < 0){
		*op_ptr='-';
		length++;
	}
	my_reverse(ptr,length);
	return length;
}

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base){
	int32_t num = 0;
	uint8_t character;
	bool is_negative = false;
	if (*ptr =='-'){
		is_negative = true;
		ptr++;
		digits--;
	}
	for (int i = 0; i < digits-1; i++){
		character = *ptr;
		if (character >= 'a' && character <= 'f'){
			num=num*base+(character-'a');
		}else if(character >= '0' && character <= '9'){
			num=num*base+(character-'0');
		}else {
			return 0;
		}
		ptr++;
	}
	if (is_negative){
		num = -num;
	}
	return num;
}
