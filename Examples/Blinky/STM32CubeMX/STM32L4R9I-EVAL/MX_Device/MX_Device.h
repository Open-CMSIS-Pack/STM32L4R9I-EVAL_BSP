/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 16/10/2024 10:29:11
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ I2C2           -----------------------------*/
#define MX_I2C2                                 1

/* Filter Settings */
#define MX_I2C2_ANF_ENABLE                      1
#define MX_I2C2_DNF                             0

/* Peripheral Clock Frequency */
#define MX_I2C2_PERIPH_CLOCK_FREQ               32000000

/* Pins */

/* I2C2_SCL */
#define MX_I2C2_SCL_Pin                         PH4
#define MX_I2C2_SCL_GPIO_Pin                    GPIO_PIN_4
#define MX_I2C2_SCL_GPIOx                       GPIOH
#define MX_I2C2_SCL_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C2_SCL_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C2_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C2_SCL_GPIO_AF                     GPIO_AF4_I2C2

/* I2C2_SDA */
#define MX_I2C2_SDA_Pin                         PH5
#define MX_I2C2_SDA_GPIO_Pin                    GPIO_PIN_5
#define MX_I2C2_SDA_GPIOx                       GPIOH
#define MX_I2C2_SDA_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C2_SDA_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C2_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C2_SDA_GPIO_AF                     GPIO_AF4_I2C2

/*------------------------------ LPUART1        -----------------------------*/
#define MX_LPUART1                              1

/* Pins */

/* LPUART1_CTS */
#define MX_LPUART1_CTS_Pin                      PB13
#define MX_LPUART1_CTS_GPIO_Pin                 GPIO_PIN_13
#define MX_LPUART1_CTS_GPIOx                    GPIOB
#define MX_LPUART1_CTS_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_CTS_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_CTS_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_LPUART1_CTS_GPIO_AF                  GPIO_AF8_LPUART1

/* LPUART1_RTS */
#define MX_LPUART1_RTS_Pin                      PB12
#define MX_LPUART1_RTS_GPIO_Pin                 GPIO_PIN_12
#define MX_LPUART1_RTS_GPIOx                    GPIOB
#define MX_LPUART1_RTS_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_RTS_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_RTS_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_LPUART1_RTS_GPIO_AF                  GPIO_AF8_LPUART1

/* LPUART1_TX */
#define MX_LPUART1_TX_Pin                       PG7
#define MX_LPUART1_TX_GPIO_Pin                  GPIO_PIN_7
#define MX_LPUART1_TX_GPIOx                     GPIOG
#define MX_LPUART1_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_LPUART1_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_LPUART1_TX_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_LPUART1_TX_GPIO_AF                   GPIO_AF8_LPUART1

/*------------------------------ SDMMC1         -----------------------------*/
#define MX_SDMMC1                               1

/* Mode */
#define MX_SDMMC1_MODE_SD                       1

/* Peripheral Clock Frequency */
#define MX_SDMMC1_PERIPH_CLOCK_FREQ             32000000

/* Pins */

/* SDMMC1_CK */
#define MX_SDMMC1_CK_Pin                        PC12
#define MX_SDMMC1_CK_GPIO_Pin                   GPIO_PIN_12
#define MX_SDMMC1_CK_GPIOx                      GPIOC
#define MX_SDMMC1_CK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_CK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_CK_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CK_GPIO_AF                    GPIO_AF12_SDMMC1

/* SDMMC1_CMD */
#define MX_SDMMC1_CMD_Pin                       PD2
#define MX_SDMMC1_CMD_GPIO_Pin                  GPIO_PIN_2
#define MX_SDMMC1_CMD_GPIOx                     GPIOD
#define MX_SDMMC1_CMD_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_CMD_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_CMD_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CMD_GPIO_AF                   GPIO_AF12_SDMMC1

/* SDMMC1_D0 */
#define MX_SDMMC1_D0_Pin                        PC8
#define MX_SDMMC1_D0_GPIO_Pin                   GPIO_PIN_8
#define MX_SDMMC1_D0_GPIOx                      GPIOC
#define MX_SDMMC1_D0_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D0_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D0_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D0_GPIO_AF                    GPIO_AF12_SDMMC1

/* SDMMC1_D1 */
#define MX_SDMMC1_D1_Pin                        PC9
#define MX_SDMMC1_D1_GPIO_Pin                   GPIO_PIN_9
#define MX_SDMMC1_D1_GPIOx                      GPIOC
#define MX_SDMMC1_D1_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D1_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D1_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D1_GPIO_AF                    GPIO_AF12_SDMMC1

/* SDMMC1_D2 */
#define MX_SDMMC1_D2_Pin                        PC10
#define MX_SDMMC1_D2_GPIO_Pin                   GPIO_PIN_10
#define MX_SDMMC1_D2_GPIOx                      GPIOC
#define MX_SDMMC1_D2_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D2_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D2_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D2_GPIO_AF                    GPIO_AF12_SDMMC1

