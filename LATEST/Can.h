#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_Can.h"

class class_Can{
   public:
      FUNC(void, CAN_CODE) InitFunction                (void);
      FUNC(void, CAN_CODE) DeInitFunction              (void);
      FUNC(void, CAN_CODE) GetVersionInfo              (void);
      FUNC(void, CAN_CODE) SetBaudRate                 (void);
      FUNC(void, CAN_CODE) SetControllerMode           (void);
      FUNC(void, CAN_CODE) DisableControllerInterrupts (void);
      FUNC(void, CAN_CODE) EnableControllerInterrupts  (void);
      FUNC(void, CAN_CODE) CheckWakeUp                 (void);
      FUNC(void, CAN_CODE) GetControllerErrorState     (void);
      FUNC(void, CAN_CODE) GetControllerMode           (void);
      FUNC(void, CAN_CODE) Write                       (void);
      FUNC(void, CAN_CODE) MainFunction_Write          (void);
      FUNC(void, CAN_CODE) MainFunction_Read           (void);
      FUNC(void, CAN_CODE) MainFunction_BusOff         (void);
      FUNC(void, CAN_CODE) MainFunction_Wakeup         (void);
      FUNC(void, CAN_CODE) MainFunction_Mode           (void);
};

extern class_Can Can;

