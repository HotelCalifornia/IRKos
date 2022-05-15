#include <stddef.h>
#include <float.h>
#include <stdarg.h>
#include <stdio.h>

#include "sdk/v5_api.h"

#include "sdk/irk_external.h"
#include "sdk/irk_private.h"
#include "jumptable/irk_jumptable_api.h"


int32_t vex_printf(char const *fmt, ...) {
  return INT32_MAX;
}

int32_t vex_sprintf(char *out, const char *format, ...) {
  return INT32_MAX;
}

int32_t vex_snprintf(char *out, uint32_t max_len, const char *format, ...) {
  return INT32_MAX;
}

int32_t vex_vsprintf(char *out, const char *format, va_list args) {
  return INT32_MAX;
}

int32_t vex_vsnprintf(char *out, uint32_t max_len, const char *format, va_list args) {
  return INT32_MAX;
}



void vexBackgroundProcessing(void) {
  
}



double vexBatteryCapacityGet(void) {
  return DBL_MAX;
}

int32_t vexBatteryCurrentGet(void) {
  return INT32_MAX;
}

double vexBatteryTemperatureGet(void) {
  return DBL_MAX;
}

int32_t vexBatteryVoltageGet(void) {
  return INT32_MAX;
}



void vexCompetitionControl(uint32_t data) {
  
}

uint32_t vexCompetitionStatus(void) {
  return UINT32_MAX;
}



V5_ControllerStatus vexControllerConnectionStatusGet(V5_ControllerId id) {
  return kV5ControllerOffline;
}

int32_t vexControllerGet(V5_ControllerId id, V5_ControllerIndex index) {
  return INT32_MAX;
}

bool vexControllerTextSet(V5_ControllerId id, uint32_t line, uint32_t col, const char *str) {
  return false;
}



int32_t vexDebug(char const *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  int32_t rtn = vprintf(fmt, args);
  va_end(args);
  
  return rtn;
}



int32_t vexDeviceAbsEncAngleGet(V5_DeviceT device) {
  return INT32_MAX;
}

int32_t vexDeviceAbsEncPositionGet(V5_DeviceT device) {
  return INT32_MAX;
}

void vexDeviceAbsEncPositionSet(V5_DeviceT device, int32_t position) {
  
}

void vexDeviceAbsEncReset(V5_DeviceT device) {
  
}

bool vexDeviceAbsEncReverseFlagGet(V5_DeviceT device) {
  return false;
}

void vexDeviceAbsEncReverseFlagSet(V5_DeviceT device, bool value) {
  
}

uint32_t vexDeviceAbsEncStatusGet(V5_DeviceT device) {
  return UINT32_MAX;
}

int32_t vexDeviceAbsEncVelocityGet(V5_DeviceT device) {
  return INT32_MAX;
}



V5_AdiPortConfiguration vexDeviceAdiPortConfigGet(V5_DeviceT device, uint32_t port) {
  return kAdiPortTypeUndefined;
}

void vexDeviceAdiPortConfigSet(V5_DeviceT device, uint32_t port, V5_AdiPortConfiguration type) {
  
}

int32_t vexDeviceAdiValueGet(V5_DeviceT device, uint32_t port) {
  return INT32_MAX;
}

void vexDeviceAdiValueSet(V5_DeviceT device, uint32_t port, int32_t value) {
  
}



V5_DeviceBumperState vexDeviceBumperGet(V5_DeviceT device) {
  return kBumperReleased;
}



uint32_t vexDeviceDistanceConfidenceGet(V5_DeviceT device) {
  return UINT32_MAX;
}

uint32_t vexDeviceDistanceDistanceGet(V5_DeviceT device) {
  return UINT32_MAX;
}

int32_t vexDeviceDistanceObjectSizeGet(V5_DeviceT device) {
  return INT32_MAX;
}

double vexDeviceDistanceObjectVelocityGet(V5_DeviceT device) {
  return DBL_MAX;
}

uint32_t vexDeviceDistanceStatusGet(V5_DeviceT device) {
  return UINT32_MAX;
}



