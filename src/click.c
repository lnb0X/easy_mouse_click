# include "click.h"

void simulateKeyPress(WORD vkCode)
{
    // 结构体配置部分
    INPUT input = {0};// 创建一个INPUT结构体实例（结构体变量），用于存储键盘事件信息
    input.type = INPUT_KEYBOARD; // 设置输入类型为键盘事件
    input.ki.wVk = vkCode; // 设置虚拟键码，指定要模拟的按键
    input.ki.dwFlags = 0; // dwFlags设置为0表示按下按键

    // 模拟按键部分
    SendInput(1, &input, sizeof(INPUT)); // 发送键盘按下事件
    // 模拟释放按键
    input.ki.dwFlags = KEYEVENTF_KEYUP; // 设置dwFlags为KEYEVENTF_KEYUP表示释放按键
    SendInput(1, &input, sizeof(INPUT)); // 发送键盘释放事件
}

void simulatemouseclick(void)
{
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0); //点击，相对当前位置不移动
}