#pragma once
/******************************************************************************/
/* File   : Can.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstCan.hpp"
#include "CfgCan.hpp"
#include "Can_core.hpp"
#include "infCan_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Can:
      INTERFACES_EXPORTED_CAN
      public abstract_module
   ,  public class_Can_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstCan_Type* lptrConst = (ConstCan_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, CAN_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, CAN_CONST,       CAN_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   CAN_CONFIG_DATA, CAN_APPL_CONST) lptrCfgModule
      );
      FUNC(void, CAN_CODE) DeInitFunction      (void);
      FUNC(void, CAN_CODE) MainFunction        (void);
      CAN_CORE_FUNCTIONALITIES

      FUNC(void, CAN_CODE) MainFunction_Write  (void);
      FUNC(void, CAN_CODE) MainFunction_Read   (void);
      FUNC(void, CAN_CODE) MainFunction_BusOff (void);
      FUNC(void, CAN_CODE) MainFunction_Wakeup (void);
      FUNC(void, CAN_CODE) MainFunction_Mode   (void);
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
extern VAR(module_Can, CAN_VAR) Can;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
