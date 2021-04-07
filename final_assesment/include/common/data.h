/**
 * @file data.h
 * @brief Header file for data.c. Performs simple data manipulation
 * 
 * @author vtotient
 * @date April 22, 2019
 */    

#ifndef __DATA_H__
#define __DATA_H__

#define MAX_STR_SIZE 2147483647 // 2^31

/**
 * @brief Convert std int into ASCII string
 *
 * String is NULL terminated.
 *
 * @param data Data to be converted
 * @param ptr Pointer to converted string
 * @param base Base 2-16 supported
 *
 * @return Length of converted data including NULL terminator
 */
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);


#endif
