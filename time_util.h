#ifndef TIME_UTIL_H
#define TIME_UTIL_H

#ifdef FAKE_ARDUINO
#include "FakeArduino.h"
#else
#include <Arduino.h>
#endif

long seconds(long seconds);

/**
 * @brief Give the number of minutes from a number of seconds
 * 
 * Example : 65498 seconds = 18h 11 minutes 38 seconds => The function return 11
 * 
 * @param seconds 
 * @return long Number of minutes
 */
long minutes(long seconds);


long hours24(long seconds);

#endif