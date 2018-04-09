#include "stm8s.h"

void step2(void)
{
  /* init */
  GPIO_Init(GPIOA, GPIO_PIN_3, GPIO_MODE_OUT_PP_LOW_FAST);
  GPIO_Init(GPIOC, GPIO_PIN_3, GPIO_MODE_OUT_PP_LOW_FAST);
  GPIO_Init(GPIOD, GPIO_PIN_0, GPIO_MODE_OUT_PP_LOW_FAST);
  GPIO_Init(GPIOD, GPIO_PIN_3, GPIO_MODE_OUT_PP_LOW_FAST);
  GPIO_Init(GPIOE, GPIO_PIN_3, GPIO_MODE_OUT_PP_LOW_FAST);
  
  /* run */
  for(;;)
  {
    GPIO_WriteReverse(GPIOA,GPIO_PIN_3);
    GPIO_WriteReverse(GPIOC,GPIO_PIN_3);
    GPIO_WriteReverse(GPIOD,GPIO_PIN_0);
    GPIO_WriteReverse(GPIOD,GPIO_PIN_3);
    GPIO_WriteReverse(GPIOE,GPIO_PIN_3);
  }
}

void main(void)
{
  step2();
}


#ifdef USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *   where the assert_param error has occurred.
  * @param file: pointer to the source file name
  * @param line: assert_param error line source number
  * @retval : None
  */
void assert_failed(u8* file, u32 line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif