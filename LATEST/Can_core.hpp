#pragma once
/******************************************************************************/
/* File   : Can_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_Can_Functionality{
   public:
      FUNC(void, CAN_CODE) SetBaudRate                 (void);
      FUNC(void, CAN_CODE) SetControllerMode           (void);
      FUNC(void, CAN_CODE) DisableControllerInterrupts (void);
      FUNC(void, CAN_CODE) EnableControllerInterrupts  (void);
      FUNC(void, CAN_CODE) CheckWakeUp                 (void);
      FUNC(void, CAN_CODE) GetControllerErrorState     (void);
      FUNC(void, CAN_CODE) GetControllerMode           (void);
      FUNC(void, CAN_CODE) Write                       (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
