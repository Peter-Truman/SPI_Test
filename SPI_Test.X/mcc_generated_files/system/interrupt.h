/**
 * Interrupt Manager Generated Driver API Header File
 * 
 * @file interrupt.h
 * 
 * @defgroup interrupt INTERRUPT
 * 
 * @brief This file contains API prototypes and other data types for the Interrupt Manager driver.
 *
 * @version Interrupt Manager Driver Version 1.0.1
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef INTERRUPT_H
#define INTERRUPT_H


/**
 * @ingroup interrupt
 * @brief Enables global interrupts.
 * @param None.
 * @return None.
 */
#define INTERRUPT_GlobalInterruptEnable() (INTCONbits.GIE = 1)

/**
 * @ingroup interrupt
 * @brief Disables global interrupts.
 * @param None.
 * @return None.
 */
#define INTERRUPT_GlobalInterruptDisable() (INTCONbits.GIE = 0)

/**
 * @ingroup interrupt
 * @brief Returns the Global Interrupt Enable bit status.
 * @param None.
 * @retval 0 - Global interrupt disabled.
 * @retval 1 - Global interrupt enabled.
 */
#define INTERRUPT_GlobalInterruptStatus() (INTCONbits.GIE)

/**
 * @ingroup interrupt
 * @brief Enables peripheral interrupts.
 * @param None.
 * @return None.
 */
#define INTERRUPT_PeripheralInterruptEnable() (INTCONbits.PEIE = 1)

/**
 * @ingroup interrupt
 * @brief Disables peripheral interrupts.
 * @param None.
 * @return None.
 */
#define INTERRUPT_PeripheralInterruptDisable() (INTCONbits.PEIE = 0)

/**
 * @ingroup interrupt
 * @brief Initializes peripheral interrupt priorities, enables or disables priority vectors and initializes the external interrupt.
 * @param None.
 * @return None.
 */
void INTERRUPT_Initialize (void);


/**
   Section: External Interrupt Handlers
 */

#endif  // INTERRUPT_H
/**
 End of File
*/