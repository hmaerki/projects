/**
  ******************************************************************************
  * @file    USB_Device/CDC_Standalone/Src/stm32l1xx_hal_msp.c
  * @author  MCD Application Team
  * @version V1.3.0
  * @date    3-July-2015
  * @brief   HAL MSP module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2015 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
// #include "stm32l152d_eval.h"
#include "main.h"

/** @addtogroup USBD_USER
* @{
*/

/** @defgroup USBD_USR_MAIN
  * @brief This file is the CDC application main file
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief UART MSP Initialization
  *        This function configures the hardware resources used in this example:
  *           - Peripheral's clock enable
  *           - Peripheral's GPIO Configuration
  *           - DMA configuration for transmission request by peripheral
  *           - NVIC configuration for DMA interrupt request enable
  * @param huart: UART handle pointer
  * @retval None
  */
void HAL_UART_MspInit(UART_HandleTypeDef *huart)
{
  // static DMA_HandleTypeDef hdma_tx;
  // GPIO_InitTypeDef  GPIO_InitStruct;
  //
  // /*##-1- Enable peripherals and GPIO Clocks #################################*/
  // /* Enable GPIO clock */
  // USARTx_TX_GPIO_CLK_ENABLE();
  // USARTx_RX_GPIO_CLK_ENABLE();
  //
  // /* Enable USARTx clock */
  // USARTx_CLK_ENABLE();
  //
  // /* Enable DMA clock */
  // DMAx_CLK_ENABLE();
  //
  // /*##-2- Configure peripheral GPIO ##########################################*/
  // /* UART TX GPIO pin configuration  */
  // GPIO_InitStruct.Pin       = USARTx_TX_PIN;
  // GPIO_InitStruct.Mode      = GPIO_MODE_AF_PP;
  // GPIO_InitStruct.Pull      = GPIO_PULLUP;
  // GPIO_InitStruct.Speed     = GPIO_SPEED_HIGH;
  // GPIO_InitStruct.Alternate = USARTx_TX_AF;
  //
  // HAL_GPIO_Init(USARTx_TX_GPIO_PORT, &GPIO_InitStruct);
  //
  // /* UART RX GPIO pin configuration  */
  // GPIO_InitStruct.Pin = USARTx_RX_PIN;
  // GPIO_InitStruct.Alternate = USARTx_RX_AF;
  //
  // HAL_GPIO_Init(USARTx_RX_GPIO_PORT, &GPIO_InitStruct);
  //
  // /*##-3- Configure the NVIC for UART ########################################*/
  // HAL_NVIC_SetPriority(USARTx_IRQn, 4, 0);
  // HAL_NVIC_EnableIRQ(USARTx_IRQn);
  //
  // /*##-4- Configure the DMA channels ##########################################*/
  // /* Configure the DMA handler for Transmission process */
  // hdma_tx.Instance                 = USARTx_TX_DMA_STREAM;
  //
  // hdma_tx.Init.Direction           = DMA_MEMORY_TO_PERIPH;
  // hdma_tx.Init.PeriphInc           = DMA_PINC_DISABLE;
  // hdma_tx.Init.MemInc              = DMA_MINC_ENABLE;
  // hdma_tx.Init.PeriphDataAlignment = DMA_PDATAALIGN_BYTE;
  // hdma_tx.Init.MemDataAlignment    = DMA_MDATAALIGN_BYTE;
  // hdma_tx.Init.Mode                = DMA_NORMAL;
  // hdma_tx.Init.Priority            = DMA_PRIORITY_LOW;
  //
  // HAL_DMA_Init(&hdma_tx);
  //
  // /* Associate the initialized DMA handle to the UART handle */
  // __HAL_LINKDMA(huart, hdmatx, hdma_tx);
  //
  // /*##-5- Configure the NVIC for DMA #########################################*/
  // /* NVIC configuration for DMA transfer complete interrupt (USARTx_TX) */
  // HAL_NVIC_SetPriority(USARTx_DMA_TX_IRQn, 5, 0);
  // HAL_NVIC_EnableIRQ(USARTx_DMA_TX_IRQn);
  //
  // /*##-6- Enable TIM peripherals Clock #######################################*/
  // TIMx_CLK_ENABLE();
  //
  // /*##-7- Configure the NVIC for TIMx ########################################*/
  // /* Set Interrupt Group Priority */
  // HAL_NVIC_SetPriority(TIMx_IRQn, 5, 0);
  //
  // /* Enable the TIMx global Interrupt */
  // HAL_NVIC_EnableIRQ(TIMx_IRQn);
}

/**
  * @brief UART MSP De-Initialization
  *        This function frees the hardware resources used in this example:
  *          - Disable the Peripheral's clock
  *          - Revert GPIO, DMA and NVIC configuration to their default state
  * @param huart: UART handle pointer
  * @retval None
  */
void HAL_UART_MspDeInit(UART_HandleTypeDef *huart)
{
  /*##-1- Reset peripherals ##################################################*/
  // USARTx_FORCE_RESET();
  // USARTx_RELEASE_RESET();
  //
  // /*##-2- Disable peripherals and GPIO Clocks #################################*/
  // /* Configure UART Tx as alternate function  */
  // HAL_GPIO_DeInit(USARTx_TX_GPIO_PORT, USARTx_TX_PIN);
  // /* Configure UART Rx as alternate function  */
  // HAL_GPIO_DeInit(USARTx_RX_GPIO_PORT, USARTx_RX_PIN);
  //
  // /*##-3- Disable the NVIC for UART ##########################################*/
  // HAL_NVIC_DisableIRQ(USARTx_IRQn);
  //
  // /*##-4- Disable the NVIC for DMA ###########################################*/
  // HAL_NVIC_DisableIRQ(USARTx_DMA_TX_IRQn);
  //
  // /*##-5- Reset TIM peripheral ###############################################*/
  // TIMx_FORCE_RESET();
  // TIMx_RELEASE_RESET();
}

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/