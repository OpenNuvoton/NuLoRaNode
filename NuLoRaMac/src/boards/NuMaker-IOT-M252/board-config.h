/****************************************************************************
 * @file     board-config.h
 * @version  V1.10
 * @brief    Board configuration
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __BOARD_CONFIG_H__
#define __BOARD_CONFIG_H__

#ifdef __cplusplus
extern "C"
{
#endif

/*!
 * Board MCU pins definitions
 */
#define RADIO_RESET                                 PF_6
#define RADIO_TCXO_EN                               PD_15

#define RADIO_MOSI                                  PD_0
#define RADIO_MISO                                  PD_1
#define RADIO_SCLK                                  PD_2
#define RADIO_NSS                                   PD_3

#define RADIO_DIO_0                                 PC_6
#define RADIO_DIO_1                                 PC_7
#define RADIO_DIO_2                                 PB_8
#define RADIO_DIO_3                                 PB_9
#define RADIO_DIO_4                                 PB_10
#define RADIO_DIO_5                                 PB_11

#define LED_1                                       PB_14
#define LED_2                                       NC

#define BOARD_TCXO_WAKEUP_TIME                      5

#define SPI0_MFP_MOSI_VALUE		(SYS_GPD_MFPL_PD0MFP_SPI0_MOSI)						
#define SPI0_MFP_MISO_VALUE		(SYS_GPD_MFPL_PD1MFP_SPI0_MISO)							
#define SPI0_MFP_CLK_VALUE		(SYS_GPD_MFPL_PD2MFP_SPI0_CLK)					
#define SPI0_MFP_NSS_VALUE		(SYS_GPD_MFPL_PD3MFP_SPI0_SS)							

#define I2C0_SCL										PC_1
#define I2C0_SDA										PC_0

#define I2C1_SCL										PC_5
#define I2C1_SDA										PC_4

#define I2C0_MFP_SCL_VALUE		(SYS_GPC_MFPL_PC1MFP_I2C0_SCL)						
#define I2C0_MFP_SDA_VALUE		(SYS_GPC_MFPL_PC0MFP_I2C0_SDA)							
#define I2C1_MFP_SCL_VALUE		(SYS_GPC_MFPL_PC5MFP_I2C1_SCL)					
#define I2C1_MFP_SDA_VALUE		(SYS_GPC_MFPL_PC4MFP_I2C1_SDA)							

#define UART0_TX										PB_13
#define UART0_RX										PB_12

#define UART1_TX										PB_3
#define UART1_RX										PB_2

#define UART0_MFP_TX_VALUE		(SYS_GPB_MFPH_PB13MFP_UART0_TXD)						
#define UART0_MFP_RX_VALUE		(SYS_GPB_MFPH_PB12MFP_UART0_RXD)							
#define UART1_MFP_TX_VALUE		(SYS_GPB_MFPL_PB3MFP_UART1_TXD)					
#define UART1_MFP_RX_VALUE		(SYS_GPB_MFPL_PB2MFP_UART1_RXD)							

#define FMC_ADDR_END		(256 * 1024)							//256K Bytes
#define FACTORY_EEPROM_SIZE	(1 * 1024)								//1K size	
#define FACTORY_EEPROM_BASE	(FMC_ADDR_END - FACTORY_EEPROM_SIZE)	
#define DATA_EEPROM_END		FACTORY_EEPROM_BASE
#define DATA_EEPROM_SIZE	(3 * 1024)								//3K size
#define DATA_EEPROM_BASE	(DATA_EEPROM_END - DATA_EEPROM_SIZE)	


#ifdef  USE_FULL_ASSERT
/**
  * @brief  The assert_param macro is used for function's parameters check.
  * @param  expr: If expr is false, it calls assert_failed function
  *         which reports the name of the source file and the source
  *         line number of the call that failed. 
  *         If expr is true, it returns no value.
  * @retval None
  */
  #define assert_param(expr) ((expr) ? (void)0U : assert_failed((uint8_t *)__FILE__, __LINE__))
/* Exported functions ------------------------------------------------------- */
  void assert_failed(uint8_t* file, uint32_t line);
#else
  #define assert_param(expr) ((void)0U)
#endif /* USE_FULL_ASSERT */


#endif // __BOARD_CONFIG_H__
	