void vexDeviceGenericSerialBaudrate(V5_DeviceT device, int32_t baudrate) {
  
}

void vexDeviceGenericSerialEnable(V5_DeviceT device, int32_t options) {
  
}

void vexDeviceGenericSerialFlush(V5_DeviceT device) {
  
}

int32_t vexDeviceGenericSerialPeekChar(V5_DeviceT device) {
  return INT32_MAX;
}

int32_t vexDeviceGenericSerialReadChar(V5_DeviceT device) {
  return INT32_MAX;
}

int32_t vexDeviceGenericSerialReceive(V5_DeviceT device, uint8_t *buffer, int32_t length) {
  return INT32_MAX;
}

int32_t vexDeviceGenericSerialReceiveAvail(V5_DeviceT device) {
  return INT32_MAX;
}

int32_t vexDeviceGenericSerialTransmit(V5_DeviceT device, uint8_t *buffer, int32_t length) {
  return INT32_MAX;
}

int32_t vexDeviceGenericSerialWriteChar(V5_DeviceT device, uint8_t c) {
  return INT32_MAX;
}

int32_t vexDeviceGenericSerialWriteFree(V5_DeviceT device) {
  return INT32_MAX;
}



int32_t vexDeviceGenericValueGet(V5_DeviceT device) {
  return INT32_MAX;
}



V5_DeviceT vexDeviceGetByIndex(uint32_t index) {
  return NULL;
}

int32_t vexDeviceGetStatus(V5_DeviceType *buffer) {
  return INT32_MAX;
}

int32_t vexDeviceGetTimestamp(V5_DeviceT device) {
  return INT32_MAX;
}

int32_t vexDeviceGetTimestampByIndex(int32_t index) {
  return INT32_MAX;
}



double vexDeviceGyroDegreesGet(V5_DeviceT device) {
  return DBL_MAX;
}

double vexDeviceGyroHeadingGet(V5_DeviceT device) {
  return DBL_MAX;
}

void vexDeviceGyroReset(V5_DeviceT device) {
  
}



void vexDeviceImuAttitudeGet(V5_DeviceT device, V5_DeviceImuAttitude *data) {
  
}

void vexDeviceImuDataRateSet(V5_DeviceT device, uint32_t rate) {
  
}

double vexDeviceImuDegreesGet(V5_DeviceT device) {
  return DBL_MAX;
}

double vexDeviceImuHeadingGet(V5_DeviceT device) {
  return DBL_MAX;
}

uint32_t vexDeviceImuModeGet(V5_DeviceT device) {
  return UINT32_MAX;
}

void vexDeviceImuModeSet(V5_DeviceT device, uint32_t mode) {
  
}

void vexDeviceImuQuaternionGet(V5_DeviceT device, V5_DeviceImuQuaternion *data) {
  
}

void vexDeviceImuRawAccelGet(V5_DeviceT device, V5_DeviceImuRaw *data) {
  
}

void vexDeviceImuRawGyroGet(V5_DeviceT device, V5_DeviceImuRaw *data) {
  
}

void vexDeviceImuReset(V5_DeviceT device) {
  
}

uint32_t vexDeviceImuStatusGet(V5_DeviceT device) {
  return UINT32_MAX;
}



V5_DeviceLedColor vexDeviceLedGet(V5_DeviceT device) {
  return kLedColorBlack;
}

uint32_t vexDeviceLedRgbGet(V5_DeviceT device) {
  return UINT32_MAX;
}

void vexDeviceLedRgbSet(V5_DeviceT device, uint32_t color) {
  
}

void vexDeviceLedSet(V5_DeviceT device, V5_DeviceLedColor value) {
  
}



double vexDeviceMagnetCurrentGet(V5_DeviceT device) {
  return DBL_MAX;
}

void vexDeviceMagnetDrop(V5_DeviceT device, V5_DeviceMagnetDuration duration) {
  
}

void vexDeviceMagnetPickup(V5_DeviceT device, V5_DeviceMagnetDuration duration) {
  
}

