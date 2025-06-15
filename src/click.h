# ifndef _SIMULATE_CLICK_H_
# define _SIMULATE_CLICK_H_

# include <windows.h>   // win的api库

/**
 * 函数名:simulateKeyPress
 * 传参:vkCode (类型：WORD)(内容：键盘按键键值)
 */
void simulateKeyPress(WORD vkCode);
/**
 * 函数名:simulatemouseclick
 * 传参:无
 */
void simulatemouseclick(void);

# endif