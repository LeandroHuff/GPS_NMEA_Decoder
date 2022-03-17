/**
 * @brief       GPS NMEA source code file to implement functions decoders.
 * @file        nmea.c- Source code filename.
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

/******************************************************************************
    INCLUDES (LIBS/SYSTEM)
******************************************************************************/


/******************************************************************************
    INCLUDES (USER)
******************************************************************************/
#include "defs.h"
#include "nmea.h"

/******************************************************************************
    DEFINES (FOR LOCAL/FILE USE)
******************************************************************************/


/******************************************************************************
    TYPEDEFS (FOR LOCAL/FILE USE)
******************************************************************************/


/******************************************************************************
    DATA (FOR LOCAL/FILE USE)
******************************************************************************/

const nmea_parser_t nmeaParser[NMEA_MAX] =
{
  &Dummy,
  &aamParse,
  &almParse,
  &apaParse,
  &apbParse,
  &asdParse,
  &becParse,
  &bodParse,
  &bwcParse,
  &bwrParse,
  &bwwParse,
  &dbkParse,
  &dbsParse,
  &dbtParse,
  &dcnParse,
  &dptParse,
  &dscParse,
  &dseParse,
  &dsiParse,
  &dsrParse,
  &dtmParse,
  &fsiParse,
  &gbsParse,
  &ggaParse,
  &glcParse,
  &gllParse,
  &grsParse,
  &gstParse,
  &gsaParse,
  &gsvParse,
  &gtdParse,
  &gxaParse,
  &hdgParse,
  &hdmParse,
  &hdtParse,
  &hscParse,
  &lcdParse,
  &mskParse,
  &mssParse,
  &mwdParse,
  &mtwParse,
  &mwvParse,
  &olnParse,
  &osdParse,
  &rodParse,
  &rmaParse,
  &rmbParse,
  &rmcParse,
  &rotParse,
  &rpmParse,
  &rsaParse,
  &srdParse,
  &rteParse,
  &sfiParse,
  &stnParse,
  &ttlParse,
  &trfParse,
  &ttmParse,
  &vmwParse,
  &vdrParse,
  &vhwParse,
  &vlwParse,
  &vpwParse,
  &vtgParse,
  &vwrParse,
  &wcvParse,
  &wdcParse,
  &wdrParse,
  &wncParse,
  &wplParse,
  &xdrParse,
  &xteParse,
  &xtrParse,
  &zdaParse,
  &zdlParse,
  &zfoParse,
  &ztgParse
};


/******************************************************************************
    FUNCTION/SUBROUTINE PROTOTYPES (FOR LOCAL/FILE USE)
******************************************************************************/

int Dummy( void *param )
{
  UNUSED(param);
  return NMEA_ERR;
}

int errParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int aamParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int almParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int apaParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int apbParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int asdParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int becParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int bodParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int bwcParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int bwrParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int bwwParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int dbkParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int dbsParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int dbtParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int dcnParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int dptParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int dscParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int dseParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int dsiParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int dsrParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int dtmParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int fsiParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int gbsParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int ggaParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int glcParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int gllParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int grsParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int gstParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int gsaParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int gsvParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int gtdParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int gxaParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int hdgParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int hdmParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int hdtParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int hscParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int lcdParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int mskParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int mssParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int mwdParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int mtwParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int mwvParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int olnParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int osdParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int rodParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int rmaParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int rmbParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int rmcParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int rotParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int rpmParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int rsaParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int srdParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int rteParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int sfiParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int stnParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int ttlParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int trfParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int ttmParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int vmwParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int vdrParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int vhwParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int vlwParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int vpwParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int vtgParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int vwrParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int wcvParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int wdcParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int wdrParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int wncParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int wplParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int xdrParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int xteParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int xtrParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int zdaParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int zdlParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int zfoParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

int ztgParse( void *param )
{
  UNUSED(param);
  return NMEA_OK;
}

/******************************************************************************
    FUNCTION/SUBROUTINE IMPLEMENTATION (FOR LOCAL/FILE USE)
******************************************************************************/


/******************************************************************************
    DATA (EXPORTED - FOR GLOBAL/SYSTEM USE)
******************************************************************************/


/******************************************************************************
    FUNCTION/SUBROUTINE IMPLEMENTATION (EXPORTED - FOR GLOBAL/SYSTEM USE)
******************************************************************************/