int32_t vexDeviceMagnetPowerGet(V5_DeviceT device) {
  return INT32_MAX;
}

void vexDeviceMagnetPowerSet(V5_DeviceT device, int32_t value, int32_t time) {
  
}

uint32_t vexDeviceMagnetStatusGet(V5_DeviceT device) {
  return UINT32_MAX;
}

double vexDeviceMagnetTemperatureGet(V5_DeviceT device) {
  return DBL_MAX;
}



void vexDeviceMotorAbsoluteTargetSet(V5_DeviceT device, double position, int32_t velocity) {
  
}

double vexDeviceMotorActualVelocityGet(V5_DeviceT device) {
  return DBL_MAX;
}

V5MotorBrakeMode vexDeviceMotorBrakeModeGet(V5_DeviceT device) {
  return kV5MotorBrakeModeCoast;
}

void vexDeviceMotorBrakeModeSet(V5_DeviceT device, V5MotorBrakeMode mode) {
  
}

int32_t vexDeviceMotorCurrentGet(V5_DeviceT device) {
  return INT32_MAX;
}

void vexDeviceMotorCurrentLimitSet(V5_DeviceT device, int32_t value) {
  
}

bool vexDeviceMotorCurrentLimitFlagGet(V5_DeviceT device) {
  return false;
}

int32_t vexDeviceMotorCurrentLimitGet(V5_DeviceT device) {
  return INT32_MAX;
}

int32_t vexDeviceMotorDirectionGet(V5_DeviceT device) {
  return INT32_MAX;
}

double vexDeviceMotorEfficiencyGet(V5_DeviceT device) {
  return DBL_MAX;
}

V5MotorEncoderUnits vexDeviceMotorEncoderUnitsGet(V5_DeviceT device) {
  return kMotorEncoderDegrees;
}
 
void vexDeviceMotorEncoderUnitsSet(V5_DeviceT device, V5MotorEncoderUnits units) {
  
}

uint32_t vexDeviceMotorFaultsGet(V5_DeviceT device) {
  return UINT32_MAX;
}

uint32_t vexDeviceMotorFlagsGet(V5_DeviceT device) {
  return UINT32_MAX;
}

V5MotorGearset vexDeviceMotorGearingGet(V5_DeviceT device) {
  return kMotorGearSet_36;
}

void vexDeviceMotorGearingSet(V5_DeviceT device, V5MotorGearset value) {
  
}

V5MotorControlMode vexDeviceMotorModeGet(V5_DeviceT device) {
  return kMotorControlModeUNDEFINED;
}
 
void vexDeviceMotorModeSet(V5_DeviceT device, V5MotorControlMode mode) {
  
}

bool vexDeviceMotorOverTempFlagGet(V5_DeviceT device) {
  return false;
}

double vexDeviceMotorPositionGet(V5_DeviceT device) {
  return DBL_MAX;
}

void vexDeviceMotorPositionPidSet(V5_DeviceT device, V5_DeviceMotorPid *pid) {
  
}

int32_t vexDeviceMotorPositionRawGet(V5_DeviceT device, uint32_t *timestamp) {
  return INT32_MAX;
}

void vexDeviceMotorPositionReset(V5_DeviceT device) {
  
}

void vexDeviceMotorPositionSet(V5_DeviceT device, double position) {
  
}

double vexDeviceMotorPowerGet(V5_DeviceT device) {
  return DBL_MAX;
}

int32_t vexDeviceMotorPwmGet(V5_DeviceT device) {
  return INT32_MAX;
}

void vexDeviceMotorPwmSet(V5_DeviceT device, int32_t value) {
  
}

void vexDeviceMotorRelativeTargetSet(V5_DeviceT device, double position, int32_t velocity) {
  
}

bool vexDeviceMotorReverseFlagGet(V5_DeviceT device) {
  return false;
}

void vexDeviceMotorReverseFlagSet(V5_DeviceT device, bool value) {
  
}

void vexDeviceMotorServoTargetSet(V5_DeviceT device, double position) {
  
}

