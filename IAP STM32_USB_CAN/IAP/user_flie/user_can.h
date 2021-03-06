#ifndef __USER_CAN_H
#define __USER_CAN_H
#include "stm32f1xx_hal.h"

typedef enum 
{
	STATUS_MSG_ID = 0x0,
	
	HIGHT_MSG_ID = 0x100,    //高度ID
	SPEED_MSG_ID = 0x101,		 //速度ID
	SP_MSG_ID  = 0x102, //特效ID	
	HEART_BEAT_ID = 0x200,     //心跳的ID号段号；
	NM_MSG_ID = 0x400
} can_msg_id_t;

typedef enum 
{
	HIGHT_MSG_P=0 ,
	SPEED_MSG_P ,
	ENV_SP_P ,
	SEAT_ID_P ,
	SEAT_SP_P
} can_msg_choose_t;

extern void user_can_init(void);
extern void time_event(void);          //放在主函数中轮询 做前台工作；
extern void can_send(uint16_t msg_id, uint8_t *data, uint16_t len);
extern void get_high_speed_date(uint16_t msg_addr,uint8_t * pData) ; 
extern void set_can_rx_flag(uint16_t);




/*外部函数调用*/
extern uint8_t get_update_flag(void);  /*获取CAN数据的更新位*/
extern void get_high_speed_date(uint16_t msg_addr,uint8_t * pData);  
extern void set_status_msg(uint8_t *tx_data);
extern void set_nm_msg(uint8_t *tx_data);
#endif
