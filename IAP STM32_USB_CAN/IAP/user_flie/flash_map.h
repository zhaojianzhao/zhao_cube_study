#ifndef __FLASH_MAP_H
#define __FLASH_MAP_H

/*存放BOOTLOADER程序*/
#define USER_FLASH_BOOTLOADER_BASE 0x08000000U
#define USER_FLASH_BOOTLOADER_END  0x0800BFFFU
#define USER_FLASH_BOOTLOADER_SIZE 0x0000C000U /* 48k */

/*存放放BOOTLOADER的状态标志位与数据*/
#define USER_FLASH_BOOT_DATA_BASE 0x0800C000U
#define USER_FLASH_BOOT_DATA_END  0x0800CFFFU
#define USER_FLASH_BOOT_DATA_SIZE 0x00001000U /* 4k */ 

/*存放FLASH_APP的状态标志与数据*/
#define USER_FLASH_APP_DATA_BASE 0x0800D000U
#define USER_FLASH_APP_DATA_END  0x0800FFFFU
#define USER_FLASH_APP_DATA_SIZE 0x00003000U /* 12k */

/*存放FLASH_APP程序*/
#define USER_FLASH_APP_BASE 0x08010000U
#define USER_FLASH_APP_END  0x08047FFFU
#define USER_FLASH_APP_SIZE 0x00038000U /* 224k */

/*存放接收到的BIN更新文件*/
#define USER_FLASH_BIN_BASE 0x08048000U
#define USER_FLASH_BIN_END  0x0807FFFFU
#define USER_FLASH_BIN_SIZE 0x00038000U /* 224k */

#endif