double vexDeviceMotorTargetGet(V5_DeviceT device) {
  return DBL_MAX;
}

double vexDeviceMotorTemperatureGet(V5_DeviceT device) {
  return DBL_MAX;
}

double vexDeviceMotorTorqueGet(V5_DeviceT device) {
  return DBL_MAX;
}

int32_t vexDeviceMotorVelocityGet(V5_DeviceT device) {
  return INT32_MAX;
}

void vexDeviceMotorVelocityPidSet(V5_DeviceT device, V5_DeviceMotorPid *pid) {
  
}

void vexDeviceMotorVelocitySet(V5_DeviceT device, int32_t velocity) {
  
}

void vexDeviceMotorVelocityUpdate(V5_DeviceT device, int32_t velocity) {
  
}

int32_t vexDeviceMotorVoltageGet(V5_DeviceT device) {
  return INT32_MAX;
}

int32_t vexDeviceMotorVoltageLimitGet(V5_DeviceT device) {
  return INT32_MAX;
}

void vexDeviceMotorVoltageLimitSet(V5_DeviceT device, int32_t value) {
  
}

void vexDeviceMotorVoltageSet(V5_DeviceT device, int32_t value) {
  
}

bool vexDeviceMotorZeroPositionFlagGet(V5_DeviceT device) {
  return false;
}

bool vexDeviceMotorZeroVelocityFlagGet(V5_DeviceT device) {
  return false;
}



double vexDeviceOpticalBrightnessGet(V5_DeviceT device) {
  return DBL_MAX;
}

void vexDeviceOpticalGestureDisable(V5_DeviceT device) {
  
}

void vexDeviceOpticalGestureEnable(V5_DeviceT device) {
  
}

uint32_t vexDeviceOpticalGestureGet(V5_DeviceT device, V5_DeviceOpticalGesture *pData) {
  return UINT32_MAX;
}

double vexDeviceOpticalHueGet(V5_DeviceT device) {
  return DBL_MAX;
}

int32_t vexDeviceOpticalLedPwmGet(V5_DeviceT device) {
  return INT32_MAX;
}

void vexDeviceOpticalLedPwmSet(V5_DeviceT device, int32_t value) {
  
}

uint32_t vexDeviceOpticalModeGet(V5_DeviceT device) {
  return UINT32_MAX;
}

void vexDeviceOpticalModeSet(V5_DeviceT device, uint32_t mode) {
  
}

int32_t vexDeviceOpticalProximityGet(V5_DeviceT device) {
  return INT32_MAX;
}

int32_t vexDeviceOpticalProximityThreshold(V5_DeviceT device, int32_t value) {
  return INT32_MAX;
}

void vexDeviceOpticalRawGet(V5_DeviceT device, V5_DeviceOpticalRaw *data) {
  
}

void vexDeviceOpticalRgbGet(V5_DeviceT device, V5_DeviceOpticalRgb *data) {
  
}

double vexDeviceOpticalSatGet(V5_DeviceT device) {
  return DBL_MAX;
}

uint32_t vexDeviceOpticalStatusGet(V5_DeviceT device) {
  return UINT32_MAX;
}



int32_t vexDeviceRangeValueGet(V5_DeviceT device) {
  return INT32_MAX;
}



V5_DeviceT vexDevicesGet(void) {
  return NULL;
}

uint32_t vexDevicesGetNumber(void) {
  return UINT32_MAX;
}

uint32_t vexDevicesGetNumberByType(V5_DeviceType type) {
  return UINT32_MAX;
}



int32_t vexDeviceSonarValueGet(V5_DeviceT device) {
  return INT32_MAX;
}



uint8_t vexDeviceVisionBrightnessGet(V5_DeviceT device) {
  return UINT8_MAX;
}

void vexDeviceVisionBrightnessSet(V5_DeviceT device, uint8_t percent) {
  
}

uint8_t vexDeviceVisionLedBrigntnessGet(V5_DeviceT device) {
  return UINT8_MAX;
}

void vexDeviceVisionLedBrigntnessSet(V5_DeviceT device, uint8_t percent) {
  
}

