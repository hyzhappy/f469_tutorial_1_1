/*����һֻLED�ư�
 *
 * */

#include <stdio.h>
#include <stdlib.h>
#include "diag/Trace.h"
#include "stm32f4xx_hal.h"
int
main(int argc, char* argv[])
{
	//����GPIOG��ʱ��
	__HAL_RCC_GPIOG_CLK_ENABLE();

	//����һ��GPIO��ʼ���ṹ�������Ȼ��ʼ�������������
	GPIO_InitTypeDef GPIO_InitStructure;

	//Ҫ���õ�GPIO����Ϊ��6����
	GPIO_InitStructure.Pin = GPIO_PIN_6;
	//GPIO���ģʽΪ�������
	GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
	//GPIO����ģʽ���ڽ��������裩
	GPIO_InitStructure.Pull = GPIO_PULLUP;
	//GPIO���ٶ�Ϊ���٣�����ٶȣ�
	GPIO_InitStructure.Speed = GPIO_SPEED_FAST;
	//������Ӧ�õ�GPIOG��
	HAL_GPIO_Init(GPIOG, &GPIO_InitStructure);

	//���˾����ú���G6���GPIO�����ˣ�Ҳ������GPIOG��ʱ�ӣ�
	//�������ɲ���LED����<(�����)>

	//��G6���Ŷ�����Ϊ�͵�ƽ�ɣ�LED�Ͷ�����
	HAL_GPIO_WritePin(GPIOG, GPIO_PIN_6, GPIO_PIN_RESET);

	while (1)
    {

    }
}
