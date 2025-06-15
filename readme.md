# 简易鼠标连点器

## 核心部分

click.c/click.h
函数：

~~~ c
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
~~~

基于win32api封装，simulateKeyPress为模拟按键，simulatemouseclick为模拟鼠标按下

实现原理：[原理](./md/1.md)

## 编译

用的gcc，cmake使用不太清楚

~~~ bash
gcc main.c click.c click.h -lgdi32 -o main.exe
~~~

## 使用

测试使用的时候用main.exe，使用时记得用utf-8打开
实际单独开发用click.c/click.h就可以了

## 开源协议

GPL3.0

## 作者

[lnb0X](https://github.com/lnb0X)
