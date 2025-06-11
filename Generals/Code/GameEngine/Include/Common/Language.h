/*
**	Command & Conquer Generals(tm)
**	Copyright 2025 Electronic Arts Inc.
**
**	This program is free software: you can redistribute it and/or modify
**	it under the terms of the GNU General Public License as published by
**	the Free Software Foundation, either version 3 of the License, or
**	(at your option) any later version.
**
**	This program is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**	GNU General Public License for more details.
**
**	You should have received a copy of the GNU General Public License
**	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

////////////////////////////////////////////////////////////////////////////////
//																																						//
//  (c) 2001-2003 Electronic Arts Inc.																				//
//																																						//
////////////////////////////////////////////////////////////////////////////////

// FILE: Language.h ///////////////////////////////////////////////////////////
//-----------------------------------------------------------------------------
//                                                                          
//                       Westwood Studios Pacific.                          
//                                                                          
//                       Confidential Information					         
//                Copyright (C) 2001 - All Rights Reserved                  
//                                                                          
//-----------------------------------------------------------------------------
//
// Project:    RTS3
//
// File name:  Language.h
//
// Created:    Colin Day, June 2001
//
// Desc:       Header for dealing with multiple languages
//
//-----------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////

#pragma once

#ifndef __LANGUAGE_H_
#define __LANGUAGE_H_

// SYSTEM INCLUDES ////////////////////////////////////////////////////////////

// USER INCLUDES //////////////////////////////////////////////////////////////

// FORWARD REFERENCES /////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// TYPE DEFINES ///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

// IMPORTANT: Make sure this enum is identical to the one in Noxstring tool
typedef enum
{

	LANGUAGE_ID_US = 0,
	LANGUAGE_ID_BRITISH,
	LANGUAGE_ID_GERMAN,
	LANGUAGE_ID_FRENCH,
	LANGUAGE_ID_SPANISH,
	LANGUAGE_ID_ITALIAN,
	LANGUAGE_ID_JAPANESE,
	LANGUAGE_ID_JABBER,
	LANGUAGE_ID_KOREAN,
	LANGUAGE_ID_CHINESE,
	LANGUAGE_ID_UNKNOWN,
	LANGUAGE_ID_UNUSED_1, // Maybe remove
	LANGUAGE_ID_BRAZILIAN,
	LANGUAGE_ID_POLISH,
	LANGUAGE_ID_RUSSIAN,
	LANGUAGE_ID_ARABIC,
	LANGUAGE_ID_UKRAINIAN,
	LANGUAGE_ID_SWEDISH,
	LANGUAGE_ID_ABKHAZIAN,
	LANGUAGE_ID_AFAR,
	LANGUAGE_ID_AFRIKAANS,
	LANGUAGE_ID_AKAN,
	LANGUAGE_ID_ALBANIAN,
	LANGUAGE_ID_AMHARIC,
	LANGUAGE_ID_ARAGONESE,
	LANGUAGE_ID_ARMENIAN,
	LANGUAGE_ID_ASSAMESE,
	LANGUAGE_ID_AVARIC,
	LANGUAGE_ID_AVESTAN,
	LANGUAGE_ID_AYMARA,
	LANGUAGE_ID_AZERBAIJANI,
	LANGUAGE_ID_BAMBARA,
	LANGUAGE_ID_BASHKIR,
	LANGUAGE_ID_BASQUE,
	LANGUAGE_ID_BELARUSIAN,
	LANGUAGE_ID_BENGALI,
	LANGUAGE_ID_BISLAMA,
	LANGUAGE_ID_BOSNIAN,
	LANGUAGE_ID_BRETON,
	LANGUAGE_ID_BULGARIAN,
	LANGUAGE_ID_BURMESE,
	LANGUAGE_ID_CATALAN,
	LANGUAGE_ID_CHAMORRO,
	LANGUAGE_ID_CHECHEN,
	LANGUAGE_ID_CHICHEWA,
	LANGUAGE_ID_SLAVONIC,
	LANGUAGE_ID_CHUVASH,
	LANGUAGE_ID_CORNISH,
	LANGUAGE_ID_CORSICAN,
	LANGUAGE_ID_CREE,
	LANGUAGE_ID_CROATIAN,
	LANGUAGE_ID_CZECH,
	LANGUAGE_ID_DANISH,
	LANGUAGE_ID_DIVEHI,
	LANGUAGE_ID_DUTCH,
	LANGUAGE_ID_DZONGKHA,
	LANGUAGE_ID_ESPERANTO,
	LANGUAGE_ID_ESTONIAN,
	LANGUAGE_ID_EWE,
	LANGUAGE_ID_FAROESE,
	LANGUAGE_ID_FIJIAN,
	LANGUAGE_ID_FINNISH,
	LANGUAGE_ID_FRISIAN,
	LANGUAGE_ID_FULAH,
	LANGUAGE_ID_GAELIC,
	LANGUAGE_ID_GALICIAN,
	LANGUAGE_ID_GANDA,
	LANGUAGE_ID_GEORGIAN,
	LANGUAGE_ID_GREEK,
	LANGUAGE_ID_KALAALLISUT,
	LANGUAGE_ID_GUARANI,
	LANGUAGE_ID_GUJARATI,
	LANGUAGE_ID_HAITIAN,
	LANGUAGE_ID_HAUSA,
	LANGUAGE_ID_HEBREW,
	LANGUAGE_ID_HERERO,
	LANGUAGE_ID_HINDI,
	LANGUAGE_ID_HIRIMOTU,
	LANGUAGE_ID_HUNGARIAN,
	LANGUAGE_ID_ICELANDIC,
	LANGUAGE_ID_IDO,
	LANGUAGE_ID_IGBO,
	LANGUAGE_ID_INDONESIAN,
	LANGUAGE_ID_INUKTITUT,
	LANGUAGE_ID_INUPIAQ,
	LANGUAGE_ID_IRISH,
	LANGUAGE_ID_JAVANESE,
	LANGUAGE_ID_KANNADA,
	LANGUAGE_ID_KANURI,
	LANGUAGE_ID_KASHMIRI,
	LANGUAGE_ID_KAZAKH,
	LANGUAGE_ID_KHMER,
	LANGUAGE_ID_KIKUYU,
	LANGUAGE_ID_KINYARWANDA,
	LANGUAGE_ID_KYRGYZ,
	LANGUAGE_ID_KOMI,
	LANGUAGE_ID_KONGO,
	LANGUAGE_ID_KUANYAMA,
	LANGUAGE_ID_KURDISH,
	LANGUAGE_ID_LAO,
	LANGUAGE_ID_LATIN,
	LANGUAGE_ID_LATVIAN,
	LANGUAGE_ID_LIMBURGAN,
	LANGUAGE_ID_LINGALA,
	LANGUAGE_ID_LITHUANIAN,
	LANGUAGE_ID_LUBAKATANGA,
	LANGUAGE_ID_LUXEMBOURGISH,
	LANGUAGE_ID_MACEDONIAN,
	LANGUAGE_ID_MALAGASY,
	LANGUAGE_ID_MALAY,
	LANGUAGE_ID_MALAYALAM,
	LANGUAGE_ID_MALTESE,
	LANGUAGE_ID_MANX,
	LANGUAGE_ID_MAORI,
	LANGUAGE_ID_MARATHI,
	LANGUAGE_ID_MARSHALLESE,
	LANGUAGE_ID_MONGOLIAN,
	LANGUAGE_ID_NAURU,
	LANGUAGE_ID_NAVAJO,
	LANGUAGE_ID_NORTHNDEBELE,
	LANGUAGE_ID_SOUTHNDEBELE,
	LANGUAGE_ID_NDONGA,
	LANGUAGE_ID_NEPALI,
	LANGUAGE_ID_NORWEGIAN,
	LANGUAGE_ID_NORWEGIANBOKMAL,
	LANGUAGE_ID_NORWEGIANNYNORSK,
	LANGUAGE_ID_OCCITAN,
	LANGUAGE_ID_OJIBWA,
	LANGUAGE_ID_ORIYA,
	LANGUAGE_ID_OROMO,
	LANGUAGE_ID_OSSETIAN,
	LANGUAGE_ID_PALI,
	LANGUAGE_ID_PASHTO,
	LANGUAGE_ID_PERSIAN,
	LANGUAGE_ID_PORTUGUESE,
	LANGUAGE_ID_PUNJABI,
	LANGUAGE_ID_QUECHUA,
	LANGUAGE_ID_ROMANIAN,
	LANGUAGE_ID_ROMANSH,
	LANGUAGE_ID_RUNDI,
	LANGUAGE_ID_SAMI,
	LANGUAGE_ID_SAMOAN,
	LANGUAGE_ID_SANGO,
	LANGUAGE_ID_SANSKRIT,
	LANGUAGE_ID_SARDINIAN,
	LANGUAGE_ID_SERBIAN,
	LANGUAGE_ID_SHONA,
	LANGUAGE_ID_SINDHI,
	LANGUAGE_ID_SINHALA,
	LANGUAGE_ID_SLOVAK,
	LANGUAGE_ID_SLOVENIAN,
	LANGUAGE_ID_SOMALI,
	LANGUAGE_ID_SOUTHERNSOTHO,
	LANGUAGE_ID_SUNDANESE,
	LANGUAGE_ID_SWAHILI,
	LANGUAGE_ID_SWATI,
	LANGUAGE_ID_TAGALOG,
	LANGUAGE_ID_TAHITIAN,
	LANGUAGE_ID_TAJIK,
	LANGUAGE_ID_TAMIL,
	LANGUAGE_ID_TATAR,
	LANGUAGE_ID_TELUGU,
	LANGUAGE_ID_THAI,
	LANGUAGE_ID_TIBETAN,
	LANGUAGE_ID_TIGRINYA,
	LANGUAGE_ID_TONGA,
	LANGUAGE_ID_TSONGA,
	LANGUAGE_ID_TSWANA,
	LANGUAGE_ID_TURKISH,
	LANGUAGE_ID_TURKMEN,
	LANGUAGE_ID_TWI,
	LANGUAGE_ID_UIGHUR,
	LANGUAGE_ID_URDU,
	LANGUAGE_ID_UZBEK,
	LANGUAGE_ID_VENDA,
	LANGUAGE_ID_VIETNAMESE,
	LANGUAGE_ID_VOLAPUK, 
	LANGUAGE_ID_WALLOON,
	LANGUAGE_ID_WELSH,
	LANGUAGE_ID_WOLOF,
	LANGUAGE_ID_XHOSA,
	LANGUAGE_ID_SICHUANYI,
	LANGUAGE_ID_YIDDISH,
	LANGUAGE_ID_YORUBA,
	LANGUAGE_ID_ZHUANG,
	LANGUAGE_ID_ZULU

} LanguageID;

#define GameStrcpy wcscpy
#define GameStrncpy wcsncpy
#define GameStrlen wcslen
#define GameStrcat wcscat
#define GameStrcmp wcscmp
#define GameStrncmp wcsncmp
#define GameStricmp wcsicmp
#define GameStrnicmp wcsnicmp
#define GameStrtok wcstok
#define GameSprintf swprintf
#define GameVsprintf vswprintf
/// @todo -- add a non-malloc-based string dup func #define GameStrdup wcsdup
#define GameAtoi(S) wcstol( (S), NULL, 10)
#define GameAtod(S) wcstod( (S), NULL )
#define GameItoa _itow
#define GameSscanf swscanf
#define GameStrstr wcsstr 
#define GameStrchr wcschr
#define GameIsDigit iswdigit
#define GameIsAscii iswascii
#define GameIsAlNum iswalnum
#define GameIsAlpha iswalpha
#define GameArrayEnd(array) (array)[(sizeof(array)/sizeof((array)[0]))-1] = 0

// INLINING ///////////////////////////////////////////////////////////////////

// EXTERNALS //////////////////////////////////////////////////////////////////
extern LanguageID OurLanguage;  ///< our current language definition

#endif // __LANGUAGE_H_

