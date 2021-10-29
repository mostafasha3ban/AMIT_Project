
#ifndef LCD_CFG_H_
#define LCD_CFG_H_

/********_SELECT_THE_LCD_MODE_********/
/*_OPTIONS_1_-> [_4_BIT_MODE] ********/
/*_OPTIONS_2_-> [_8_BIT_MODE] ********/
#define LCD_MODE         _4_BIT_MODE
/*************************************/


#define LCD_EN_PIN       PA0
#define LCD_RS_PIN       PA2
#define LCD_RW_PIN       PA1

#define LCD_D0_PIN       PA0      /*_THIS_PART_NEEDED_ONLY_IN_8_BIT_MODE*/
#define LCD_D1_PIN       PA1      /*_THIS_PART_NEEDED_ONLY_IN_8_BIT_MODE*/
#define LCD_D2_PIN       PA2      /*_THIS_PART_NEEDED_ONLY_IN_8_BIT_MODE*/
#define LCD_D3_PIN       PA3      /*_THIS_PART_NEEDED_ONLY_IN_8_BIT_MODE*/

#define LCD_D4_PIN       PB4
#define LCD_D5_PIN       PB5
#define LCD_D6_PIN       PB6
#define LCD_D7_PIN       PB7

#define LCD_DATA_PORT     B

#endif /* LCD_CFG_H_ */
