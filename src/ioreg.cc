/*
 *	avarice - The "avarice" program.
 *	Copyright (C) 2003, 2004 James Harris
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License Version 2
 *      as published by the Free Software Foundation.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program; if not, write to the Free Software
 *	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111, USA.
 *
 * This file contains IO Register definitions for use with avr-gdb's 'info
 * io_register' command.
 *
 * $Id$
 */

#include "ioreg.h"

gdb_io_reg_def_type atmega16_io_registers[] =
{
    { "TWBR",    0x20, 0x00 },
    { "TWSR",    0x21, 0x00 },
    { "TWAR",    0x22, 0x00 },
    { "TWDR",    0x23, 0x00 },
    { "ADCL",    0x24, IO_REG_RSE }, // Reading during a conversion corrupts
    { "ADCH",    0x25, IO_REG_RSE }, // ADC result
    { "ADCSRA",  0x26, 0x00 },
    { "ADMUX",   0x27, 0x00 },
    { "ACSR",    0x28, 0x00 },
    { "UBRRL",   0x29, 0x00 },
    { "UCSRB",   0x2A, 0x00 },
    { "UCSRA",   0x2B, 0x00 },
    { "UDR",     0x2C, IO_REG_RSE }, // Reading this clears the UART RXC flag
    { "SPCR",    0x2D, 0x00 },
    { "SPSR",    0x2E, 0x00 },
    { "SPDR",    0x2F, 0x00 },
    { "PIND",    0x30, 0x00 },
    { "DDRD",    0x31, 0x00 },
    { "PORTD",   0x32, 0x00 },
    { "PINC",    0x33, 0x00 },
    { "DDRC",    0x34, 0x00 },
    { "PORTC",   0x35, 0x00 },
    { "PINB",    0x36, 0x00 },
    { "DDRB",    0x37, 0x00 },
    { "PORTB",   0x38, 0x00 },
    { "PINA",    0x39, 0x00 },
    { "DDRA",    0x3A, 0x00 },
    { "PORTA",   0x3B, 0x00 },
    { "EECR",    0x3C, 0x00 },
    { "EEDR",    0x3D, 0x00 },
    { "EEARL",   0x3E, 0x00 },
    { "EEARH",   0x3F, 0x00 },
    { "UCSRC -- UBRRH",   0x40, 0x00 },
    { "WDTCR",   0x41, 0x00 },
    { "ASSR",    0x42, 0x00 },
    { "OCR2",    0x43, 0x00 },
    { "TCNT2",   0x44, 0x00 },
    { "TCCR2",   0x45, 0x00 },
    { "ICR1L",   0x46, 0x00 },
    { "ICR1H",   0x47, 0x00 },
    { "OCR1BL",  0x48, 0x00 },
    { "OCR1BH",  0x49, 0x00 },
    { "OCR1AL",  0x4A, 0x00 },
    { "OCR1AH",  0x4B, 0x00 },
    { "TCNT1L",  0x4C, 0x00 },
    { "TCNT1H",  0x4D, 0x00 },
    { "TCCR1B",  0x4E, 0x00 },
    { "TCCR1A",  0x4F, 0x00 },
    { "SFIOR",   0x50, 0x00 },
    { "OCDR -- OSCCAL",    0x51, 0x00 },
    { "TCNT0",   0x52, 0x00 },
    { "TCCR0",   0x53, 0x00 },
    { "MCUCSR",  0x54, 0x00 },
    { "MCUCR",   0x55, 0x00 },
    { "TWCR",    0x56, 0x00 },
    { "SPMCR",   0x57, 0x00 },
    { "TIFR",    0x58, 0x00 },
    { "TIMSK",   0x59, 0x00 },
    { "GIFR",    0x5A, 0x00 },
    { "GICR",    0x5B, 0x00 },
    { "OCR0",    0x5C, 0x00 },
    { "SPL",     0x5D, 0x00 },
    { "SPH",     0x5E, 0x00 },
    { "SREG",    0x5F, 0x00 },
    { 0, 0, 0 }
};

