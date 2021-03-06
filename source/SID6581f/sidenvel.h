//
// /home/ms/source/sidplay/libsidplay/emu/RCS/envelope.h,v
//

#ifndef ENVELOPE_H
#define ENVELOPE_H


extern void enveEmuInit(uint32 updateFreq, int measuredValues);
void enveEmuResetOperator(sidOperator* pVoice);


extern ptr2sidUwordFunc enveModeTable[];   // -> envelope.cpp
extern const uint8 masterVolumeLevels[16];  // -> envelope.cpp

static const uint8 ENVE_STARTATTACK = 0;
static const uint8 ENVE_STARTRELEASE = 2;

static const uint8 ENVE_ATTACK = 4;
static const uint8 ENVE_DECAY = 6;
static const uint8 ENVE_SUSTAIN = 8;
static const uint8 ENVE_RELEASE = 10;
static const uint8 ENVE_SUSTAINDECAY = 12;
static const uint8 ENVE_MUTE = 14;

static const uint8 ENVE_STARTSHORTATTACK = 16;
static const uint8 ENVE_SHORTATTACK = 16;

static const uint8 ENVE_ALTER = 32;


#endif
