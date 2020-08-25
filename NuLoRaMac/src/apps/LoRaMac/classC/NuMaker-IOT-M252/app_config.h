/****************************************************************************
 * @file     app_config.h
 * @version  V1.10
 * @brief    Application configuration
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __APP_CONFIG_H__
#define __APP_CONFIG_H__

/*!
 * When using ABP activation the MAC layer must know in advance to which server
 * version it will be connected.
 */
#define ABP_ACTIVATION_LRWAN_VERSION_V10x                  0x01000300 // 1.0.3.0

#define ABP_ACTIVATION_LRWAN_VERSION                       ABP_ACTIVATION_LRWAN_VERSION_V10x

/*!
 * Indicates if the end-device is to be connected to a private or public network
 */
#define LORAWAN_PUBLIC_NETWORK                             true

/*!
 * Current network ID
 */
#define LORAWAN_NETWORK_ID                                 ( uint32_t )0

/*!
 * Device address on the network (big endian). Used by ABP
 */
#define LORAWAN_DEVICE_ADDRESS                             ( uint32_t )0x26011E66

/*!
 * Device active region. LORAMAC_REGION_AU915/LORAMAC_REGION_CN470/LORAMAC_REGION_US915/LORAMAC_REGION_EU868
 */
#define ACTIVE_REGION										LORAMAC_REGION_US915

#endif
