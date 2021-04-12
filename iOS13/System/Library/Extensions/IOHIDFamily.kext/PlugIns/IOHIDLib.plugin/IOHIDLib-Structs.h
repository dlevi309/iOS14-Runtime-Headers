/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
*/


@class NSMutableArray;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
	unsigned char field8;
	unsigned char field9;
	unsigned char field10;
	unsigned char field11;
	unsigned char field12;
	unsigned char field13;
	unsigned char field14;
	unsigned char field15;
	unsigned char field16;
} SCD_Struct_IO0;

typedef struct __IOHIDElement* IOHIDElementRef;

typedef struct __IOHIDValue* IOHIDValueRef;

typedef struct IOHIDElementStruct {
	unsigned cookieMin;
	unsigned cookieMax;
	unsigned parentCookie;
	unsigned type;
	unsigned collectionType;
	unsigned flags;
	unsigned usagePage;
	unsigned usageMin;
	unsigned usageMax;
	int min;
	int max;
	int scaledMin;
	int scaledMax;
	unsigned size;
	unsigned reportSize;
	unsigned reportCount;
	unsigned reportID;
	unsigned unit;
	unsigned unitExponent;
	unsigned duplicateValueSize;
	unsigned duplicateIndex;
	unsigned bytes;
	unsigned valueLocation;
	unsigned valueSize;
} IOHIDElementStruct;

typedef struct __CFMachPort* CFMachPortRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	int field6;
} SCD_Struct_IO6;

typedef struct {
	NSMutableArray* input;
	NSMutableArray* output;
	NSMutableArray* feature;
} SCD_Struct_IO7;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct __CFDictionary* CFDictionaryRef;
