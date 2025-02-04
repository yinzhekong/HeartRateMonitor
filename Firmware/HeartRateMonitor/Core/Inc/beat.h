#ifndef HEARTRATEMONITOR_BEAT_H
#define HEARTRATEMONITOR_BEAT_H

#include "stm32g0xx.h"

class Beat {
public:
    uint8_t getRate();
    void update(uint16_t s);
private:
    uint16_t rate = 0;
    uint16_t c = 0;
    uint16_t beat = 0;
    uint16_t last_beat = 0;
    uint16_t max = 0;
public:
	uint8_t isValid() const;

private:
	uint8_t down_flag = 1;
    uint8_t stop = 0;
	uint8_t valid = 0;
};

#endif