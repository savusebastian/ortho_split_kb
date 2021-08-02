#pragma once

#include "quantum.h"

#define ___ KC_NO


// See keymaps folder for keys layout
#define LAYOUT( \
	K00, K01, K02, K03, K04, K05, K06,            K07, K08, K09, K10, K11, K12, K13, \
	K14, K15, K16, K17, K18, K19, K20,            K21, K22, K23, K24, K25, K26, K27, \
	K28, K29, K30, K31, K32, K33, K34,            K35, K36, K37, K38, K39, K40, K41, \
	K42, K43, K44, K45, K46, K47, K48,            K49, K50, K51, K52, K53, K54,      \
	K55, K56, K57, K58, K59, K60, K61,            K62, K63, K64, K65, K66, K67, K68, \
	K69, K70, K71, K72, K73,                           K74, K75, K76, K77, K78, K79  \
) { \
	{K00, K01, K02, K03, K04, K05, K06}, \
	{K14, K15, K16, K17, K18, K19, K20}, \
	{K28, K29, K30, K31, K32, K33, K34}, \
	{K42, K43, K44, K45, K46, K47, K48}, \
	{K55, K56, K57, K58, K59, K60, K61}, \
	{K69, K70, K71, K72, K73, ___, ___}, \
	{K07, K08, K09, K10, K11, K12, K13}, \ // Right side starts with this row
	{K21, K22, K23, K24, K25, K26, K27}, \
	{K35, K36, K37, K38, K39, K40, K41}, \
	{K49, K50, K51, K52, K53, K54, ___}, \
	{K62, K63, K64, K65, K66, K67, K68}, \
	{___, K74, K75, K76, K77, K78, K79}  \
}
