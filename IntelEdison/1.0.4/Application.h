/*
 * Application.h
 *
 *  Created on: Jan 24, 2016
 *      Author: user
 */

#ifndef APPLICATION_H_
#define APPLICATION_H_

// Define Structure
typedef struct
{
	uint8_t northeast;
	uint8_t southwest;
} IOExpander_junction;

typedef struct
{
	uint8_t north_green_time;
	uint8_t north_priority;
	uint8_t east_green_time;
	uint8_t east_priority;
	uint8_t south_green_time;
	uint8_t south_priority;
	uint8_t west_green_time;
	uint8_t west_priority;
} direction;

// Define Cardinal Direction
#define NORTH			2
#define EAST			1
#define	SOUTH			4
#define	WEST			3

// Define Traffic Light Phase
#define GREEN			0
#define YELLOW			1
#define RED				2

// Global Function
extern void SendMessage1(void);
extern void SendMessage2(void);
extern void Variable_Assign(mraa_i2c_context structure, uint16_t input);
extern void Light_Change(mraa_i2c_context structure, uint16_t input, uint8_t junc, uint8_t phase);
extern void Traffic_Initial(mraa_i2c_context structure, uint16_t temp_input);
extern void Traffic_Run(mraa_i2c_context structure, uint16_t temp_input, uint8_t temp_junc, uint8_t temp_time);
extern void Traffic_Mode(mraa_i2c_context structure, uint16_t input, uint8_t mode, direction time);
extern uint8_t Priority_Sort(direction junction);
extern void System_Run(void);
extern void System_Run2(direction junction);
extern void System_Wait(void);
extern void Seven_Segment_Driver_Test(mraa_i2c_context structure, uint8_t value);
extern void Seven_Segment_Driver_Show(mraa_i2c_context structure, uint8_t value0, uint8_t value1, uint8_t value2, uint8_t value3);
extern void Seven_Segment_Driver_Write(mraa_i2c_context structure, uint8_t register_address, uint8_t content);
extern void Seven_Segment_Driver_Init(mraa_i2c_context structure);
extern void IO_Expander1_Write(mraa_i2c_context structure, uint8_t register_address, uint8_t content);
extern void IO_Expander1_Init(mraa_i2c_context structure);
extern void IO_Expander2_Write(mraa_i2c_context structure, uint8_t register_address, uint8_t content);
extern uint8_t IO_Expander2_Read(mraa_i2c_context structure, uint8_t register_address);
extern void IO_Expander2_Init(mraa_i2c_context structure);

#endif /* APPLICATION_H_ */
