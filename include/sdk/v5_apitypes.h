#ifndef IRK_V5_APITYPES_H_
#define IRK_V5_APITYPES_H_


#ifdef __cplusplus
extern "C" {
#endif

#define V5_MAX_DEVICE_PORTS   32

/** @addtogroup device
 *  @{
 */

typedef struct _V5_Device * V5_DeviceT;

typedef enum {
  kDeviceTypeNoSensor        = 0,
  kDeviceTypeMotorSensor     = 2,
  kDeviceTypeLedSensor       = 3,
  kDeviceTypeAbsEncSensor    = 4,
  kDeviceTypeCrMotorSensor   = 5,
  kDeviceTypeImuSensor       = 6,
  kDeviceTypeDistanceSensor  = 7,
  kDeviceTypeRadioSensor     = 8,
  kDeviceTypeTetherSensor    = 9,
  kDeviceTypeBrainSensor     = 10,
  kDeviceTypeVisionSensor    = 11,
  kDeviceTypeAdiSensor       = 12,
  kDeviceTypeRes1Sensor      = 13,
  kDeviceTypeRes2Sensor      = 14,
  kDeviceTypeRes3Sensor      = 15,
  kDeviceTypeOpticalSensor   = 16,
  kDeviceTypeMagnetSensor    = 17,
  kDeviceTypeBumperSensor    = 0x40,
  kDeviceTypeGyroSensor      = 0x46,
  kDeviceTypeSonarSensor     = 0x47,
  kDeviceTypeGenericSensor   = 128,
  kDeviceTypeGenericSerial   = 129,
  kDeviceTypeUndefinedSensor = 255
} V5_DeviceType;

/** @}*/

/** @addtogroup adi
 *  @{
 */

typedef enum _V5_AdiPortConfiguration {
  kAdiPortTypeAnalogIn = 0,
  kAdiPortTypeAnalogOut,
  kAdiPortTypeDigitalIn,
  kAdiPortTypeDigitalOut,

  kAdiPortTypeSmartButton,
  kAdiPortTypeSmartPot,

  kAdiPortTypeLegacyButton,
  kAdiPortTypeLegacyPotentiometer,
  kAdiPortTypeLegacyLineSensor,
  kAdiPortTypeLegacyLightSensor,
  kAdiPortTypeLegacyGyro,
  kAdiPortTypeLegacyAccelerometer,

  kAdiPortTypeLegacyServo,
  kAdiPortTypeLegacyPwm,

  kAdiPortTypeQuadEncoder,
  kAdiPortTypeSonar,

  kAdiPortTypeLegacyPwmSlew,

  kAdiPortTypeUndefined = 255
} V5_AdiPortConfiguration;

/** @}*/

/** @addtogroup bumper
 *  @{
 */

typedef enum _V5_DeviceBumperState {
  kBumperReleased  = 0, /*!< Switch pressed. */
  kBumperPressed   = 1  /*!< Switch released. */
} V5_DeviceBumperState;

/** @}*/

/** @addtogroup controller
 *  @{
 */

typedef enum _V5_ControllerStatus {
  kV5ControllerOffline = 0,
  kV5ControllerTethered,
  kV5ControllerVexnet
} V5_ControllerStatus;

typedef enum _V5_ControllerId {
  kControllerMaster = 0,
  kControllerPartner
} V5_ControllerId;

typedef enum _V5_ControllerIndex {
  Axis1     = 2,
  Axis2     = 3,
  Axis3     = 1,
  Axis4     = 0,
  
  ButtonL1  = 6,
  ButtonL2  = 7,
  ButtonR1  = 8,
  ButtonR2  = 9,

  ButtonUp    = 10,
  ButtonDown  = 11,
  ButtonLeft  = 12,
  ButtonRight = 13,

  ButtonX   = 14,
  ButtonB   = 15,
  ButtonY   = 16,
  ButtonA   = 17,

  ButtonSEL,

  BatteryLevel,

  ButtonAll,
  Flags,
  BatteryCapacity,
} V5_ControllerIndex;

/** @}*/

/** @addtogroup datetime
 *  @{
 */

struct time {
  uint8_t   ti_hour; /*!< Hours */
  uint8_t   ti_min;  /*!< Minutes */
  uint8_t   ti_sec;  /*!< Seconds */
  uint8_t   ti_hund; /*!< Hundredths of seconds */
};

struct date {
  uint16_t  da_year; /*!< Year - 1980 */
  uint8_t   da_day;  /*!< Day of the month */
  uint8_t   da_mon;  /*!< Month (1 = Jan) */
};

/** @}*/

/** @addtogroup imu
 *  @{
 */

typedef struct __attribute__ ((__packed__)) _V5_DeviceImuAttitude {
  double pitch;
  double roll;
  double yaw;
} V5_DeviceImuAttitude;

typedef struct __attribute__ ((__packed__)) _V5_DeviceImuQuaternion {
  double a;
  double b;
  double c;
  double d;
} V5_DeviceImuQuaternion;

typedef struct __attribute__ ((__packed__)) _V5_DeviceImuRaw {
  double x;
  double y;
  double z;
  double w;
} V5_DeviceImuRaw;

/** @}*/

/** @addtogroup led
 *  @{
 */

typedef enum _V5_DeviceLedColor {
  kLedColorBlack   = 0,
  kLedColorRed     = 0xFF0000,
  kLedColorGreen   = 0x00FF00,
  kLedColorBlue    = 0x0000FF,
  kLedColorYellow  = 0xFFFF00,
  kLedColorCyan    = 0x00FFFF,
  kLedColorMagenta = 0xFF00FF,
  kLedColorWhite   = 0xFFFFFF
} V5_DeviceLedColor;

/** @}*/

/** @addtogroup magnet
 *  @{
 */

typedef enum _V5_DeviceMagnetDuration {
  kMagnetDurationShort,
  kMagnetDurationMedium,
  kMagnetDurationLong,
  kMagnetDurationExtraLong,
} V5_DeviceMagnetDuration;

/** @}*/

/** @addtogroup motor
 *  @{
 */

typedef enum _V5_MotorBrakeMode {
  kV5MotorBrakeModeCoast  = 0, 
  kV5MotorBrakeModeBrake  = 1,
  kV5MotorBrakeModeHold   = 2
} V5MotorBrakeMode;

typedef enum  {
  kMotorEncoderDegrees    = 0, /*!< Encoder ticks converted to degrees. */
  kMotorEncoderRotations  = 1, /*!< Encoder ticks converted to rotations. */
  kMotorEncoderCounts     = 2  /*!< Raw encoder ticks converted. */
} V5MotorEncoderUnits;

typedef enum _V5MotorGearset {
  kMotorGearSet_36 = 0, /*!< 100, 36:1 */
  kMotorGearSet_18 = 1, /*!< 200, 18:1 */
  kMotorGearSet_06 = 2  /*!< 600, 6:1 */
} V5MotorGearset;

typedef enum  {
  kMotorControlModeOFF       = 0, /*!< Motor is off and in coast mode. */
  kMotorControlModeBRAKE     = 1, /*!< Motor is off and in brake mode. */
  kMotorControlModeHOLD      = 2, /*!< Motor is holding at the current position. */
  kMotorControlModeSERVO     = 3, /*!< Motor is in "Servo" mode. Move to a position and hold at that position. */
  kMotorControlModePROFILE   = 4, /*!< Motor moves to set position and stops. */
  kMotorControlModeVELOCITY  = 5, /*!< Motor moves forever at set angular velocity. */
  kMotorControlModeUNDEFINED = 6 
} V5MotorControlMode;

typedef struct __attribute__ ((__packed__)) _V5_DeviceMotorPid {
  uint8_t   kf;
  uint8_t   kp;
  uint8_t   ki;
  uint8_t   kd;
  uint8_t   filter;
  uint8_t   pad1;
  uint16_t  limit;
  uint8_t   threshold;
  uint8_t   loopspeed;
  uint8_t   pad2[2];
} V5_DeviceMotorPid;

/** @}*/

/** @addtogroup optical
 *  @{
 */

typedef struct _V5_DeviceOpticalGesture {
  uint8_t   udata;
  uint8_t   ddata;
  uint8_t   ldata;
  uint8_t   rdata;
  uint8_t   type;
  uint8_t   pad;
  uint16_t  count;
  uint32_t  time;
} V5_DeviceOpticalGesture;

typedef struct _V5_DeviceOpticalRaw {
  uint16_t clear;
  uint16_t red;
  uint16_t green;
  uint16_t blue;
} V5_DeviceOpticalRaw;

typedef struct _V5_DeviceOpticalRgb {
  double red;
  double green;
  double blue;
  double brightness;
} V5_DeviceOpticalRgb;

/** @}*/

/** @addtogroup vision
 *  @{
 */

typedef struct __attribute__ ((__packed__)) _V5_DeviceVisionRgb {
  uint8_t red;
  uint8_t green;
  uint8_t blue;
  uint8_t brightness;
} V5_DeviceVisionRgb;

typedef enum {
  kVisionLedModeAuto    = 0,
  kVisionLedModeManual  = 1
} V5VisionLedMode;

typedef enum {
  kVisionModeNormal      = 0,
  kVisionModeMixed       = 1,
  kVisionModeLineDetect  = 2,
  kVisionTypeTest        = 3
} V5VisionMode;

typedef enum {
  kVisionTypeNormal      = 0,
  kVisionTypeColorCode   = 1,
  kVisionTypeLineDetect  = 2
} V5VisionBlockType;

typedef struct __attribute__ ((__packed__)) _V5_DeviceVisionObject {
  uint16_t           signature;  /*!< Object signature. */
  V5VisionBlockType  type;       /*!< Object type. */
  uint16_t           xoffset;    /*!< Left edge of object. */
  uint16_t           yoffset;    /*!< Top edge of object. */
  uint16_t           width;      /*!< Width of object. */
  uint16_t           height;     /*!< Height of object. */
  uint16_t           angle;      /*!< Angle of Color Code object in 0.1 deg increments. */
} V5_DeviceVisionObject;

typedef struct __attribute__ ((__packed__)) _V5_DeviceVisionSignature {
  uint8_t   id;
  uint8_t   flags;
  uint8_t   pad[2];
  float     range;
  int32_t   uMin;
  int32_t   uMax;
  int32_t   uMean;
  int32_t   vMin;
  int32_t   vMax;
  int32_t   vMean;
  uint32_t  mRgb;
  uint32_t  mType;
} V5_DeviceVisionSignature;

typedef enum {
  kVisionWBNormal  = 0,
  kVisionWBStart   = 1,
  kVisionWBManual  = 2
} V5VisionWBMode;

typedef enum {
  kVisionWifiModeOff  = 0,
  kVisionWifiModeOn   = 1
} V5VisionWifiMode;

/** @}*/

/** @addtogroup filesystem
 *  @{
 */

typedef   void      FIL;

#define   FS_SEEK_SET     0
#define   FS_SEEK_CUR     1
#define   FS_SEEK_END     2

typedef enum {
  FR_OK                   = 0,  /*!< Succeeded */
  FR_DISK_ERR             = 1,  /*!< A hard error occurred in the low level disk I/O layer */
  FR_INT_ERR              = 2,  /*!< Assertion failed */
  FR_NOT_READY            = 3,  /*!< The physical drive cannot work */
  FR_NO_FILE              = 4,  /*!< Could not find the file */
  FR_NO_PATH              = 5,  /*!< Could not find the path */
  FR_INVALID_NAME         = 6,  /*!< The path name format is invalid */
  FR_DENIED               = 7,  /*!< Access denied due to prohibited access or directory full */
  FR_EXIST                = 8,  /*!< Access denied due to prohibited access */
  FR_INVALID_OBJECT       = 9,  /*!< The file/directory object is invalid */
  FR_WRITE_PROTECTED      = 10, /*!< The physical drive is write protected */
  FR_INVALID_DRIVE        = 11, /*!< The logical drive number is invalid */
  FR_NOT_ENABLED          = 12, /*!< The volume has no work area */
  FR_NO_FILESYSTEM        = 13, /*!< There is no valid FAT volume */
  FR_MKFS_ABORTED         = 14, /*!< The f_mkfs() aborted due to any parameter error */
  FR_TIMEOUT              = 15, /*!< Could not get a grant to access the volume within defined period */
  FR_LOCKED               = 16, /*!< The operation is rejected according to the file sharing policy */
  FR_NOT_ENOUGH_CORE      = 17, /*!< LFN working buffer could not be allocated */
  FR_TOO_MANY_OPEN_FILES  = 18, /*!< Number of open files > _FS_SHARE */
  FR_INVALID_PARAMETER    = 19  /*!< Given parameter is invalid */
} FRESULT;

/** @}*/

/** @addtogroup display
 *  @{
 */

typedef struct __attribute__ ((__packed__)) _v5_image {
  uint16_t  width;
  uint16_t  height;
  uint32_t *data;
  uint32_t *p;
} v5_image;

typedef enum _touchEvent {
  kTouchEventRelease,
  kTouchEventPress,
  kTouchEventPressAuto
} V5_TouchEvent;

typedef struct _V5_TouchStatus {
  V5_TouchEvent lastEvent;
  int16_t lastXpos;
  int16_t lastYpos;
  int32_t pressCount;
  int32_t releaseCount;
} V5_TouchStatus;

/** @}*/


#ifdef __cplusplus
}
#endif

#endif // IRK_V5_APITYPES_H_
