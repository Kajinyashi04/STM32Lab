#include "main.h"
#include "stm32f1xx.h"

void SystemClock_Config(void);
static void MX_GPIO_Init(void);
void display7SEG(int num);
int16_t t;
int main(void)
{

  HAL_Init();

  SystemClock_Config();

  MX_GPIO_Init();

  int num = 10;
   while (1){
   if(num == 0) ;
   display7SEG(num--);
   HAL_Delay(1000);
   if(t>=0 && t<3){
   		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
   		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
   		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_2, GPIO_PIN_RESET);
   		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
   		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_3, GPIO_PIN_SET);
   		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_9, GPIO_PIN_SET);
   		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
   		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_10, GPIO_PIN_SET);
   		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
   		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_11, GPIO_PIN_SET);
   		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
   		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_12, GPIO_PIN_SET);
   	 }
   	 if(t>=3 && t<5){
   	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
   	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
   	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_2, GPIO_PIN_RESET);
   	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
   	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_3, GPIO_PIN_SET);
   	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_9, GPIO_PIN_SET);
   	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
   	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_10, GPIO_PIN_SET);
   	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
   	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_11, GPIO_PIN_SET);
   	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
   	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);
   	 	 }
   	 if(t>=5 && t<8){
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_3, GPIO_PIN_SET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_9, GPIO_PIN_SET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_10, GPIO_PIN_RESET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_11, GPIO_PIN_RESET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_12, GPIO_PIN_SET);
   	 	 	 }
   	 if(t>=8 && t<10){
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_3, GPIO_PIN_RESET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_9, GPIO_PIN_RESET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_10, GPIO_PIN_SET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_11, GPIO_PIN_RESET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
   	 	 		 HAL_GPIO_WritePin (GPIOA, GPIO_PIN_12, GPIO_PIN_SET);
   	 	 	 }
   	 HAL_Delay(1000);
   	 t = t+1;
   	 if(t>=10) t = 0;
   }


}


void display7SEG(int num) {
	if(num > 9) num = 9;
	switch(num) {
	case 9:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_SET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_RESET);
		break;
	case 5:
	HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_RESET);
	break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_SET);
		break;
	case 0:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_SET);
		break;
	}}
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};


  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}


static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};


  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();


  HAL_GPIO_WritePin(GPIOA, PA1_Pin|PA2_Pin|PA3_Pin|PA4_Pin
                          |PA5_Pin|PA6_Pin|PA7_Pin|PA8_Pin
                          |PA9_Pin|PA10_Pin|PA11_Pin|PA12_Pin
                          |PA13_Pin|PA14_Pin|PA15_Pin, GPIO_PIN_RESET);


  HAL_GPIO_WritePin(GPIOB, PB0_Pin|PB1_Pin|PB2_Pin|PB15_Pin
                          |PB3_Pin|PB4_Pin|PB5_Pin|PB6_Pin, GPIO_PIN_RESET);


  GPIO_InitStruct.Pin = PA1_Pin|PA2_Pin|PA3_Pin|PA4_Pin
                          |PA5_Pin|PA6_Pin|PA7_Pin|PA8_Pin
                          |PA9_Pin|PA10_Pin|PA11_Pin|PA12_Pin
                          |PA13_Pin|PA14_Pin|PA15_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);


  GPIO_InitStruct.Pin = PB0_Pin|PB1_Pin|PB2_Pin|PB15_Pin
                          |PB3_Pin|PB4_Pin|PB5_Pin|PB6_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}


void Error_Handler(void)
{

  __disable_irq();
  while (1)
  {
  }

}

#ifdef  USE_FULL_ASSERT

void assert_failed(uint8_t *file, uint32_t line)
{

}
#endif
