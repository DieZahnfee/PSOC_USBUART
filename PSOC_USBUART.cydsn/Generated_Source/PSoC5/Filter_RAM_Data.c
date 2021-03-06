#include "Filter.h"
#include "Filter_PVT.h"

const uint8 CYCODE Filter_control[] = 
{
    0x20u, 0x13u, 0x00u, 0x25u, 0x61u, 0x17u, 0x80u, 0x26u,
    0x01u, 0x00u, 0x80u, 0x26u, 0xE0u, 0x0Eu, 0x80u, 0x26u,
    0xC2u, 0x0Cu, 0x80u, 0x26u, 0x02u, 0x00u, 0x80u, 0x06u,
    0x65u, 0x87u, 0x18u, 0x6Du, 0x64u, 0x09u, 0x18u, 0x3Eu,
    0x00u, 0x00u, 0x80u, 0x26u, 0x03u, 0x20u, 0x80u, 0x26u,
    0x21u, 0x02u, 0x18u, 0x7Fu, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
   };

const uint8 CYCODE Filter_data_a[] = 
{
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
   };

const uint8 CYCODE Filter_data_b[] = 
{
    0x70u, 0x09u, 0x00u, 0x00u, 0xCEu, 0x0Au, 0x00u, 0x00u,
    0x36u, 0x0Cu, 0x00u, 0x00u, 0xAAu, 0x0Du, 0x00u, 0x00u,
    0x26u, 0x0Fu, 0x00u, 0x00u, 0xA4u, 0x10u, 0x00u, 0x00u,
    0x14u, 0x12u, 0x00u, 0x00u, 0x66u, 0x13u, 0x00u, 0x00u,
    0x80u, 0x14u, 0x00u, 0x00u, 0x48u, 0x15u, 0x00u, 0x00u,
    0x9Du, 0x15u, 0x00u, 0x00u, 0x5Cu, 0x15u, 0x00u, 0x00u,
    0x62u, 0x14u, 0x00u, 0x00u, 0x8Au, 0x12u, 0x00u, 0x00u,
    0xB0u, 0x0Fu, 0x00u, 0x00u, 0xB7u, 0x0Bu, 0x00u, 0x00u,
    0x82u, 0x06u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x25u, 0xF8u, 0xFFu, 0x00u, 0xF2u, 0xEEu, 0xFFu, 0x00u,
    0x73u, 0xE4u, 0xFFu, 0x00u, 0xC0u, 0xD8u, 0xFFu, 0x00u,
    0x01u, 0xCCu, 0xFFu, 0x00u, 0x6Eu, 0xBEu, 0xFFu, 0x00u,
    0x4Au, 0xB0u, 0xFFu, 0x00u, 0xEAu, 0xA1u, 0xFFu, 0x00u,
    0xB2u, 0x93u, 0xFFu, 0x00u, 0x0Fu, 0x86u, 0xFFu, 0x00u,
    0x7Eu, 0x79u, 0xFFu, 0x00u, 0x82u, 0x6Eu, 0xFFu, 0x00u,
    0xA8u, 0x65u, 0xFFu, 0x00u, 0x7Eu, 0x5Fu, 0xFFu, 0x00u,
    0x96u, 0x5Cu, 0xFFu, 0x00u, 0x7Eu, 0x5Du, 0xFFu, 0x00u,
    0xBFu, 0x62u, 0xFFu, 0x00u, 0xD9u, 0x6Cu, 0xFFu, 0x00u,
    0x3Du, 0x7Cu, 0xFFu, 0x00u, 0x4Eu, 0x91u, 0xFFu, 0x00u,
    0x59u, 0xACu, 0xFFu, 0x00u, 0x95u, 0xCDu, 0xFFu, 0x00u,
    0x20u, 0xF5u, 0xFFu, 0x00u, 0xFCu, 0x22u, 0x00u, 0x00u,
    0x0Cu, 0x57u, 0x00u, 0x00u, 0x16u, 0x91u, 0x00u, 0x00u,
    0xC0u, 0xD0u, 0x00u, 0x00u, 0x93u, 0x15u, 0x01u, 0x00u,
    0xF9u, 0x5Eu, 0x01u, 0x00u, 0x3Eu, 0xACu, 0x01u, 0x00u,
    0x96u, 0xFCu, 0x01u, 0x00u, 0x1Fu, 0x4Fu, 0x02u, 0x00u,
    0xE0u, 0xA2u, 0x02u, 0x00u, 0xD4u, 0xF6u, 0x02u, 0x00u,
    0xE9u, 0x49u, 0x03u, 0x00u, 0x07u, 0x9Bu, 0x03u, 0x00u,
    0x15u, 0xE9u, 0x03u, 0x00u, 0xFEu, 0x32u, 0x04u, 0x00u,
    0xB7u, 0x77u, 0x04u, 0x00u, 0x43u, 0xB6u, 0x04u, 0x00u,
    0xB8u, 0xEDu, 0x04u, 0x00u, 0x45u, 0x1Du, 0x05u, 0x00u,
    0x33u, 0x44u, 0x05u, 0x00u, 0xECu, 0x61u, 0x05u, 0x00u,
    0xFFu, 0x75u, 0x05u, 0x00u, 0x1Cu, 0x80u, 0x05u, 0x00u,
    0x1Cu, 0x80u, 0x05u, 0x00u, 0xFFu, 0x75u, 0x05u, 0x00u,
    0xECu, 0x61u, 0x05u, 0x00u, 0x33u, 0x44u, 0x05u, 0x00u,
    0x45u, 0x1Du, 0x05u, 0x00u, 0xB8u, 0xEDu, 0x04u, 0x00u,
    0x43u, 0xB6u, 0x04u, 0x00u, 0xB7u, 0x77u, 0x04u, 0x00u,
    0xFEu, 0x32u, 0x04u, 0x00u, 0x15u, 0xE9u, 0x03u, 0x00u,
    0x07u, 0x9Bu, 0x03u, 0x00u, 0xE9u, 0x49u, 0x03u, 0x00u,
    0xD4u, 0xF6u, 0x02u, 0x00u, 0xE0u, 0xA2u, 0x02u, 0x00u,
    0x1Fu, 0x4Fu, 0x02u, 0x00u, 0x96u, 0xFCu, 0x01u, 0x00u,
    0x3Eu, 0xACu, 0x01u, 0x00u, 0xF9u, 0x5Eu, 0x01u, 0x00u,
    0x93u, 0x15u, 0x01u, 0x00u, 0xC0u, 0xD0u, 0x00u, 0x00u,
    0x16u, 0x91u, 0x00u, 0x00u, 0x0Cu, 0x57u, 0x00u, 0x00u,
    0xFCu, 0x22u, 0x00u, 0x00u, 0x20u, 0xF5u, 0xFFu, 0x00u,
    0x95u, 0xCDu, 0xFFu, 0x00u, 0x59u, 0xACu, 0xFFu, 0x00u,
    0x4Eu, 0x91u, 0xFFu, 0x00u, 0x3Du, 0x7Cu, 0xFFu, 0x00u,
    0xD9u, 0x6Cu, 0xFFu, 0x00u, 0xBFu, 0x62u, 0xFFu, 0x00u,
    0x7Eu, 0x5Du, 0xFFu, 0x00u, 0x96u, 0x5Cu, 0xFFu, 0x00u,
    0x7Eu, 0x5Fu, 0xFFu, 0x00u, 0xA8u, 0x65u, 0xFFu, 0x00u,
    0x82u, 0x6Eu, 0xFFu, 0x00u, 0x7Eu, 0x79u, 0xFFu, 0x00u,
    0x0Fu, 0x86u, 0xFFu, 0x00u, 0xB2u, 0x93u, 0xFFu, 0x00u,
    0xEAu, 0xA1u, 0xFFu, 0x00u, 0x4Au, 0xB0u, 0xFFu, 0x00u,
    0x6Eu, 0xBEu, 0xFFu, 0x00u, 0x01u, 0xCCu, 0xFFu, 0x00u,
    0xC0u, 0xD8u, 0xFFu, 0x00u, 0x73u, 0xE4u, 0xFFu, 0x00u,
    0xF2u, 0xEEu, 0xFFu, 0x00u, 0x25u, 0xF8u, 0xFFu, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x82u, 0x06u, 0x00u, 0x00u,
    0xB7u, 0x0Bu, 0x00u, 0x00u, 0xB0u, 0x0Fu, 0x00u, 0x00u,
    0x8Au, 0x12u, 0x00u, 0x00u, 0x62u, 0x14u, 0x00u, 0x00u,
    0x5Cu, 0x15u, 0x00u, 0x00u, 0x9Du, 0x15u, 0x00u, 0x00u,
    0x48u, 0x15u, 0x00u, 0x00u, 0x80u, 0x14u, 0x00u, 0x00u,
    0x66u, 0x13u, 0x00u, 0x00u, 0x14u, 0x12u, 0x00u, 0x00u,
    0xA4u, 0x10u, 0x00u, 0x00u, 0x26u, 0x0Fu, 0x00u, 0x00u,
    0xAAu, 0x0Du, 0x00u, 0x00u, 0x36u, 0x0Cu, 0x00u, 0x00u,
    0xCEu, 0x0Au, 0x00u, 0x00u, 0x70u, 0x09u, 0x00u, 0x00u,
   };

const uint8 CYCODE Filter_acu[] = 
{
    0xFFu, 0x3Fu, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
   };

const uint8 CYCODE Filter_cfsm[] = 
{
    0x21u, 0xF8u, 0x05u, 0x01u, 0x42u, 0x10u, 0x86u, 0x40u,
    0x64u, 0xF8u, 0x15u, 0x01u, 0x81u, 0xF8u, 0x05u, 0x01u,
    0x43u, 0x51u, 0x8Eu, 0x21u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
   };

