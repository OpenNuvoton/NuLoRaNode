/****************************************************************************
 * @file     factory_json.h
 * @version  V1.10
 * @brief    Device factory parameter file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#ifndef __FACTORY_JSON__
#define __FACTORY_JSON__

char g_factory_json [] = 
"\
{ \n\
\"ActivationOTAA\":\"0\", \n\
\"DeviceAddr\":[\"0x32\",\"0x70\",\"0x50\",\"0x00\"], \n\
\"DEVICE_EUI\":[\"0x00\",\"0x01\",\"0x02\",\"0x03\",\"0x04\",\"0x05\",\"0x06\",\"0x07\"], \n\
\"JOIN_EUI\":[\"0x00\",\"0x01\",\"0x02\",\"0x03\",\"0x04\",\"0x05\",\"0x06\",\"0x07\"], \n\
\"PIN_CODE\":[\"0x00\",\"0x01\",\"0x02\",\"0x03\"], \n\
\"NWK_KEY\":[\"0xD0\",\"0xBD\",\"0xC2\",\"0x67\",\"0xA3\",\"0xE0\",\"0x39\",\"0x28\",\"0x62\",\"0x0B\",\"0x26\",\"0xC2\",\"0xFE\",\"0xE4\",\"0xC9\",\"0x96\"], \n\
\"APP_KEY\":[\"0xF7\",\"0x3F\",\"0x52\",\"0x0F\",\"0x24\",\"0x5A\",\"0xA9\",\"0xD3\",\"0xFA\",\"0x29\",\"0x19\",\"0x5A\",\"0xF1\",\"0x1A\",\"0xA0\",\"0x39\"] \n\
} \n\
";

#endif

