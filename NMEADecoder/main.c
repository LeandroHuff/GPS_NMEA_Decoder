/**
 * @brief       A small application to test NMEA functions.
 * @file        main.c - Source code filename.
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

#include "defs.h"
#include "nmea.h"

const char *strGP[ NMEA_MAX ] =
{
  "DUMMY",
  "$GPAAM",
  "$GPALM",
  "$GPAPA",
  "$GPAPB",
  "$GPASD",
  "$GPBEC",
  "$GPBOD",
  "$GPBWC",
  "$GPBWR",
  "$GPBWW",
  "$GPDBK",
  "$GPDBS",
  "$GPDBT",
  "$GPDCN",
  "$GPDPT",
  "$GPDSC",
  "$GPDSE",
  "$GPDSI",
  "$GPDSR",
  "$GPDTM",
  "$GPFSI",
  "$GPGBS",
  "$GPGGA",
  "$GPGLC",
  "$GPGLL",
  "$GPGRS",
  "$GPGST",
  "$GPGSA",
  "$GPGSV",
  "$GPGTD",
  "$GPGXA",
  "$GPHDG",
  "$GPHDM",
  "$GPHDT",
  "$GPHSC",
  "$GPLCD",
  "$GPMSK",
  "$GPMSS",
  "$GPMWD",
  "$GPMTW",
  "$GPMWV",
  "$GPOLN",
  "$GPOSD",
  "$GPROO",
  "$GPRMA",
  "$GPRMB",
  "$GPRMC",
  "$GPROT",
  "$GPRPM",
  "$GPRSA",
  "$GPRSD",
  "$GPRTE",
  "$GPSFI",
  "$GPSTN",
  "$GPTLL",
  "$GPTRF",
  "$GPTTM",
  "$GPVBW",
  "$GPVDR",
  "$GPVHW",
  "$GPVLW",
  "$GPVPW",
  "$GPVTG",
  "$GPVWR",
  "$GPWCV",
  "$GPWDC",
  "$GPWDR",
  "$GPWNC",
  "$GPWPL",
  "$GPXDR",
  "$GPXTE",
  "$GPXTR",
  "$GPZDA",
  "$GPZDL",
  "$GPZFO",
  "$GPZTG",
};

int main ( int argc , char **argv )
{
  int i;
  int res;

  printf( "Starting parser...\n" );

  for ( i = 0; i < NMEA_MAX; i++ )
  {
    res = nmeaDecodeMessage( (char*) strGP[i] );

    if (res == NMEA_ERR)
    {
      printf( "%s returned an error.\n", strGP[i] );
    }
  }
  printf( "Finished parser!\n" );

  return 0;
}

/******************************************************************************
    END OF FILE - MAIN.C
******************************************************************************/