V5_DeviceVisionRgb vexDeviceVisionLedColorGet(V5_DeviceT device) {
  return (V5_DeviceVisionRgb){ UINT8_MAX, UINT8_MAX, UINT8_MAX, UINT8_MAX };
}

void vexDeviceVisionLedColorSet(V5_DeviceT device, V5_DeviceVisionRgb color) {
  
}

V5VisionLedMode vexDeviceVisionLedModeGet(V5_DeviceT device) {
  return kVisionLedModeAuto;
}

void vexDeviceVisionLedModeSet(V5_DeviceT device, V5VisionLedMode mode) {
  
}

V5VisionMode vexDeviceVisionModeGet(V5_DeviceT device) {
  return kVisionTypeTest;
}

void vexDeviceVisionModeSet(V5_DeviceT device, V5VisionMode mode) {
  
}

int32_t vexDeviceVisionObjectCountGet(V5_DeviceT device) {
  return INT32_MAX;
}

int32_t vexDeviceVisionObjectGet(V5_DeviceT device, uint32_t indexObj, V5_DeviceVisionObject *pObject) {
  return INT32_MAX;
}

bool vexDeviceVisionSignatureGet(V5_DeviceT device, uint32_t id, V5_DeviceVisionSignature *pSignature) {
  return false;
}

void vexDeviceVisionSignatureSet(V5_DeviceT device, V5_DeviceVisionSignature *pSignature) {
  
}

V5_DeviceVisionRgb vexDeviceVisionWhiteBalanceGet(V5_DeviceT device) {
  return (V5_DeviceVisionRgb){ UINT8_MAX, UINT8_MAX, UINT8_MAX, UINT8_MAX };
}

V5VisionWBMode vexDeviceVisionWhiteBalanceModeGet(V5_DeviceT device) {
  return kVisionWBNormal;
}

void vexDeviceVisionWhiteBalanceModeSet(V5_DeviceT device, V5VisionWBMode mode) {
  
}

void vexDeviceVisionWhiteBalanceSet(V5_DeviceT device, V5_DeviceVisionRgb color) {
  
}

V5VisionWifiMode vexDeviceVisionWifiModeGet(V5_DeviceT device) {
  return kVisionWifiModeOff;
}

void vexDeviceVisionWifiModeSet(V5_DeviceT device, V5VisionWifiMode mode) {
  
}



void vexDisplayBackgroundColor(uint32_t col) {
  
}

uint32_t vexDisplayBackgroundColorGet(void) {
  return UINT32_MAX;
}

void vexDisplayBigCenteredString(const int32_t nLineNumber, const char *format, ...) {
  
}

void vexDisplayBigString(const int32_t nLineNumber, const char *format, ...) {
  
}

void vexDisplayBigStringAt(int32_t xpos, int32_t ypos, const char *format, ...) {
  
}

void vexDisplayCenteredString(const int32_t nLineNumber, const char *format, ...) {
  
}

void vexDisplayCircleClear(int32_t xc, int32_t yc, int32_t radius) {
  
}

void vexDisplayCircleDraw(int32_t xc, int32_t yc, int32_t radius) {
  
}

void vexDisplayCircleFill(int32_t xc, int32_t yc, int32_t radius) {
  
}

void vexDisplayClipRegionClear() {
  
}

void vexDisplayClipRegionSet(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
  
}

void vexDisplayCopyRect(int32_t x1, int32_t y1, int32_t x2, int32_t y2, uint32_t *pSrc, int32_t srcStride) {
  
}

void vexDisplayDoubleBufferDisable(void) {
  
}

void vexDisplayErase(void) {
  
}

void vexDisplayFontNamedSet(const char *pFontName) {
  
}

void vexDisplayForegroundColor(uint32_t col) {
  
}

uint32_t vexDisplayForegroundColorGet(void) {
  return UINT32_MAX;
}

void vexDisplayLineClear(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
  
}

void vexDisplayLineDraw(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
  
}

void vexDisplayPixelClear(uint32_t x, uint32_t y) {
  
}

