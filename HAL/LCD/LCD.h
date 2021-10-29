
#ifndef LCD_H_
#define LCD_H_

#define _4_BIT_MODE         0
#define _8_BIT_MODE         1

void LCD_INIT      (void);
void LCD_WRITE_CMD (u8);
void LCD_WRITE_CHR (u8);
void LCD_WRITE_STR (u8*);
void LCD_WRITE_INT (u32);
void LCD_GO_TO     (u8,u8);
void LCD_CLR       (void);

#endif /* LCD_H_ */
