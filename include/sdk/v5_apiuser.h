#ifndef IRK_V5_APIUSER_H_
#define IRK_V5_APIUSER_H_


#include <stdint.h>
#include <stdbool.h>

#include "v5_apitypes.h"

#ifdef __cplusplus
extern "C" {
#endif

int32_t vexAbsEncAngleGet(uint32_t index);
// N/A vexAbsEncDebugGet
// N/A vexAbsEncModeGet
// N/A vexAbsEncModeSet
// N/A vexAbsEncOffsetGet
// N/A vexAbsEncOffsetSet
int32_t vexAbsEncPositionGet(uint32_t index);
void vexAbsEncPositionSet(uint32_t index, int32_t position);
void vexAbsEncReset(uint32_t index);
bool vexAbsEncReverseFlagGet(uint32_t index);
void vexAbsEncReverseFlagSet(uint32_t index, bool value);
uint32_t vexAbsEncStatusGet(uint32_t index);
// N/A vexAbsEncTemperatureGet
int32_t vexAbsEncVelocityGet(uint32_t index);

V5_AdiPortConfiguration vexAdiPortConfigGet(uint32_t index, uint32_t port);
void vexAdiPortConfigSet(uint32_t index, uint32_t port, V5_AdiPortConfiguration type);
int32_t vexAdiValueGet(uint32_t index, uint32_t port);
void vexAdiValueSet(uint32_t index, uint32_t port, int32_t value);
// N/A vexAdiVoltageGet

V5_DeviceBumperState vexBumperGet(uint32_t index);

void vexDelay(uint32_t timems);

void vexGenericSerialBaudrate(uint32_t index, int32_t baudrate);
// N/A vexGenericSerialDisableAll
void vexGenericSerialEnable(uint32_t index, int32_t options);
void vexGenericSerialFlush(uint32_t index);
int32_t vexGenericSerialPeekChar(uint32_t index);
int32_t vexGenericSerialReadChar(uint32_t index);
int32_t vexGenericSerialReceive(uint32_t index, uint8_t *buffer, int32_t length);
int32_t vexGenericSerialReceiveAvail(uint32_t index);
int32_t vexGenericSerialTransmit(uint32_t index, uint8_t *buffer, int32_t length);
int32_t vexGenericSerialWriteChar(uint32_t index, uint8_t c);
int32_t vexGenericSerialWriteFree(uint32_t index);

int32_t vexGenericValueGet(uint32_t index);

double vexGyroDegreesGet(uint32_t index);
double vexGyroHeadingGet(uint32_t index);
void vexGyroReset(uint32_t index);

void vexImuAttitudeGet(uint32_t index, V5_DeviceImuAttitude *data);
// N/A vexImuCollisionDataGet
void vexImuDataRateSet(uint32_t index, uint32_t rate);
// N/A vexImuDebugGet
double vexImuDegreesGet(uint32_t index);
double vexImuHeadingGet(uint32_t index);
uint32_t vexImuModeGet(uint32_t index);
void vexImuModeSet(uint32_t index, uint32_t mode);
void vexImuQuaternionGet(uint32_t index, V5_DeviceImuQuaternion *data);
void vexImuRawAccelGet(uint32_t index, V5_DeviceImuRaw *data);
void vexImuRawGyroGet(uint32_t index, V5_DeviceImuRaw *data);
void vexImuReset(uint32_t index);
uint32_t vexImuStatusGet(uint32_t index);
// N/A vexImuTemperatureGet

V5_DeviceLedColor vexLedGet(uint32_t index);
uint32_t vexLedRgbGet(uint32_t index);
void vexLedRgbSet(uint32_t index, uint32_t color);
void vexLedSet(uint32_t index, V5_DeviceLedColor value);

double vexMagnetCurrentGet(uint32_t index);
// N/A vexMagnetDebugGet
void vexMagnetDrop(uint32_t index, V5_DeviceMagnetDuration duration);
// N/A vexMagnetModeGet
// N/A vexMagnetModeSet
void vexMagnetPickup(uint32_t index, V5_DeviceMagnetDuration duration);
int32_t vexMagnetPowerGet(uint32_t index);
void vexMagnetPowerSet(uint32_t index, int32_t value, int32_t time);
uint32_t vexMagnetStatusGet(uint32_t index);
double vexMagnetTemperatureGet(uint32_t index);

// N/A vexMain

void vexMotorAbsoluteTargetSet(uint32_t index, double position, int32_t velocity);
double vexMotorActualVelocityGet(uint32_t index);
V5MotorBrakeMode vexMotorBrakeModeGet(uint32_t index);
void vexMotorBrakeModeSet(uint32_t index, V5MotorBrakeMode mode);
int32_t vexMotorCurrentGet(uint32_t index);
bool vexMotorCurrentLimitFlagGet(uint32_t index);
int32_t vexMotorCurrentLimitGet(uint32_t index);
void vexMotorCurrentLimitSet(uint32_t index, int32_t value);
int32_t vexMotorDirectionGet(uint32_t index);
double vexMotorEfficiencyGet(uint32_t index);
V5MotorEncoderUnits vexMotorEncoderUnitsGet(uint32_t index);
void vexMotorEncoderUnitsSet(uint32_t index, V5MotorEncoderUnits units);
uint32_t vexMotorFaultsGet(uint32_t index);
uint32_t vexMotorFlagsGet(uint32_t index);
V5MotorGearset vexMotorGearingGet(uint32_t index);
void vexMotorGearingSet(uint32_t index, V5MotorGearset value);
V5MotorControlMode vexMotorModeGet(uint32_t index);
void vexMotorModeSet(uint32_t index, V5MotorControlMode mode);
bool vexMotorOverTempFlagGet(uint32_t index);
double vexMotorPositionGet(uint32_t index);
void vexMotorPositionPidSet(uint32_t index, V5_DeviceMotorPid *pid);
int32_t vexMotorPositionRawGet(uint32_t index, uint32_t *timestamp);
void vexMotorPositionReset(uint32_t index);
void vexMotorPositionSet(uint32_t index, double position);
double vexMotorPowerGet(uint32_t index);
int32_t vexMotorPwmGet(uint32_t index);
void vexMotorPwmSet(uint32_t index, int32_t value);
void vexMotorRelativeTargetSet(uint32_t index, double position, int32_t velocity);
bool vexMotorReverseFlagGet(uint32_t index);
void vexMotorReverseFlagSet(uint32_t index, bool value);
void vexMotorServoTargetSet(uint32_t index, double position);
double vexMotorTargetGet(uint32_t index);
double vexMotorTemperatureGet(uint32_t index);
double vexMotorTorqueGet(uint32_t index);
int32_t vexMotorVelocityGet(uint32_t index);
void vexMotorVelocityPidSet(uint32_t index, V5_DeviceMotorPid *pid);
void vexMotorVelocitySet(uint32_t index, int32_t velocity);
void vexMotorVelocityUpdate(uint32_t index, int32_t velocity);
int32_t vexMotorVoltageGet(uint32_t index);
int32_t vexMotorVoltageLimitGet(uint32_t index);
void vexMotorVoltageLimitSet(uint32_t index, int32_t value);
void vexMotorVoltageSet(uint32_t index, int32_t value);
bool vexMotorZeroPositionFlagGet(uint32_t index);
bool vexMotorZeroVelocityFlagGet(uint32_t index);

double vexOpticalBrightnessGet(uint32_t index);
// N/A vexOpticalDebugGet
// N/A vexOpticalGainSet
void vexOpticalGestureDisable(uint32_t index);
void vexOpticalGestureEnable(uint32_t index);
uint32_t vexOpticalGestureGet(uint32_t index, V5_DeviceOpticalGesture *pData);
double vexOpticalHueGet(uint32_t index);
int32_t vexOpticalLedPwmGet(uint32_t index);
void vexOpticalLedPwmSet(uint32_t index, int32_t value);
// N/A vexOpticalMatrixGet
// N/A vexOpticalMatrixSet
uint32_t vexOpticalModeGet(uint32_t index);
void vexOpticalModeSet(uint32_t index, uint32_t mode);
int32_t vexOpticalProximityGet(uint32_t index);
int32_t vexOpticalProximityThreshold(uint32_t index, int32_t value);
void vexOpticalRawGet(uint32_t index, V5_DeviceOpticalRaw *data);
void vexOpticalRgbGet(uint32_t index, V5_DeviceOpticalRgb *data);
double vexOpticalSatGet(uint32_t index);
uint32_t vexOpticalStatusGet(uint32_t index);

int32_t vexRangeValueGet(uint32_t index);

int32_t vexSonarValueGet(uint32_t index);

uint8_t vexVisionBrightnessGet(uint32_t index);
void vexVisionBrightnessSet(uint32_t index, uint8_t percent);
uint8_t vexVisionLedBrigntnessGet(uint32_t index);
void vexVisionLedBrigntnessSet(uint32_t index, uint8_t percent);
V5_DeviceVisionRgb vexVisionLedColorGet(uint32_t index);
void vexVisionLedColorSet(uint32_t index, V5_DeviceVisionRgb color);
V5VisionLedMode vexVisionLedModeGet(uint32_t index);
void vexVisionLedModeSet(uint32_t index, V5VisionLedMode mode);
V5VisionMode vexVisionModeGet(uint32_t index);
void vexVisionModeSet(uint32_t index, V5VisionMode mode);
int32_t vexVisionObjectCountGet(uint32_t index);
int32_t vexVisionObjectGet(uint32_t index, uint32_t indexObj, V5_DeviceVisionObject *pObject);
bool vexVisionSignatureGet(uint32_t index, uint32_t id, V5_DeviceVisionSignature *pSignature);
void vexVisionSignatureSet(uint32_t index, V5_DeviceVisionSignature *pSignature);
V5VisionWBMode vexVisionWhiteBalanceModeGet(uint32_t index);
void vexVisionWhiteBalanceModeSet(uint32_t index, V5VisionWBMode mode);
V5_DeviceVisionRgb vexVisionWhiteBalanceGet(uint32_t index);
void vexVisionWhiteBalanceSet(uint32_t index, V5_DeviceVisionRgb color);
V5VisionWifiMode vexVisionWifiModeGet(uint32_t index);
void vexVisionWifiModeSet(uint32_t index, V5VisionWifiMode mode);


#ifdef __cplusplus
}
#endif

#endif // IRK_V5_APIUSER_H_
