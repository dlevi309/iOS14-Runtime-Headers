/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct __GSEvent* GSEventRef;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	BOOL field5;
	double field6;
	int field7;
} SCD_Struct_SB4;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _NSZone* NSZoneRef;

typedef struct UIRectCornerRadii {
	double topLeft;
	double bottomLeft;
	double bottomRight;
	double topRight;
} UIRectCornerRadii;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct __CFString* CFStringRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_SB12;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGColor* CGColorRef;

typedef struct {
	long long field1;
	CGPoint field2;
	CGPoint field3;
} SCD_Struct_SB15;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct __WiFiNetwork* WiFiNetworkRef;

typedef struct {
	long long startStyle;
	long long endStyle;
	double transitionFraction;
} SCD_Struct_SB20;

typedef struct {
	BOOL valid;
	SCD_Struct_SB20 styleTransitionState;
} SCD_Struct_SB21;

typedef struct {
	BOOL field1;
	SCD_Struct_SB20 field2;
} SCD_Struct_SB22;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct BKSDisplayBrightnessTransaction* BKSDisplayBrightnessTransactionRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct MGNotificationTokenStruct* MGNotificationTokenStructRef;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct SBDragPreviewShadowParameters {
	double shadowOpacity;
	double shadowRadius;
	CGSize shadowOffset;
} SBDragPreviewShadowParameters;

typedef struct __CFArray* CFArrayRef;

typedef struct AWNotification_s* AWNotification_sRef;

typedef struct _CARenderImage* CARenderImageRef;

typedef struct {
	unsigned secondaryDisplayItemRole : 1;
} SCD_Struct_SB33;

typedef struct {
	BOOL field1[43];
	char field2[64];
	char field3[64];
	char field4[256];
	int field5;
	int field6;
	int field7;
	int field8;
	char field9[100];
	char field10[100];
	char field11[100];
	char field12[100];
	char field13[100];
	char field14[2][1024];
	unsigned field15;
	unsigned field16;
	unsigned field17 : 1;
	unsigned field18 : 1;
	int field19;
	int field20;
	unsigned field21 : 1;
	unsigned field22;
	unsigned field23;
	int field24;
	unsigned field25;
	char field26[150];
	int field27;
	int field28;
	unsigned field29 : 1;
	unsigned field30 : 1;
	unsigned field31 : 1;
	char field32[256];
	unsigned field33 : 1;
	unsigned field34 : 1;
	unsigned field35 : 1;
	unsigned field36 : 1;
	unsigned field37 : 2;
	unsigned field38 : 1;
	unsigned field39;
	unsigned field40 : 1;
	unsigned field41 : 1;
	unsigned field42 : 1;
	char field43[256];
	char field44[256];
	char field45[100];
	unsigned field46 : 1;
	unsigned field47 : 1;
	unsigned field48 : 1;
	unsigned field49 : 1;
	double field50;
	unsigned field51 : 1;
	unsigned field52 : 1;
	char field53[100];
	char field54[100];
} SCD_Struct_SB34;

typedef struct CGImage* CGImageRef;

typedef struct {
	double value;
	BOOL inclusive;
} SCD_Struct_SB36;

typedef struct {
	SCD_Struct_SB36 start;
	SCD_Struct_SB36 end;
} SCD_Struct_SB37;

typedef struct {
	unsigned val[8];
} SCD_Struct_SB38;

typedef struct {
	BOOL field1[43];
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 2;
	unsigned field11 : 1;
	unsigned field12 : 1;
	unsigned field13 : 1;
	unsigned field14 : 1;
	unsigned field15 : 1;
	unsigned field16 : 1;
	unsigned field17 : 1;
	unsigned field18 : 1;
	unsigned field19 : 1;
	unsigned field20 : 1;
	unsigned field21 : 1;
	unsigned field22 : 1;
	unsigned field23 : 1;
	unsigned field24 : 1;
	unsigned field25 : 1;
	unsigned field26 : 1;
	unsigned field27 : 1;
	unsigned field28;
	unsigned field29 : 1;
	unsigned field30 : 1;
	unsigned field31 : 1;
	unsigned field32 : 1;
	unsigned field33 : 1;
	unsigned field34 : 1;
	unsigned field35 : 1;
	SCD_Struct_SB34 field36;
} SCD_Struct_SB39;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_SB40;

typedef struct SBReachabilityActivationContext {
	CGPoint location;
	CGPoint translation;
	CGPoint velocity;
	CGRect viewBounds;
	BOOL everTranslatedUpwards;
} SBReachabilityActivationContext;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	BOOL itemIsEnabled[43];
	char timeString[64];
	char shortTimeString[64];
	char dateString[256];
	int gsmSignalStrengthRaw;
	int secondaryGsmSignalStrengthRaw;
	int gsmSignalStrengthBars;
	int secondaryGsmSignalStrengthBars;
	char serviceString[100];
	char secondaryServiceString[100];
	char serviceCrossfadeString[100];
	char secondaryServiceCrossfadeString[100];
	char serviceImages[2][100];
	char operatorDirectory[1024];
	unsigned serviceContentType;
	unsigned secondaryServiceContentType;
	unsigned cellLowDataModeActive : 1;
	unsigned secondaryCellLowDataModeActive : 1;
	int wifiSignalStrengthRaw;
	int wifiSignalStrengthBars;
	unsigned wifiLowDataModeActive : 1;
	unsigned dataNetworkType;
	unsigned secondaryDataNetworkType;
	int batteryCapacity;
	unsigned batteryState;
	char batteryDetailString[150];
	int bluetoothBatteryCapacity;
	int thermalColor;
	unsigned thermalSunlightMode : 1;
	unsigned slowActivity : 1;
	unsigned syncActivity : 1;
	char activityDisplayId[256];
	unsigned bluetoothConnected : 1;
	unsigned displayRawGSMSignal : 1;
	unsigned displayRawWifiSignal : 1;
	unsigned locationIconType : 1;
	unsigned voiceControlIconType : 2;
	unsigned quietModeInactive : 1;
	unsigned tetheringConnectionCount;
	unsigned batterySaverModeActive : 1;
	unsigned deviceIsRTL : 1;
	unsigned lock : 1;
	char breadcrumbTitle[256];
	char breadcrumbSecondaryTitle[256];
	char personName[100];
	unsigned electronicTollCollectionAvailable : 1;
	unsigned radarAvailable : 1;
	unsigned wifiLinkWarning : 1;
	unsigned wifiSearching : 1;
	double backgroundActivityDisplayStartDate;
	unsigned shouldShowEmergencyOnlyStatus : 1;
	unsigned secondaryCellularConfigured : 1;
	char primaryServiceBadgeString[100];
	char secondaryServiceBadgeString[100];
} SCD_Struct_SB43;

typedef struct {
	BOOL usedQuickActionButton;
	BOOL scrolledInNotifications;
	BOOL longLookedNotification;
	BOOL interactedNotifcation;
	BOOL clearedNotifcations;
	BOOL activatedCamera;
	BOOL prewarmedCameraFalsePositive;
	BOOL cameraSwipeFailed;
	BOOL activatedControlCenter;
	BOOL activatedSpotlight;
	BOOL unlockDismissed;
} SCD_Struct_SB44;

typedef struct SBWindowLevelRange_struct {
	double start;
	double end;
} SBWindowLevelRange_struct;
