/*********************************************************************************************************
*                                               <Module name>
*						<Module description>
*
*						<Copyright>
*
*						<Copyright or distribution terms>
*
*
*********************************************************************************************************/

/*********************************************************************************************************
*                                               <File description>
*
* Filename	: Filename
* Version	: Module version					
* Programmer(s) : Programmer initial(s)
**********************************************************************************************************
*  Note(s):
*
*
*
*********************************************************************************************************/

/*********************************************************************************************************
 *
 * \file		${file_name}
 * \brief		Descripcion del modulo
 * \date		${date}
 * \author		Nicolas Ferragamo nferragamo@frba.utn.edu.ar
 * \version 
*********************************************************************************************************/

/*********************************************************************************************************
 *** INCLUDES
*********************************************************************************************************/

#include <Arduino.h>
#include <util/delay.h>

/*********************************************************************************************************
 *** DEFINES PRIVADOS AL MODULO
*********************************************************************************************************/

/*********************************************************************************************************
 *** MACROS PRIVADAS AL MODULO
*********************************************************************************************************/
#define SET_PIN(PORT,PIN) (PORT|= 1<<PIN)
#define CLEAR_PIN(PORT,PIN) (PORT&=~(1<<PIN))
#define IS_CLEAR_PIN(PORT,PIN) (((PORT>>PIN)&0x01)==0 ? 1 :0)
#define IS_SET_PIN(PORT,PIN) (((PORT>>PIN)&0x01)==1 ? 1 :0)

// ejemplo si quiere usar una macro para cada botón
#define Boton1 ((PINC>>PC0)&0x01)

/*********************************************************************************************************
 *** TIPOS DE DATOS PRIVADOS AL MODULO
*********************************************************************************************************/

/*********************************************************************************************************
 *** TABLAS PRIVADAS AL MODULO
*********************************************************************************************************/



/*********************************************************************************************************
 *** VARIABLES GLOBALES PUBLICAS
 *   se escriben en CamelCase y están precedidas por la identificación del 
 *   módulo seguida de un _ 
 *   ej: MEM_POOL  Mem_PoolHeap; 
*********************************************************************************************************/



/*********************************************************************************************************
 *** VARIABLES GLOBALES PRIVADAS AL MODULO
 *   se declaran con static y se escriben en CamelCase y están precedidas por la 
 *   identificación del módulo seguida de un _ y usan _ para separar las palabras
 *   cuando tienen nombres compuestos
 *   ej: static MEM_POOL  Mem_Pool_Heap; 
*********************************************************************************************************/



/*********************************************************************************************************
 *** PROTOTIPO DE FUNCIONES PRIVADAS AL MODULO
 * se declaran como estaticas y se escriben en CamelCase, están precedidas por la
 * identificación del módulo seguida de un _. No se decaran en el .h
 * ej static void Clk_DateTimer(parametros)
*********************************************************************************************************/



/*********************************************************************************************************
 *** FUNCIONES PRIVADAS AL MODULO
*********************************************************************************************************/



/*********************************************************************************************************
 *** FUNCIONES GLOBALES AL MODULO
*********************************************************************************************************/

/**
	\fn  		Nombre de la Funcion
	\brief 		Descripcion
 	\author 	Nombre
 	\date 		${date}
 	\param [in] 	parametros de entrada
 	\param [out] 	parametros de salida
	\return tipo 	y descripcion de retorno
*/





/*

Respetar este pin out.

PC0 -> BOTON 1 
PB5 -> LED 1

*/

/*
** The main function. Application starts here.
*/
int main (void)
{
  DDRB  |= 0x1 << PB5;
  DDRC  &= ~(0x01);
  PORTC |= 0x01;
 
  //! aca se escriben las inicializasiones

  while(1)
  {
   //! aca se escribe el programa principal
   SET_PIN(PORTB,PB5);
   _delay_ms(1000);
    CLEAR_PIN(PORTB,PB5);
   _delay_ms(1000);
  }

  return 0;
}

/*********************************************************************************************************
** end of file
*********************************************************************************************************/