gdb_io_reg_def_type atmega169_io_registers[] =
{
    { "PINA",    0x20, 0x00 },
    { "DDRA",    0x21, 0x00 },
    { "PORTA",   0x22, 0x00 },
    { "PINB",    0x23, 0x00 },
    { "DDRB",    0x24, 0x00 },
    { "PORTB",   0x25, 0x00 },
    { "PINC",    0x26, 0x00 },
    { "DDRC",    0x27, 0x00 },
    { "PORTC",   0x28, 0x00 },
    { "PIND",    0x29, 0x00 },
    { "DDRD",    0x2A, 0x00 },
    { "PORTD",   0x2B, 0x00 },
    { "PINE",    0x2C, 0x00 },
    { "DDRE",    0x2D, 0x00 },
    { "PORTE",   0x2E, 0x00 },
    { "PINF",    0x2F, 0x00 },
    { "DDRF",    0x30, 0x00 },
    { "PORTF",   0x31, 0x00 },
    { "PING",    0x32, 0x00 },
    { "DDRG",    0x33, 0x00 },
    { "PORTG",   0x34, 0x00 },
    { "TIFR0",   0x35, 0x00 },
    { "TIFR1",   0x36, 0x00 },
    { "TIFR2",   0x37, 0x00 },
    { "EIFR",    0x3C, 0x00 },
    { "EIMSK",   0x3D, 0x00 },
    { "GPIOR0",  0x3E, 0x00 },
    { "EECR",    0x3F, 0x00 },
    { "EEDR",    0x40, 0x00 },
    { "EEARL",   0x41, 0x00 },
    { "EEARH",   0x42, 0x00 },
    { "GTCCR",   0x43, 0x00 },
    { "TCCR0A",  0x44, 0x00 },
    { "TCNT0",   0x46, 0x00 },
    { "OCR0A",   0x47, 0x00 },
    { "GPIOR1",  0x4A, 0x00 },
    { "GPIOR2",  0x4B, 0x00 },
    { "SPCR",    0x4C, 0x00 },
    { "SPSR",    0x4D, 0x00 },
    { "SPDR",    0x4E, 0x00 },
    { "ACSR",    0x50, 0x00 },
    { "OCDR",    0x51, 0x00 },
    { "SMCR",    0x53, 0x00 },
    { "MCUCSR",  0x54, 0x00 },
    { "MCUCR",   0x55, 0x00 },
    { "SPMCSR",  0x57, 0x00 },
    { "SPL",     0x5D, 0x00 },
    { "SPH",     0x5E, 0x00 },
    { "SREG",    0x5F, 0x00 },
    { "WDTCR",   0x60, 0x00 },
    { "CLKPR",   0x61, 0x00 },
    { "OSCCAL",  0x66, 0x00 },
    { "EICRA",   0x69, 0x00 },
    { "PCMSK0",  0x6B, 0x00 },
    { "PCMSK1",  0x6C, 0x00 },
    { "TIMSK0",  0x6E, 0x00 },
    { "TIMSK1",  0x6F, 0x00 },
    { "TIMSK2",  0x70, 0x00 },
    { "ADCL",    0x78, IO_REG_RSE }, // Reading during a conversion corrupts
    { "ADCH",    0x79, IO_REG_RSE }, // ADC result
    { "ADCSRA",  0x7A, 0x00 },
    { "ADCSRB",  0x7B, 0x00 },
    { "ADMUX",   0x7C, 0x00 },
    { "DIDR0",   0x7E, 0x00 },
    { "DIDR1",   0x7F, 0x00 },
    { "TCCR1A",  0x80, 0x00 },
    { "TCCR1B",  0x81, 0x00 },
    { "TCCR1C",  0x82, 0x00 },
    { "TCNT1L",  0x84, 0x00 },
    { "TCNT1H",  0x85, 0x00 },
    { "ICR1L",   0x86, 0x00 },
    { "ICR1H",   0x87, 0x00 },
    { "OCR1AL",  0x88, 0x00 },
    { "OCR1AH",  0x89, 0x00 },
    { "OCR1BL",  0x8A, 0x00 },
    { "OCR1BH",  0x8B, 0x00 },
    { "TCCR2A",  0xB0, 0x00 },
    { "TCNT2",   0xB2, 0x00 },
    { "OCR2A",   0xB3, 0x00 },
    { "ASSR",    0xB6, 0x00 },
    { "USICR",   0xB8, 0x00 },
    { "USISR",   0xB9, 0x00 },
    { "USIDR",   0xBA, 0x00 },
    { "UCSRA",   0xC0, 0x00 },
    { "UCSRB",   0xC1, 0x00 },
    { "UCSRC",   0xC2, 0x00 },
    { "UBRRL",   0xC4, 0x00 },
    { "UBRRH",   0xC5, 0x00 },
    { "UDR",     0xC6, IO_REG_RSE }, // Reading this clears the UART RXC flag
    { "LCDCRA",  0xE4, 0x00 },
    { "LCDCRB",  0xE5, 0x00 },
    { "LCDFRR",  0xE6, 0x00 },
    { "LCDCCR",  0xE7, 0x00 },
    { "LCDDR0",  0xEC, 0x00 },
    { "LCDDR1",  0xED, 0x00 },
    { "LCDDR2",  0xEE, 0x00 },
    { "LCDDR3",  0xEF, 0x00 },
    { "LCDDR5",  0xF1, 0x00 },
    { "LCDDR6",  0xF2, 0x00 },
    { "LCDDR7",  0xF3, 0x00 },
    { "LCDDR8",  0xF4, 0x00 },
    { "LCDDR10", 0xF6, 0x00 },
    { "LCDDR11", 0xF7, 0x00 },
    { "LCDDR12", 0xF8, 0x00 },
    { "LCDDR13", 0xF9, 0x00 },
    { "LCDDR15", 0xFB, 0x00 },
    { "LCDDR16", 0xFC, 0x00 },
    { "LCDDR17", 0xFD, 0x00 },
    { "LCDDR18", 0xFE, 0x00 },
    { 0, 0, 0 }
};