void vexDisplayPixelSet(uint32_t x, uint32_t y) {
  
}

void vexDisplayPrintf(int32_t xpos, int32_t ypos, uint32_t bOpaque, const char *format, ...) {
  
}

void vexDisplayRectClear(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
  
}

void vexDisplayRectDraw(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
  
}

void vexDisplayRectFill(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
  
}

bool vexDisplayRender(bool bVsyncWait, bool bRunScheduler) {
  return false;
}

void vexDisplayScroll(int32_t nStartLine, int32_t nLines) {
  
}

void vexDisplayScrollRect(int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t nLines) {
  
}

void vexDisplaySmallStringAt(int32_t xpos, int32_t ypos, const char *format, ...) {
  
}

void vexDisplayString(int32_t nLineNumber, const char *format, ...) {
  
}

void vexDisplayStringAt(int32_t xpos, int32_t ypos, const char *format, ...) {
  
}

int32_t vexDisplayStringHeightGet(const char *pString) {
  return INT32_MAX;
}

int32_t vexDisplayStringWidthGet(const char *pString) {
  return INT32_MAX;
}

void vexDisplayTextSize(uint32_t n, uint32_t d) {
  
}

void vexDisplayVBigCenteredString(const int32_t nLineNumber, const char *format, va_list args) {
  
}

void vexDisplayVBigString(const int32_t nLineNumber, const char *format, va_list args) {
  
}

void vexDisplayVBigStringAt(int32_t xpos, int32_t ypos, const char *format, va_list args) {
  
}

void vexDisplayVCenteredString(const int32_t nLineNumber, const char *format, va_list args) {
  
}

void vexDisplayVPrintf(int32_t xpos, int32_t ypos, uint32_t bOpaque, const char *format, va_list args) {
  
}

void vexDisplayVSmallStringAt(int32_t xpos, int32_t ypos, const char *format, va_list args) {
  
}

void vexDisplayVString(const int32_t nLineNumber, const char *format, va_list args) {
  
}

void vexDisplayVStringAt(int32_t xpos, int32_t ypos, const char *format, va_list args) {
  
}



uint32_t vexDistanceConfidenceGet(uint32_t index) {
  return UINT32_MAX;
}

uint32_t vexDistanceDistanceGet(uint32_t index) {
  return UINT32_MAX;
}

int32_t vexDistanceObjectSizeGet(uint32_t index) {
  return INT32_MAX;
}

double vexDistanceObjectVelocityGet(uint32_t index) {
  return DBL_MAX;
}

uint32_t vexDistanceStatusGet(uint32_t index) {
  return UINT32_MAX;
}



void vexFileClose(FIL *fdp) {
  
}

FRESULT vexFileDirectoryGet(const char *path, char *buffer, uint32_t len) {
  return FR_NOT_READY;
}

bool vexFileDriveStatus(uint32_t drive) {
  return false;
}

FRESULT vexFileMountSD(void) {
  return FR_NOT_READY;
}

FIL *vexFileOpen(const char *filename, const char *mode) {
  return NULL;
}

FIL *vexFileOpenCreate(const char *filename) {
  return NULL;
}

FIL *vexFileOpenWrite(const char *filename) {
  return NULL;
}

int32_t vexFileRead(char *buf, uint32_t size, uint32_t nItems, FIL *fdp) {
  return INT32_MAX;
}

FRESULT vexFileSeek(FIL *fdp, uint32_t offset, int32_t whence) {
  return FR_NOT_READY;
}

int32_t vexFileSize(FIL *fdp) {
  return INT32_MAX;
}

int32_t vexFileTell(FIL *fdp) {
  return INT32_MAX;
}

int32_t vexFileWrite(char *buf, uint32_t size, uint32_t nItems, FIL *fdp) {
  return INT32_MAX;
}



void vexGetdate(struct date *pDate) {
  
}

void vexGettime(struct time *pTime) {
  
}



uint32_t vexImageBmpRead(const uint8_t *ibuf, v5_image *oBuf, uint32_t maxw, uint32_t maxh) {
  return UINT32_MAX;
}