/* Decode NMEA identifier from string */
int nmeaParseId( const char * str )
{
  if (('$' == str[0]) && ('G' == str[1]) && ('P' == str[2]))
  {
    switch( str[3] )
    {
      /* AAM, ALM, APA, APB, ASD */
      case 'A':
      {
        switch ( str[4] )
        {
          /* AAM */
          case 'A':

            if ('M' == str[5])
            {
              return AAM;
            }

            return NMEA_ERR;
            break;

          /* ALM */
          case 'L':

            if ('M'== str[5])
            {
              return ALM;
            }

            return NMEA_ERR;
            break;

          /* APA, APB */
          case 'P':

            /* APA - Autopilot Sentence "A" */
            if ('A' == str[5])
            {
              return APA;
            }

            /* APB - Autopilot Sentence "B"*/
            if ('B' == str[5])
            {
              return APB;
            }

            return NMEA_ERR;
            break;

          /* ASD - Autopilot System Data */
          case 'S':

            if ('D' == str[5])
            {
              return ASD;
            }

            return NMEA_ERR;
            break;

          default:

            return NMEA_ERR;
            break;
        }
      }

      /* BEC, BOD, BWC, BWR, BWW */
      case 'B':
      {
        if (('E' == str[4]) && ('C' == str[5]))
        {
          return BEC;
        }

        if (('O' == str[4]) && ('D' == str[5]))
        {
          return BOD;
        }

        if ('W' == str[4])
        {
          if ('C' == str[5])
          {
            return BWC;
          }

          if ('R' == str[5])
          {
            return BWR;
          }

          if ('W' == str[5])
          {
            return BWW;
          }

          //default from here!
          return NMEA_ERR;
        }

        return NMEA_ERR;
        break;
      }

      /* DBK, DBS, DBT, DCN, DPT, DSE, DSI, DSR, DTM */
      case 'D':
      {
        if ('B' == str[4])
        {
          if ('K' == str[5])
          {
            return DBK;
          }

          if ('S' == str[5])
          {
            return DBS;
          }

          if ('T' == str[5])
          {
            return DBT;
          }

          return NMEA_ERR;
        }

        if ('C' == str[4])
        {
          if ('N' == str[5])
          {
            return DCN;
          }

          return NMEA_ERR;
        }

        if ('P' == str[4])
        {
          if ('T' == str[5])
          {
            return DPT;
          }

          return NMEA_ERR;
        }

        if ('S' == str[4])
        {
          if ('C' == str[5])
          {
            return DSC;
          }

          if ('E' == str[5])
          {
            return DSE;
          }

          if ('I' == str[5])
          {
            return DSI;
          }

          if ('R' == str[5])
          {
            return DSR;
          }

          return NMEA_ERR;
        }

        if ('T' == str[4])
        {
          if ('M' == str[5])
          {
            return DTM;
          }

          return NMEA_ERR;
        }

        return NMEA_ERR;
        break;
      }

      /* FSI */
      case 'F':
      {
        if (('S' == str[4]) && ('I' == str[5]))
        {
          return FSI;
        }

        return NMEA_ERR;
        break;
      }

      /* GBS, GGA, GLC, GLL, GRS, GST, GSA, GSV, GTD, GXA */
      case 'G':
      {
        switch ( str[4] )
        {
          case 'B':

            if ('S' == str[5])
            {
              return GBS;
            }

            return NMEA_ERR;
            break;

          case 'G':

            if ('A' == str[5])
            {
              return GGA;
            }

            return NMEA_ERR;
            break;

          case 'L':

            if ('C' == str[5])
            {
              return GLC;
            }

            if ('L' == str[5])
            {
              return GLL;
            }

            return NMEA_ERR;
            break;

          case 'R':

            if ('S' == str[5])
            {
              return GRS;
            }

            return NMEA_ERR;
            break;

          case 'S':

            if ('A' == str[5])
            {
              return GSA;
            }

            if ('T' == str[5])
            {
              return GST;
            }

            if ('V' == str[5])
            {
              return GSV;
            }

            return NMEA_ERR;
            break;

          case 'T':

            if ('D' == str[5])
            {
              return GTD;
            }

            return NMEA_ERR;
            break;

          case 'X':

            if ('A' == str[5])
            {
              return GXA;
            }

            return NMEA_ERR;
            break;

          default:

            return NMEA_ERR;
            break;
        }

        return NMEA_ERR;
        break;
      }

      /* HDG, HDM, HDT, HSC */
      case 'H':
      {
        if ('D' == str[4])
        {
          if ('G' == str[5])
          {
            return HDG;
          }

          if ('M' == str[5])
          {
            return HDM;
          }

          if ('T' == str[5])
          {
            return HDT;
          }

          return NMEA_ERR;
        }

        if (('S' == str[4]) && ('C' == str[5]))
        {
          return HSC;
        }

        return NMEA_ERR;
        break;
      }

      /* LCD */
      case 'L':
      {
        if (('C' == str[4]) && ('D' == str[5]))
        {
          return LCD;
        }

        return NMEA_ERR;
        break;
      }

      /* MSK, MSS, MWD, MTW, MWV */
      case 'M':
      {
        if ('S' == str[4])
        {
          if ('K' == str[5])
          {
            return MSK;
          }

          if ('S' == str[5])
          {
            return MSS;
          }

          return NMEA_ERR;
        }

        if ('W' == str[4])
        {
          if ('D' == str[5])
          {
            return MWD;
          }

          if ('V' == str[5])
          {
            return MWV;
          }

          return NMEA_ERR;
        }

        if (('T' == str[4]) && ('W' == str[5]))
        {
          return MTW;
        }

        return NMEA_ERR;
        break;
      }

      /* OLN, OSD */
      case 'O':
      {
        if (('L' == str[4]) && ('N' == str[5]))
        {
          return OLN;
        }

        if (('S' == str[4]) && ('D' == str[5]))
        {
          return OSD;
        }

        return NMEA_ERR;
        break;
      }

      /* ROO, RMA, RMB, RMC, ROT, RPM, RSA, RSD, RTE */
      case 'R':
      {
        if ('O' == str[4])
        {
          if ('O' == str[5])
          {
            return ROO;
          }

          if ('T' == str[5])
          {
            return ROT;
          }

          return NMEA_ERR;
        }

        if ('M' == str[4])
        {
          if ('A' == str[5])
          {
            return RMA;
          }

          if ('B' == str[5])
          {
            return RMB;
          }

          if ('C' == str[5])
          {
            return RMC;
          }

          return NMEA_ERR;
        }

        if (('P' == str[4]) && ('M' == str[5]))
        {
          return RPM;
        }

        if ('S' == str[4])
        {
          if ('A' == str[5])
          {
            return RSA;
          }

          if ('D' == str[5])
          {
            return RSD;
          }

          return NMEA_ERR;
        }

        if (('T' == str[4]) && ('E' == str[5]))
        {
          return RTE;
        }

        return NMEA_ERR;
        break;
      }

      /* SFI, STN */
      case 'S':
      {
        if (('F' == str[4]) && ('I' == str[5]))
        {
          return SFI;
        }

        if (('T' == str[4]) && ('N' == str[5]))
        {
          return STN;
        }

        return NMEA_ERR;
        break;
      }

      /* TLL, TRF, TTM */
      case 'T':
      {
        if (('L' == str[4]) && ('L' == str[5]))
        {
          return TLL;
        }

        if (('R' == str[4]) && ('F' == str[5]))
        {
          return TRF;
        }

        if (('T' == str[4]) && ('M' == str[5]))
        {
          return TTM;
        }

        return NMEA_ERR;
        break;
      }

      /* VBW, VDR, VHW, VLW, VPW, VTG, VWR */
      case 'V':
      {
        if (('B' == str[4]) && ('W' == str[5]))
        {
          return VBW;
        }

        if (('D' == str[4]) && ('R' == str[5]))
        {
          return VDR;
        }

        if (('H' == str[4]) && ('W' == str[5]))
        {
          return VHW;
        }

        if (('L' == str[4]) && ('W' == str[5]))
        {
          return VLW;
        }

        if (('P' == str[4]) && ('W' == str[5]))
        {
          return VPW;
        }

        if (('T' == str[4]) && ('G' == str[5]))
        {
          return VTG;
        }

        if (('W' == str[4]) && ('R' == str[5]))
        {
          return VWR;
        }

        return NMEA_ERR;
        break;
      }

      /* WCV, WDC, WDR, WNC, WPL */
      case 'W':
      {
        if (('C' == str[4]) && ('V' == str[5]))
        {
          return WCV;
        }

        if (('D' == str[4]) && ('C' == str[5]))
        {
          return WDC;
        }

        if (('D' == str[4]) && ('R' == str[5]))
        {
          return WDR;
        }

        if (('N' == str[4]) && ('C' == str[5]))
        {
          return WNC;
        }

        if (('P' == str[4]) && ('L' == str[5]))
        {
          return WPL;
        }

        return NMEA_ERR;
        break;
      }

      /* XDR, XTE, XTR */
      case 'X':
      {
        if (('D' == str[4]) && ('R' == str[5]))
        {
          return XDR;
        }

        if (('T' == str[4]) && ('E' == str[5]))
        {
          return XTE;
        }

        if (('T' == str[4]) && ('R' == str[5]))
        {
          return XTR;
        }

        return NMEA_ERR;
        break;
      }

      /* ZDA, ZDL, ZFO, ZTG */
      case 'Z':
      {
        if ('D' == str[4])
        {
          if ('A' == str[5])
          {
            return ZDA;
          }

          if ('L' == str[5])
          {
            return ZDL;
          }

          return NMEA_ERR;
        }

        if (('F' == str[4]) && ('O' == str[5]))
        {
          return ZFO;
        }

        if (('T' == str[4]) && ('G' == str[5]))
        {
          return ZTG;
        }

        return NMEA_ERR;
        break;
      }

      default:
      {
        return NMEA_ERR;
        break;
      }
    }
  }

  return NMEA_ERR;
}


int nmeaDecodeMessage( char * data )
{
  int res = NMEA_ERR;

  int ID = nmeaParseId( data );

  if ((ID != NMEA_ERR) && (ID < NMEA_MAX))
  {
    res = nmeaParser[ID]( data );
  }

  return res;
}

/******************************************************************************
    END OF FILE - TEMPLATE.C
******************************************************************************/
