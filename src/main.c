# include <stdio.h>     // 标准输入输出库
# include "click.h"

int main(void)
{
    long int click_times = 0; // 做长一点，防止用户输入过长导致的内存泄露(简易方案)，后面有机会会更新好一点的方法

    // 用户输入
    printf("请输入鼠标点击次数:");
    scanf("%ld", &click_times);
    printf("请在3s内移动到需要点击的地方\n");
    Sleep(3000);    //给用户时间移动鼠标到指定位置

    for(; click_times > 0; click_times--)
    {
        simulatemouseclick(); //鼠标点击，相对当前位置不移动
    }

    printf("结束");

    return 0;
}