/**
 * @brief       GPS NMEA header file to define data and export functions.
 * @file        nmea.h - Source code filename.
 * @author      Leandro Daniel Huff - leandrohuff@programmer.net
 * @date        2022/03/15 - Source code date.
 * @version     0.0.1 - Source code version.
 * @copyright   Creative Commons Legal Code.

                CC0 1.0 Universal

                CREATIVE COMMONS CORPORATION IS NOT A LAW FIRM AND DOES NOT PROVIDE
                LEGAL SERVICES. DISTRIBUTION OF THIS DOCUMENT DOES NOT CREATE AN
                ATTORNEY-CLIENT RELATIONSHIP. CREATIVE COMMONS PROVIDES THIS
                INFORMATION ON AN "AS-IS" BASIS. CREATIVE COMMONS MAKES NO WARRANTIES
                REGARDING THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS
                PROVIDED HEREUNDER, AND DISCLAIMS LIABILITY FOR DAMAGES RESULTING FROM
                THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS PROVIDED
                HEREUNDER.
 */

#ifndef __NMEA_H_
#define __NMEA_H_


/******************************************************************************
    INCLUDES (LIBS/SYSTEM)
******************************************************************************/


/******************************************************************************
    INCLUDES (USER)
******************************************************************************/
#include "../Resources/defs.h"

/******************************************************************************
    DEFINES - FOR GLOBAL/SYSTEM USE
******************************************************************************/
#define NMEA_ID_ERR     (-3)
#define NMEA_DECODE_ERR (-2)
#define NMEA_ERR        (-1)
#define NMEA_OK         ( 0)

/******************************************************************************
    TYPEDEFS - FOR GLOBAL/SYSTEM USE
******************************************************************************/
typedef enum
{
  DUMMY = 0,
  AAM,
  ALM,
  APA,
  APB,
  ASD,
  BEC,
  BOD,
  BWC,
  BWR,
  BWW,
  DBK,
  DBS,
  DBT,
  DCN,
  DPT,
  DSC,
  DSE,
  DSI,
  DSR,
  DTM,
  FSI,
  GBS,
  GGA,
  GLC,
  GLL,
  GRS,
  GST,
  GSA,
  GSV,
  GTD,
  GXA,
  HDG,
  HDM,
  HDT,
  HSC,
  LCD,
  MSK,
  MSS,
  MWD,
  MTW,
  MWV,
  OLN,
  OSD,
  ROO,
  RMA,
  RMB,
  RMC,
  ROT,
  RPM,
  RSA,
  RSD,
  RTE,
  SFI,
  STN,
  TLL,
  TRF,
  TTM,
  VBW,
  VDR,
  VHW,
  VLW,
  VPW,
  VTG,
  VWR,
  WCV,
  WDC,
  WDR,
  WNC,
  WPL,
  XDR,
  XTE,
  XTR,
  ZDA,
  ZDL,
  ZFO,
  ZTG,
  NMEA_MAX
} __attribute__((__packed__)) eNMEA_t;

typedef int(*nmea_parser_t)(void *);

/******************************************************************************
    DATA - EXPORTED FOR GLOBAL/SYSTEM USE
******************************************************************************/


/******************************************************************************
    FUNCTION PROTOTYPES - EXPORTED FOR GLOBAL/SYSTEM USE
******************************************************************************/
int    Dummy( void *param );
int errParse( void *param );
int aamParse( void *param );
int almParse( void *param );
int apaParse( void *param );
int apbParse( void *param );
int asdParse( void *param );
int becParse( void *param );
int bodParse( void *param );
int bwcParse( void *param );
int bwrParse( void *param );
int bwwParse( void *param );
int dbkParse( void *param );
int dbsParse( void *param );
int dbtParse( void *param );
int dcnParse( void *param );
int dptParse( void *param );
int dscParse( void *param );
int dseParse( void *param );
int dsiParse( void *param );
int dsrParse( void *param );
int dtmParse( void *param );
int fsiParse( void *param );
int gbsParse( void *param );
int ggaParse( void *param );
int glcParse( void *param );
int gllParse( void *param );
int grsParse( void *param );
int gstParse( void *param );
int gsaParse( void *param );
int gsvParse( void *param );
int gtdParse( void *param );
int gxaParse( void *param );
int hdgParse( void *param );
int hdmParse( void *param );
int hdtParse( void *param );
int hscParse( void *param );
int lcdParse( void *param );
int mskParse( void *param );
int mssParse( void *param );
int mwdParse( void *param );
int mtwParse( void *param );
int mwvParse( void *param );
int olnParse( void *param );
int osdParse( void *param );
int rodParse( void *param );
int rmaParse( void *param );
int rmbParse( void *param );
int rmcParse( void *param );
int rotParse( void *param );
int rpmParse( void *param );
int rsaParse( void *param );
int srdParse( void *param );
int rteParse( void *param );
int sfiParse( void *param );
int stnParse( void *param );
int ttlParse( void *param );
int trfParse( void *param );
int ttmParse( void *param );
int vmwParse( void *param );
int vdrParse( void *param );
int vhwParse( void *param );
int vlwParse( void *param );
int vpwParse( void *param );
int vtgParse( void *param );
int vwrParse( void *param );
int wcvParse( void *param );
int wdcParse( void *param );
int wdrParse( void *param );
int wncParse( void *param );
int wplParse( void *param );
int xdrParse( void *param );
int xteParse( void *param );
int xtrParse( void *param );
int zdaParse( void *param );
int zdlParse( void *param );
int zfoParse( void *param );
int ztgParse( void *param );

int nmeaDecodeId( const char * str );

int nmeaDecodeMessage( char * data );

/******************************************************************************
    END OF FILE - TEMPLATE.H
******************************************************************************/

#endif  // #ifndef __NMEA_H_
