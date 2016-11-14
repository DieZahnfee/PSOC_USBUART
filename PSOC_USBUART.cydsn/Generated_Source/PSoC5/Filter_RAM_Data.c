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
    0xDCu, 0xF4u, 0xFFu, 0x00u, 0x36u, 0xF3u, 0xFFu, 0x00u,
    0x24u, 0xF7u, 0xFFu, 0x00u, 0x84u, 0xFFu, 0xFFu, 0x00u,
    0x3Bu, 0x09u, 0x00u, 0x00u, 0x21u, 0x10u, 0x00u, 0x00u,
    0x8Du, 0x10u, 0x00u, 0x00u, 0x0Du, 0x09u, 0x00u, 0x00u,
    0x99u, 0xFBu, 0xFFu, 0x00u, 0x70u, 0xEDu, 0xFFu, 0x00u,
    0x5Bu, 0xE5u, 0xFFu, 0x00u, 0xB2u, 0xE8u, 0xFFu, 0x00u,
    0x5Du, 0xF8u, 0xFFu, 0x00u, 0x51u, 0x0Fu, 0x00u, 0x00u,
    0xB8u, 0x23u, 0x00u, 0x00u, 0xD3u, 0x2Au, 0x00u, 0x00u,
    0x38u, 0x1Eu, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x89u, 0xDBu, 0xFFu, 0x00u, 0xA7u, 0xC1u, 0xFFu, 0x00u,
    0x46u, 0xC1u, 0xFFu, 0x00u, 0x91u, 0xDFu, 0xFFu, 0x00u,
    0x7Au, 0x13u, 0x00u, 0x00u, 0x8Bu, 0x47u, 0x00u, 0x00u,
    0x46u, 0x62u, 0x00u, 0x00u, 0x10u, 0x52u, 0x00u, 0x00u,
    0x40u, 0x17u, 0x00u, 0x00u, 0x17u, 0xC7u, 0xFFu, 0x00u,
    0xDEu, 0x84u, 0xFFu, 0x00u, 0xF9u, 0x72u, 0xFFu, 0x00u,
    0xFBu, 0xA1u, 0xFFu, 0x00u, 0xB6u, 0x05u, 0x00u, 0x00u,
    0x8Fu, 0x76u, 0x00u, 0x00u, 0x5Bu, 0xC0u, 0x00u, 0x00u,
    0x99u, 0xB9u, 0x00u, 0x00u, 0x17u, 0x59u, 0x00u, 0x00u,
    0x3Fu, 0xBFu, 0xFFu, 0x00u, 0xD9u, 0x2Cu, 0xFFu, 0x00u,
    0xEBu, 0xE8u, 0xFEu, 0x00u, 0xC2u, 0x1Fu, 0xFFu, 0x00u,
    0xE0u, 0xC9u, 0xFFu, 0x00u, 0xD0u, 0xA7u, 0x00u, 0x00u,
    0xE1u, 0x57u, 0x01u, 0x00u, 0x38u, 0x7Fu, 0x01u, 0x00u,
    0xBBu, 0xF5u, 0x00u, 0x00u, 0xB3u, 0xE0u, 0xFFu, 0x00u,
    0x49u, 0xADu, 0xFEu, 0x00u, 0xB3u, 0xE8u, 0xFDu, 0x00u,
    0x6Au, 0x03u, 0xFEu, 0x00u, 0x16u, 0x18u, 0xFFu, 0x00u,
    0xB2u, 0xD0u, 0x00u, 0x00u, 0x7Bu, 0x7Au, 0x02u, 0x00u,
    0x07u, 0x47u, 0x03u, 0x00u, 0xCFu, 0xA4u, 0x02u, 0x00u,
    0x9Du, 0x8Cu, 0x00u, 0x00u, 0x98u, 0xA1u, 0xFDu, 0x00u,
    0x32u, 0x10u, 0xFBu, 0x00u, 0xBBu, 0x30u, 0xFAu, 0x00u,
    0x0Bu, 0x0Bu, 0xFCu, 0x00u, 0xDDu, 0xE7u, 0x00u, 0x00u,
    0x2Fu, 0x1Bu, 0x08u, 0x00u, 0xA4u, 0x20u, 0x10u, 0x00u,
    0xBDu, 0x05u, 0x17u, 0x00u, 0xA9u, 0x00u, 0x1Bu, 0x00u,
    0xA9u, 0x00u, 0x1Bu, 0x00u, 0xBDu, 0x05u, 0x17u, 0x00u,
    0xA4u, 0x20u, 0x10u, 0x00u, 0x2Fu, 0x1Bu, 0x08u, 0x00u,
    0xDDu, 0xE7u, 0x00u, 0x00u, 0x0Bu, 0x0Bu, 0xFCu, 0x00u,
    0xBBu, 0x30u, 0xFAu, 0x00u, 0x32u, 0x10u, 0xFBu, 0x00u,
    0x98u, 0xA1u, 0xFDu, 0x00u, 0x9Du, 0x8Cu, 0x00u, 0x00u,
    0xCFu, 0xA4u, 0x02u, 0x00u, 0x07u, 0x47u, 0x03u, 0x00u,
    0x7Bu, 0x7Au, 0x02u, 0x00u, 0xB2u, 0xD0u, 0x00u, 0x00u,
    0x16u, 0x18u, 0xFFu, 0x00u, 0x6Au, 0x03u, 0xFEu, 0x00u,
    0xB3u, 0xE8u, 0xFDu, 0x00u, 0x49u, 0xADu, 0xFEu, 0x00u,
    0xB3u, 0xE0u, 0xFFu, 0x00u, 0xBBu, 0xF5u, 0x00u, 0x00u,
    0x38u, 0x7Fu, 0x01u, 0x00u, 0xE1u, 0x57u, 0x01u, 0x00u,
    0xD0u, 0xA7u, 0x00u, 0x00u, 0xE0u, 0xC9u, 0xFFu, 0x00u,
    0xC2u, 0x1Fu, 0xFFu, 0x00u, 0xEBu, 0xE8u, 0xFEu, 0x00u,
    0xD9u, 0x2Cu, 0xFFu, 0x00u, 0x3Fu, 0xBFu, 0xFFu, 0x00u,
    0x17u, 0x59u, 0x00u, 0x00u, 0x99u, 0xB9u, 0x00u, 0x00u,
    0x5Bu, 0xC0u, 0x00u, 0x00u, 0x8Fu, 0x76u, 0x00u, 0x00u,
    0xB6u, 0x05u, 0x00u, 0x00u, 0xFBu, 0xA1u, 0xFFu, 0x00u,
    0xF9u, 0x72u, 0xFFu, 0x00u, 0xDEu, 0x84u, 0xFFu, 0x00u,
    0x17u, 0xC7u, 0xFFu, 0x00u, 0x40u, 0x17u, 0x00u, 0x00u,
    0x10u, 0x52u, 0x00u, 0x00u, 0x46u, 0x62u, 0x00u, 0x00u,
    0x8Bu, 0x47u, 0x00u, 0x00u, 0x7Au, 0x13u, 0x00u, 0x00u,
    0x91u, 0xDFu, 0xFFu, 0x00u, 0x46u, 0xC1u, 0xFFu, 0x00u,
    0xA7u, 0xC1u, 0xFFu, 0x00u, 0x89u, 0xDBu, 0xFFu, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x38u, 0x1Eu, 0x00u, 0x00u,
    0xD3u, 0x2Au, 0x00u, 0x00u, 0xB8u, 0x23u, 0x00u, 0x00u,
    0x51u, 0x0Fu, 0x00u, 0x00u, 0x5Du, 0xF8u, 0xFFu, 0x00u,
    0xB2u, 0xE8u, 0xFFu, 0x00u, 0x5Bu, 0xE5u, 0xFFu, 0x00u,
    0x70u, 0xEDu, 0xFFu, 0x00u, 0x99u, 0xFBu, 0xFFu, 0x00u,
    0x0Du, 0x09u, 0x00u, 0x00u, 0x8Du, 0x10u, 0x00u, 0x00u,
    0x21u, 0x10u, 0x00u, 0x00u, 0x3Bu, 0x09u, 0x00u, 0x00u,
    0x84u, 0xFFu, 0xFFu, 0x00u, 0x24u, 0xF7u, 0xFFu, 0x00u,
    0x36u, 0xF3u, 0xFFu, 0x00u, 0xDCu, 0xF4u, 0xFFu, 0x00u,
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

