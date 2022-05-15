#ifndef IRK_V5_API_H_
#define IRK_V5_API_H_


#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>

#include "v5_apitypes.h"
#include "v5_color.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup system
 *  @{
 */

int32_t vex_printf(char const *fmt, ...);
int32_t vex_sprintf(char *out, const char *format, ...);
int32_t vex_snprintf(char *out, uint32_t max_len, const char *format, ...);
int32_t vex_vsprintf(char *out, const char *format, va_list args);
int32_t vex_vsnprintf(char *out, uint32_t max_len, const char *format, va_list args);

void vexBackgroundProcessing(void);

/** @}*/

/** @addtogroup battery
 *  @{
 */

double vexBatteryCapacityGet(void);
int32_t vexBatteryCurrentGet(void);
// N/A vexBatteryDataGet
// N/A vexBatteryDataSet
double vexBatteryTemperatureGet(void);
int32_t vexBatteryVoltageGet(void);

/** @}*/

/** @addtogroup competition
 *  @{
 */

void vexCompetitionControl(uint32_t data);
uint32_t vexCompetitionStatus(void);

/** @}*/

/** @addtogroup controller
 *  @{
 */

V5_ControllerStatus vexControllerConnectionStatusGet(V5_ControllerId id);
int32_t vexControllerGet(V5_ControllerId id, V5_ControllerIndex index);
bool vexControllerTextSet(V5_ControllerId id, uint32_t line, uint32_t col, const char *str);

/** @}*/

/** @addtogroup system
 *  @{
 */

int32_t vexDebug(char const *fmt, ...);

/** @}*/

/** @addtogroup encoder
 *  @{
 */

int32_t vexDeviceAbsEncAngleGet(V5_DeviceT device);
// N/A vexDeviceAbsEncDebugGet
// N/A vexDeviceAbsEncModeGet
// N/A vexDeviceAbsEncModeSet
// N/A vexDeviceAbsEncOffsetGet
// N/A vexDeviceAbsEncOffsetSet
int32_t vexDeviceAbsEncPositionGet(V5_DeviceT device);
void vexDeviceAbsEncPositionSet(V5_DeviceT device, int32_t position);
void vexDeviceAbsEncReset(V5_DeviceT device);
bool vexDeviceAbsEncReverseFlagGet(V5_DeviceT device);
void vexDeviceAbsEncReverseFlagSet(V5_DeviceT device, bool value);
uint32_t vexDeviceAbsEncStatusGet(V5_DeviceT device);
// N/A vexDeviceAbsEncTemperatureGet
int32_t vexDeviceAbsEncVelocityGet(V5_DeviceT device);

/** @}*/

/** @addtogroup adi
 *  @{
 */

V5_AdiPortConfiguration vexDeviceAdiPortConfigGet(V5_DeviceT device, uint32_t port);
void vexDeviceAdiPortConfigSet(V5_DeviceT device, uint32_t port, V5_AdiPortConfiguration type);
int32_t vexDeviceAdiValueGet(V5_DeviceT device, uint32_t port);
void vexDeviceAdiValueSet(V5_DeviceT device, uint32_t port, int32_t value);
// N/A vexDeviceAdiVoltageGet

/** @}*/

/** @addtogroup bumper
 *  @{
 */

V5_DeviceBumperState vexDeviceBumperGet(V5_DeviceT device);

/** @}*/

/** @addtogroup distance
 *  @{
 */

uint32_t vexDeviceDistanceConfidenceGet(V5_DeviceT device);
// N/A vexDeviceDistanceDebugGet
uint32_t vexDeviceDistanceDistanceGet(V5_DeviceT device);
// N/A vexDeviceDistanceModeGet
// N/A vexDeviceDistanceModeSet
int32_t vexDeviceDistanceObjectSizeGet(V5_DeviceT device);
double vexDeviceDistanceObjectVelocityGet(V5_DeviceT device);
uint32_t vexDeviceDistanceStatusGet(V5_DeviceT device);

// N/A vexDeviceEventBitsGet
// N/A vexDeviceEventBitsSet
// N/A vexDeviceEventDataGet
// N/A vexDeviceEventDataSet
// N/A vexDeviceEventMaskGet
// N/A vexDeviceEventMaskSet

/** @}*/

/** @addtogroup genericserial
 *  @{
 */

void vexDeviceGenericSerialBaudrate(V5_DeviceT device, int32_t baudrate);
// N/A vexDeviceGenericSerialDisableAll
void vexDeviceGenericSerialEnable(V5_DeviceT device, int32_t options);
void vexDeviceGenericSerialFlush(V5_DeviceT device);
int32_t vexDeviceGenericSerialPeekChar(V5_DeviceT device);
int32_t vexDeviceGenericSerialReadChar(V5_DeviceT device);
int32_t vexDeviceGenericSerialReceive(V5_DeviceT device, uint8_t *buffer, int32_t length);
int32_t vexDeviceGenericSerialReceiveAvail(V5_DeviceT device);
int32_t vexDeviceGenericSerialTransmit(V5_DeviceT device, uint8_t *buffer, int32_t length);
int32_t vexDeviceGenericSerialWriteChar(V5_DeviceT device, uint8_t c);
int32_t vexDeviceGenericSerialWriteFree(V5_DeviceT device);

/** @}*/

/** @addtogroup device
 *  @{
 */

int32_t vexDeviceGenericValueGet(V5_DeviceT device);

V5_DeviceT vexDeviceGetByIndex(uint32_t index);
int32_t vexDeviceGetStatus(V5_DeviceType *buffer);
int32_t vexDeviceGetTimestamp(V5_DeviceT device);
int32_t vexDeviceGetTimestampByIndex(int32_t index);

/** @}*/

/** @addtogroup gyro
 *  @{
 */

double vexDeviceGyroDegreesGet(V5_DeviceT device);
double vexDeviceGyroHeadingGet(V5_DeviceT device);
void vexDeviceGyroReset(V5_DeviceT device);

/** @}*/

/** @addtogroup imu
 *  @{
 */

void vexDeviceImuAttitudeGet(V5_DeviceT device, V5_DeviceImuAttitude *data);
// N/A vexDeviceImuCollisionDataGet
void vexDeviceImuDataRateSet(V5_DeviceT device, uint32_t rate);
// N/A vexDeviceImuDebugGet
double vexDeviceImuDegreesGet(V5_DeviceT device);
double vexDeviceImuHeadingGet(V5_DeviceT device);
uint32_t vexDeviceImuModeGet(V5_DeviceT device);
void vexDeviceImuModeSet(V5_DeviceT device, uint32_t mode);
void vexDeviceImuQuaternionGet(V5_DeviceT device, V5_DeviceImuQuaternion *data);
void vexDeviceImuRawAccelGet(V5_DeviceT device, V5_DeviceImuRaw *data);
void vexDeviceImuRawGyroGet(V5_DeviceT device, V5_DeviceImuRaw *data);
void vexDeviceImuReset(V5_DeviceT device);
uint32_t vexDeviceImuStatusGet(V5_DeviceT device);
// N/A vexDeviceImuTemperatureGet

/** @}*/

/** @addtogroup led
 *  @{
 */

V5_DeviceLedColor vexDeviceLedGet(V5_DeviceT device);
uint32_t vexDeviceLedRgbGet(V5_DeviceT device);
void vexDeviceLedRgbSet(V5_DeviceT device, uint32_t color);
void vexDeviceLedSet(V5_DeviceT device, V5_DeviceLedColor value);

/** @}*/

/** @addtogroup magnet
 *  @{
 */

double vexDeviceMagnetCurrentGet(V5_DeviceT device);
// N/A vexDeviceMagnetDebugGet
void vexDeviceMagnetDrop(V5_DeviceT device, V5_DeviceMagnetDuration duration);
// N/A vexDeviceMagnetModeGet
// N/A vexDeviceMagnetModeSet
void vexDeviceMagnetPickup(V5_DeviceT device, V5_DeviceMagnetDuration duration);
int32_t vexDeviceMagnetPowerGet(V5_DeviceT device);
void vexDeviceMagnetPowerSet(V5_DeviceT device, int32_t value, int32_t time);
uint32_t vexDeviceMagnetStatusGet(V5_DeviceT device);
double vexDeviceMagnetTemperatureGet(V5_DeviceT device);

/** @}*/

/** @addtogroup motor
 *  @{
 */

void vexDeviceMotorAbsoluteTargetSet(V5_DeviceT device, double position, int32_t velocity);
double vexDeviceMotorActualVelocityGet(V5_DeviceT device);
V5MotorBrakeMode vexDeviceMotorBrakeModeGet(V5_DeviceT device);
void vexDeviceMotorBrakeModeSet(V5_DeviceT device, V5MotorBrakeMode mode);
int32_t vexDeviceMotorCurrentGet(V5_DeviceT device);
void vexDeviceMotorCurrentLimitSet(V5_DeviceT device, int32_t value);
bool vexDeviceMotorCurrentLimitFlagGet(V5_DeviceT device);
int32_t vexDeviceMotorCurrentLimitGet(V5_DeviceT device);
int32_t vexDeviceMotorDirectionGet(V5_DeviceT device);
double vexDeviceMotorEfficiencyGet(V5_DeviceT device);
V5MotorEncoderUnits vexDeviceMotorEncoderUnitsGet(V5_DeviceT device); 
void vexDeviceMotorEncoderUnitsSet(V5_DeviceT device, V5MotorEncoderUnits units);
uint32_t vexDeviceMotorFaultsGet(V5_DeviceT device);
uint32_t vexDeviceMotorFlagsGet(V5_DeviceT device);
V5MotorGearset vexDeviceMotorGearingGet(V5_DeviceT device);
void vexDeviceMotorGearingSet(V5_DeviceT device, V5MotorGearset value);
V5MotorControlMode vexDeviceMotorModeGet(V5_DeviceT device); 
void vexDeviceMotorModeSet(V5_DeviceT device, V5MotorControlMode mode);
bool vexDeviceMotorOverTempFlagGet(V5_DeviceT device);
double vexDeviceMotorPositionGet(V5_DeviceT device);
void vexDeviceMotorPositionPidSet(V5_DeviceT device, V5_DeviceMotorPid *pid);
int32_t vexDeviceMotorPositionRawGet(V5_DeviceT device, uint32_t *timestamp);
void vexDeviceMotorPositionReset(V5_DeviceT device);
void vexDeviceMotorPositionSet(V5_DeviceT device, double position);
double vexDeviceMotorPowerGet(V5_DeviceT device);
int32_t vexDeviceMotorPwmGet(V5_DeviceT device);
void vexDeviceMotorPwmSet(V5_DeviceT device, int32_t value);
void vexDeviceMotorRelativeTargetSet(V5_DeviceT device, double position, int32_t velocity);
bool vexDeviceMotorReverseFlagGet(V5_DeviceT device);
void vexDeviceMotorReverseFlagSet(V5_DeviceT device, bool value);
void vexDeviceMotorServoTargetSet(V5_DeviceT device, double position);
double vexDeviceMotorTargetGet(V5_DeviceT device);
double vexDeviceMotorTemperatureGet(V5_DeviceT device);
double vexDeviceMotorTorqueGet(V5_DeviceT device);
int32_t vexDeviceMotorVelocityGet(V5_DeviceT device);
void vexDeviceMotorVelocityPidSet(V5_DeviceT device, V5_DeviceMotorPid *pid);
void vexDeviceMotorVelocitySet(V5_DeviceT device, int32_t velocity);
void vexDeviceMotorVelocityUpdate(V5_DeviceT device, int32_t velocity);
int32_t vexDeviceMotorVoltageGet(V5_DeviceT device);
int32_t vexDeviceMotorVoltageLimitGet(V5_DeviceT device);
void vexDeviceMotorVoltageLimitSet(V5_DeviceT device, int32_t value);
void vexDeviceMotorVoltageSet(V5_DeviceT device, int32_t value);
bool vexDeviceMotorZeroPositionFlagGet(V5_DeviceT device);
bool vexDeviceMotorZeroVelocityFlagGet(V5_DeviceT device);

/** @}*/

/** @addtogroup optical
 *  @{
 */

double vexDeviceOpticalBrightnessGet(V5_DeviceT device);
// N/A vexDeviceOpticalDebugGet
// N/A vexDeviceOpticalGainSet
void vexDeviceOpticalGestureDisable(V5_DeviceT device);
void vexDeviceOpticalGestureEnable(V5_DeviceT device);
uint32_t vexDeviceOpticalGestureGet(V5_DeviceT device, V5_DeviceOpticalGesture *pData);
double vexDeviceOpticalHueGet(V5_DeviceT device);
int32_t vexDeviceOpticalLedPwmGet(V5_DeviceT device);
void vexDeviceOpticalLedPwmSet(V5_DeviceT device, int32_t value);
// N/A vexDeviceOpticalMatrixGet
// N/A vexDeviceOpticalMatrixSet
uint32_t vexDeviceOpticalModeGet(V5_DeviceT device);
void vexDeviceOpticalModeSet(V5_DeviceT device, uint32_t mode);
int32_t vexDeviceOpticalProximityGet(V5_DeviceT device);
int32_t vexDeviceOpticalProximityThreshold(V5_DeviceT device, int32_t value);
void vexDeviceOpticalRawGet(V5_DeviceT device, V5_DeviceOpticalRaw *data);
void vexDeviceOpticalRgbGet(V5_DeviceT device, V5_DeviceOpticalRgb *data);
double vexDeviceOpticalSatGet(V5_DeviceT device);
uint32_t vexDeviceOpticalStatusGet(V5_DeviceT device);

/** @}*/

// N/A vexDeviceRadioModeSet
// N/A vexDeviceRadioUserDataReceive

/** @addtogroup range
 *  @{
 */

int32_t vexDeviceRangeValueGet(V5_DeviceT device);

/** @}*/

/** @addtogroup device
 *  @{
 */

V5_DeviceT vexDevicesGet(void);
uint32_t vexDevicesGetNumber(void);
uint32_t vexDevicesGetNumberByType(V5_DeviceType type);

/** @}*/

/** @addtogroup sonar
 *  @{
 */

int32_t vexDeviceSonarValueGet(V5_DeviceT device);

/** @}*/

/** @addtogroup vision
 *  @{
 */

uint8_t vexDeviceVisionBrightnessGet(V5_DeviceT device);
void vexDeviceVisionBrightnessSet(V5_DeviceT device, uint8_t percent);
uint8_t vexDeviceVisionLedBrigntnessGet(V5_DeviceT device);
void vexDeviceVisionLedBrigntnessSet(V5_DeviceT device, uint8_t percent);
V5_DeviceVisionRgb vexDeviceVisionLedColorGet(V5_DeviceT device);
void vexDeviceVisionLedColorSet(V5_DeviceT device, V5_DeviceVisionRgb color);
V5VisionLedMode vexDeviceVisionLedModeGet(V5_DeviceT device);
void vexDeviceVisionLedModeSet(V5_DeviceT device, V5VisionLedMode mode);
V5VisionMode vexDeviceVisionModeGet(V5_DeviceT device);
void vexDeviceVisionModeSet(V5_DeviceT device, V5VisionMode mode);
int32_t vexDeviceVisionObjectCountGet(V5_DeviceT device);
int32_t vexDeviceVisionObjectGet(V5_DeviceT device, uint32_t indexObj, V5_DeviceVisionObject *pObject);
bool vexDeviceVisionSignatureGet(V5_DeviceT device, uint32_t id, V5_DeviceVisionSignature *pSignature);
void vexDeviceVisionSignatureSet(V5_DeviceT device, V5_DeviceVisionSignature *pSignature);
V5_DeviceVisionRgb vexDeviceVisionWhiteBalanceGet(V5_DeviceT device);
V5VisionWBMode vexDeviceVisionWhiteBalanceModeGet(V5_DeviceT device);
void vexDeviceVisionWhiteBalanceModeSet(V5_DeviceT device, V5VisionWBMode mode);
void vexDeviceVisionWhiteBalanceSet(V5_DeviceT device, V5_DeviceVisionRgb color);
V5VisionWifiMode vexDeviceVisionWifiModeGet(V5_DeviceT device);
void vexDeviceVisionWifiModeSet(V5_DeviceT device, V5VisionWifiMode mode);

/** @}*/

/** @addtogroup display
 *  @{
 */

void vexDisplayBackgroundColor(uint32_t col);
uint32_t vexDisplayBackgroundColorGet(void);
void vexDisplayBigCenteredString(const int32_t nLineNumber, const char *format, ...);
void vexDisplayBigString(const int32_t nLineNumber, const char *format, ...);
void vexDisplayBigStringAt(int32_t xpos, int32_t ypos, const char *format, ...);
void vexDisplayCenteredString(const int32_t nLineNumber, const char *format, ...);
void vexDisplayCircleClear(int32_t xc, int32_t yc, int32_t radius);
void vexDisplayCircleDraw(int32_t xc, int32_t yc, int32_t radius);
void vexDisplayCircleFill(int32_t xc, int32_t yc, int32_t radius);
// N/A vexDisplayClearVsyncState
void vexDisplayClipRegionClear();
void vexDisplayClipRegionSet(int32_t x1, int32_t y1, int32_t x2, int32_t y2);
void vexDisplayCopyRect(int32_t x1, int32_t y1, int32_t x2, int32_t y2, uint32_t *pSrc, int32_t srcStride);
void vexDisplayDoubleBufferDisable(void);
void vexDisplayErase(void);
// N/A vexDisplayFontCustomSet
void vexDisplayFontNamedSet(const char *pFontName);
void vexDisplayForegroundColor(uint32_t col);
uint32_t vexDisplayForegroundColorGet(void);
// N/A vexDisplayGetVsyncState
void vexDisplayLineClear(int32_t x1, int32_t y1, int32_t x2, int32_t y2);
void vexDisplayLineDraw(int32_t x1, int32_t y1, int32_t x2, int32_t y2);
// N/A vexDisplayPenSizeGet
// N/A vexDisplayPenSizeSet
void vexDisplayPixelClear(uint32_t x, uint32_t y);
void vexDisplayPixelSet(uint32_t x, uint32_t y);
void vexDisplayPrintf(int32_t xpos, int32_t ypos, uint32_t bOpaque, const char *format, ...);
void vexDisplayRectClear(int32_t x1, int32_t y1, int32_t x2, int32_t y2);
void vexDisplayRectDraw(int32_t x1, int32_t y1, int32_t x2, int32_t y2);
void vexDisplayRectFill(int32_t x1, int32_t y1, int32_t x2, int32_t y2);
bool vexDisplayRender(bool bVsyncWait, bool bRunScheduler);
// N/A vexDisplayRotateFlagGet
// N/A vexDisplayScreenGrab
void vexDisplayScroll(int32_t nStartLine, int32_t nLines);
void vexDisplayScrollRect(int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t nLines);
void vexDisplaySmallStringAt(int32_t xpos, int32_t ypos, const char *format, ...);
void vexDisplayString(int32_t nLineNumber, const char *format, ...);
void vexDisplayStringAt(int32_t xpos, int32_t ypos, const char *format, ...);
int32_t vexDisplayStringHeightGet(const char *pString);
int32_t vexDisplayStringWidthGet(const char *pString);
// N/A vexDisplayTextReference
void vexDisplayTextSize(uint32_t n, uint32_t d);
// N/A vexDisplayTextSmoothing
// N/A vexDisplayTextSpacing
// N/A vexDisplayThemeIdGet
void vexDisplayVBigCenteredString(const int32_t nLineNumber, const char *format, va_list args);
void vexDisplayVBigString(const int32_t nLineNumber, const char *format, va_list args);
void vexDisplayVBigStringAt(int32_t xpos, int32_t ypos, const char *format, va_list args);
void vexDisplayVCenteredString(const int32_t nLineNumber, const char *format, va_list args);
void vexDisplayVPrintf(int32_t xpos, int32_t ypos, uint32_t bOpaque, const char *format, va_list args);
void vexDisplayVSmallStringAt(int32_t xpos, int32_t ypos, const char *format, va_list args);
void vexDisplayVString(const int32_t nLineNumber, const char *format, va_list args);
void vexDisplayVStringAt(int32_t xpos, int32_t ypos, const char *format, va_list args);

/** @}*/

/** @addtogroup distance
 *  @{
 */

uint32_t vexDistanceConfidenceGet(uint32_t index);
// N/A vexDistanceDebugGet
uint32_t vexDistanceDistanceGet(uint32_t index);
// N/A vexDistanceModeGet
// N/A vexDistanceModeSet
int32_t vexDistanceObjectSizeGet(uint32_t index);
double vexDistanceObjectVelocityGet(uint32_t index);
uint32_t vexDistanceStatusGet(uint32_t index);

/** @}*/

// N/A vexEventBitsGet
// N/A vexEventBitsSet
// N/A vexEventDataGet
// N/A vexEventDataSet
// N/A vexEventMaskGet
// N/A vexEventMaskSet

/** @}*/

/** @addtogroup filesystem
 *  @{
 */

void vexFileClose(FIL *fdp);
FRESULT vexFileDirectoryGet(const char *path, char *buffer, uint32_t len);
bool vexFileDriveStatus(uint32_t drive);
FRESULT vexFileMountSD(void);
FIL *vexFileOpen(const char *filename, const char *mode);
FIL *vexFileOpenCreate(const char *filename);
FIL *vexFileOpenWrite(const char *filename);
int32_t vexFileRead(char *buf, uint32_t size, uint32_t nItems, FIL *fdp);
FRESULT vexFileSeek(FIL *fdp, uint32_t offset, int32_t whence);
int32_t vexFileSize(FIL *fdp);
int32_t vexFileTell(FIL *fdp);
int32_t vexFileWrite(char *buf, uint32_t size, uint32_t nItems, FIL *fdp);

/** @}*/

/** @addtogroup datetime
 *  @{
 */

void vexGetdate(struct date *pDate);
void vexGettime(struct time *pTime);

/** @}*/

/** @addtogroup display
 *  @{
 */

uint32_t vexImageBmpRead(const uint8_t *ibuf, v5_image *oBuf, uint32_t maxw, uint32_t maxh);
uint32_t vexImagePngRead(const uint8_t *ibuf, v5_image *oBuf, uint32_t maxw, uint32_t maxh, uint32_t ibuflen);

/** @}*/

/** @addtogroup system
 *  @{
 */

void vexMain(void);

// N/A vexPrivateApiDisable

// N/A vexRadioModeSet
// N/A vexRadioUserDataReceive

int32_t vexScratchMemoryPtr(void **ptr);

uint32_t vexSdkVersion(void);

/** @}*/

/** @addtogroup usbserial
 *  @{
 */

// N/A vexSerialEnableRemoteConsole
int32_t vexSerialPeekChar(uint32_t channel);
int32_t vexSerialReadChar(uint32_t channel);
int32_t vexSerialWriteBuffer(uint32_t channel, uint8_t *data, uint32_t data_len);
int32_t vexSerialWriteChar(uint32_t channel, uint8_t c);
int32_t vexSerialWriteFree(uint32_t channel);

/** @}*/

/** @addtogroup system
 *  @{
 */

// N/A vexStdlibMismatchError
uint32_t vexStdlibVersion(void);
uint32_t vexStdlibVersionLinked(void);
bool vexStdlibVersionVerify(void);

// N/A vexSystemAppDataRes1Get
// N/A vexSystemAppDebugDataGet
// N/A vexSystemAppExtendedDataGet
void vexSystemApplicationIRQHandler(uint32_t ulICCIAR);
void vexSystemBoot(void);
void vexSystemDataAbortInterrupt(void);
void vexSystemDigitalIO(uint32_t pin, uint32_t value);
void vexSystemExitRequest(void);
// N/A vexSystemFileReopen
void vexSystemFIQInterrupt(void);
uint64_t vexSystemHighResTimeGet(void);
// N/A vexSystemIRQInterrupt
uint32_t vexSystemLinkAddrGet(void);
void vexSystemMemoryDump(void);
uint64_t vexSystemPowerupTimeGet(void);
void vexSystemPrefetchAbortInterrupt(void);
uint32_t vexSystemStartupOptions(void);
// N/A vexSystemStdlibImpureDataAddr
// N/A vexSystemStdlibImpureDataSize
// N/A vexSystemStdlibImpurePtrAddr
void vexSystemSWInterrupt(void);
// N/A vexSystemSysCloseInstall
// N/A vexSystemSysFcntlInstall
// N/A vexSystemSysFstatInstall
// N/A vexSystemSysIsattyInstall
// N/A vexSystemSysLseekInstall
// N/A vexSystemSysOpenInstall
// N/A vexSystemSysReadInstall
// N/A vexSystemSysWriteInstall
uint32_t vexSystemTimeGet(void);
void vexSystemTimerClearInterrupt();
// N/A vexSystemTimerDisable
// N/A vexSystemTimerEnable
// N/A vexSystemTimerGet
int32_t vexSystemTimerReinitForRtos(uint32_t priority, void (*handler)(void *data));
void vexSystemTimerStop();
void vexSystemUndefinedException(void);
uint32_t vexSystemUsbStatus(void);
// N/A vexSystemUserWriteInstall
uint32_t vexSystemVersion(void);
uint32_t vexSystemWatchdogGet(void);
int32_t vexSystemWatchdogReinitRtos(void);

/** @}*/

/** @addtogroup display
 *  @{
 */

bool vexTouchDataGet(V5_TouchStatus *status);
void vexTouchUserCallbackSet(void (* callback)(V5_TouchEvent, int32_t, int32_t));

/** @}*/


#ifdef __cplusplus
}
#endif

#endif // IRK_V5_API_H_
