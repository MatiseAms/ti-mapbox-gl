/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/70/trd7brdx2sb2k2j59tm3jwf40000gn/T/timanrebel/mapbox-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'18' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 3 "/private/var/folders/70/trd7brdx2sb2k2j59tm3jwf40000gn/T/timanrebel/mapbox-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "matise.mapbox.MapViewProxy.h"
#include "matise.mapbox.MapboxModule.h"
#include "matise.mapbox.ExampleProxy.h"
#include "matise.mapbox.DemoViewProxy.h"


#line 16 "/private/var/folders/70/trd7brdx2sb2k2j59tm3jwf40000gn/T/timanrebel/mapbox-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 6, duplicates = 0 */

class MapboxBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline unsigned int
MapboxBindings::hash (register const char *str, register unsigned int len)
{
  static unsigned char asso_values[] =
    {
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32,  2, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32,  5, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32,  0,
      32,  0, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
      32, 32, 32, 32, 32, 32
    };
  return len + asso_values[(unsigned char)str[17]];
}

struct titanium::bindings::BindEntry *
MapboxBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 4,
      MIN_WORD_LENGTH = 26,
      MAX_WORD_LENGTH = 27,
      MIN_HASH_VALUE = 26,
      MAX_HASH_VALUE = 31
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 20 "/private/var/folders/70/trd7brdx2sb2k2j59tm3jwf40000gn/T/timanrebel/mapbox-generated/KrollGeneratedBindings.gperf"
      {"matise.mapbox.ExampleProxy", ::matise::mapbox::mapbox::ExampleProxy::bindProxy, ::matise::mapbox::mapbox::ExampleProxy::dispose},
#line 21 "/private/var/folders/70/trd7brdx2sb2k2j59tm3jwf40000gn/T/timanrebel/mapbox-generated/KrollGeneratedBindings.gperf"
      {"matise.mapbox.DemoViewProxy", ::matise::mapbox::mapbox::DemoViewProxy::bindProxy, ::matise::mapbox::mapbox::DemoViewProxy::dispose},
#line 18 "/private/var/folders/70/trd7brdx2sb2k2j59tm3jwf40000gn/T/timanrebel/mapbox-generated/KrollGeneratedBindings.gperf"
      {"matise.mapbox.MapViewProxy", ::matise::mapbox::mapbox::MapViewProxy::bindProxy, ::matise::mapbox::mapbox::MapViewProxy::dispose},
      {""}, {""},
#line 19 "/private/var/folders/70/trd7brdx2sb2k2j59tm3jwf40000gn/T/timanrebel/mapbox-generated/KrollGeneratedBindings.gperf"
      {"matise.mapbox.MapboxModule", ::matise::mapbox::MapboxModule::bindProxy, ::matise::mapbox::MapboxModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 22 "/private/var/folders/70/trd7brdx2sb2k2j59tm3jwf40000gn/T/timanrebel/mapbox-generated/KrollGeneratedBindings.gperf"

