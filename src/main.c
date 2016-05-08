/*点亮一只LED灯吧
 *
 * */

#include <stdio.h>
#include <stdlib.h>
#include "diag/Trace.h"
#include "stm32f4xx_hal.h"
int
main(int argc, char* argv[])
{
	//开启GPIOG的时钟
	__HAL_RCC_GPIOG_CLK_ENABLE();

	//声明一个GPIO初始化结构体变量，然后开始给这个变量配置
	GPIO_InitTypeDef GPIO_InitStructure;

	//要配置的GPIO引脚为第6引脚
	GPIO_InitStructure.Pin = GPIO_PIN_6;
	//GPIO输出模式为推挽输出
	GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
	//GPIO上拉模式（内接上拉电阻）
	GPIO_InitStructure.Pull = GPIO_PULLUP;
	//GPIO的速度为快速（最高速度）
	GPIO_InitStructure.Speed = GPIO_SPEED_FAST;
	//将配置应用到GPIOG中
	HAL_GPIO_Init(GPIOG, &GPIO_InitStructure);

	//至此就配置好了G6这个GPIO引脚了，也开启了GPIOG的时钟，
	//可以自由操纵LED了呢<(￣︶￣)>

	//把G6引脚都设置为低电平吧，LED就都亮了
	HAL_GPIO_WritePin(GPIOG, GPIO_PIN_6, GPIO_PIN_RESET);

	while (1)
    {

    }
}