/* SDMMC1_D3 */
#define MX_SDMMC1_D3_Pin                        PC11
#define MX_SDMMC1_D3_GPIO_Pin                   GPIO_PIN_11
#define MX_SDMMC1_D3_GPIOx                      GPIOC
#define MX_SDMMC1_D3_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D3_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D3_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D3_GPIO_AF                    GPIO_AF12_SDMMC1

/*------------------------------ SPI2           -----------------------------*/
#define MX_SPI2                                 1

/* Peripheral Clock Frequency */
#define MX_SPI2_PERIPH_CLOCK_FREQ               32000000

/* Pins */

/* SPI2_MISO */
#define MX_SPI2_MISO_Pin                        PI2
#define MX_SPI2_MISO_GPIO_Pin                   GPIO_PIN_2
#define MX_SPI2_MISO_GPIOx                      GPIOI
#define MX_SPI2_MISO_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI2_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI2_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI2_MISO_GPIO_AF                    GPIO_AF5_SPI2

/* SPI2_MOSI */
#define MX_SPI2_MOSI_Pin                        PI3
#define MX_SPI2_MOSI_GPIO_Pin                   GPIO_PIN_3
#define MX_SPI2_MOSI_GPIOx                      GPIOI
#define MX_SPI2_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI2_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI2_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI2_MOSI_GPIO_AF                    GPIO_AF5_SPI2

/* SPI2_NSS */
#define MX_SPI2_NSS_Pin                         PI0
#define MX_SPI2_NSS_GPIO_Pin                    GPIO_PIN_0
#define MX_SPI2_NSS_GPIOx                       GPIOI
#define MX_SPI2_NSS_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI2_NSS_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI2_NSS_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI2_NSS_GPIO_AF                     GPIO_AF5_SPI2

/* SPI2_SCK */
#define MX_SPI2_SCK_Pin                         PI1
#define MX_SPI2_SCK_GPIO_Pin                    GPIO_PIN_1
#define MX_SPI2_SCK_GPIOx                       GPIOI
#define MX_SPI2_SCK_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI2_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI2_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI2_SCK_GPIO_AF                     GPIO_AF5_SPI2

/*------------------------------ USART3         -----------------------------*/
#define MX_USART3                               1

/* Virtual mode */
#define MX_USART3_VM                            VM_ASYNC
#define MX_USART3_VM_ASYNC                      1

/* Pins */

/* USART3_RX */
#define MX_USART3_RX_Pin                        PB11
#define MX_USART3_RX_GPIO_Pin                   GPIO_PIN_11
#define MX_USART3_RX_GPIOx                      GPIOB
#define MX_USART3_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART3_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART3_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_RX_GPIO_AF                    GPIO_AF7_USART3

/* USART3_TX */
#define MX_USART3_TX_Pin                        PB10
#define MX_USART3_TX_GPIO_Pin                   GPIO_PIN_10
#define MX_USART3_TX_GPIOx                      GPIOB
#define MX_USART3_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART3_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART3_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_TX_GPIO_AF                    GPIO_AF7_USART3

/*------------------------------ USB_OTG_FS     -----------------------------*/
#define MX_USB_OTG_FS                           1

/* Handle */
#define MX_USB_OTG_FS_HANDLE                    hpcd_USB_OTG_FS

/* Virtual mode */
#define MX_USB_OTG_FS_VM                        Device_Only
#define MX_USB_OTG_FS_Device_Only               1

/* Pins */

/* USB_OTG_FS_DM */
#define MX_USB_OTG_FS_DM_Pin                    PA11
#define MX_USB_OTG_FS_DM_GPIO_Pin               GPIO_PIN_11
#define MX_USB_OTG_FS_DM_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DM_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DM_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DM_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_DM_GPIO_AF                GPIO_AF10_OTG_FS

/* USB_OTG_FS_DP */
#define MX_USB_OTG_FS_DP_Pin                    PA12
#define MX_USB_OTG_FS_DP_GPIO_Pin               GPIO_PIN_12
#define MX_USB_OTG_FS_DP_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DP_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DP_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DP_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_DP_GPIO_AF                GPIO_AF10_OTG_FS

/* USB_OTG_FS_ID */
#define MX_USB_OTG_FS_ID_Pin                    PA10
#define MX_USB_OTG_FS_ID_GPIO_Pin               GPIO_PIN_10
#define MX_USB_OTG_FS_ID_GPIOx                  GPIOA
#define MX_USB_OTG_FS_ID_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_ID_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_ID_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_ID_GPIO_AF                GPIO_AF10_OTG_FS

/* USB_OTG_FS_VBUS */
#define MX_USB_OTG_FS_VBUS_Pin                  PA9
#define MX_USB_OTG_FS_VBUS_GPIO_Pin             GPIO_PIN_9
#define MX_USB_OTG_FS_VBUS_GPIOx                GPIOA
#define MX_USB_OTG_FS_VBUS_GPIO_Mode            GPIO_MODE_INPUT
#define MX_USB_OTG_FS_VBUS_GPIO_PuPd            GPIO_NOPULL
#define MX_USB_OTG_FS_VBUS_GPIO_Speed           GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_VBUS_GPIO_AF              GPIO_AF10_OTG_FS

#endif  /* MX_DEVICE_H__ */