uint32_t vexImagePngRead(const uint8_t *ibuf, v5_image *oBuf, uint32_t maxw, uint32_t maxh, uint32_t ibuflen) {
  return UINT32_MAX;
}



void vexMain(void) {
  main();

  uint32_t time_cur, time_start = vexSystemTimeGet();
  do {
    time_cur = vexSystemTimeGet();
  } while (time_cur < time_start + 500);
  vexSystemExitRequest();
  while (appRunning) {
    vexBackgroundProcessing();
  }
}

int32_t vexScratchMemoryPtr(void **ptr) {
  return INT32_MAX;
}



uint32_t vexSdkVersion(void) {
  return UINT32_MAX;
}



int32_t vexSerialPeekChar(uint32_t channel) {
  return INT32_MAX;
}

int32_t vexSerialReadChar(uint32_t channel) {
  return INT32_MAX;
}

int32_t vexSerialWriteBuffer(uint32_t channel, uint8_t *data, uint32_t data_len) {
  return INT32_MAX;
}

int32_t vexSerialWriteChar(uint32_t channel, uint8_t c) {
  return INT32_MAX;
}

int32_t vexSerialWriteFree(uint32_t channel) {
  return INT32_MAX;
}

// const unsigned char vexCodeSig[32] __attribute__ ((section (".boot_data"))) = { 58, 56, 58, 35, 00, 00, 00, 00, 02, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00 };

void vexStartup(void) {
  for (unsigned char *i = (unsigned char *)&__sbss_start; i < (unsigned char *)&__sbss_end; ++i) {
    *i = 0;
  }
  for (unsigned char *i = (unsigned char *)&__bss_start; i < (unsigned char *)&__bss_end; ++i) {
    *i = 0;
  }
  __libc_init_array();
  vexMain();
  __libc_fini_array();
}

uint32_t vexStdlibVersion(void) {
  return UINT32_MAX;
}

uint32_t vexStdlibVersionLinked(void) {
  return UINT32_MAX;
}

bool vexStdlibVersionVerify(void) {
  return false;
}



void vexSystemApplicationIRQHandler(uint32_t ulICCIAR) {
  
}

void vexSystemBoot(void) {
  
}

void vexSystemDataAbortInterrupt(void) {
  
}

void vexSystemDigitalIO(uint32_t pin, uint32_t value) {
  
}

void vexSystemExitRequest(void) {
  appRunning = false;
}

void vexSystemFIQInterrupt(void) {
  
}

uint64_t vexSystemHighResTimeGet(void) {
  return UINT32_MAX;
}

uint32_t vexSystemLinkAddrGet(void) {
  return UINT32_MAX;
}

void vexSystemMemoryDump(void) {
  
}

uint64_t vexSystemPowerupTimeGet(void) {
  return UINT64_MAX;
}

void vexSystemPrefetchAbortInterrupt(void) {
  
}

uint32_t vexSystemStartupOptions(void) {
  return UINT32_MAX;
}

void vexSystemSWInterrupt(void) {
  
}

uint32_t vexSystemTimeGet(void) {
  return UINT32_MAX;
}

void vexSystemTimerClearInterrupt() {
  
}

int32_t vexSystemTimerReinitForRtos(uint32_t priority, void (*handler)(void *)) {
  return irkSystemTimerReinitForRtos(priority, handler);
}

void vexSystemTimerStop() {
  
}

void vexSystemUndefinedException(void) {
  
}

uint32_t vexSystemUsbStatus(void) {
  return UINT32_MAX;
}

uint32_t vexSystemVersion(void) {
  return UINT32_MAX;
}

uint32_t vexSystemWatchdogGet(void) {
  return UINT32_MAX;
}

int32_t vexSystemWatchdogReinitRtos(void) {
  return INT32_MAX;
}



bool vexTouchDataGet(V5_TouchStatus *status) {
  return false;
}

void vexTouchUserCallbackSet(void (* callback)(V5_TouchEvent, int32_t, int32_t)) {
  
}

