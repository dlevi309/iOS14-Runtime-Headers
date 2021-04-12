/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSData, NSString, GPBMessage, GPBEnumDescriptor, NSOutputStream;

typedef struct GPBCodedInputStreamState {
	char* bytes;
	unsigned long long bufferSize;
	unsigned long long bufferPos;
	unsigned long long currentLimit;
	int lastTag;
	unsigned long long recursionDepth;
} GPBCodedInputStreamState;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef union {
	BOOL valueBool;
	int valueInt32;
	long long valueInt64;
	unsigned valueUInt32;
	unsigned long long valueUInt64;
	float valueFloat;
	double valueDouble;
	NSData* valueData;
	NSString* valueString;
	GPBMessage* valueMessage;
	int valueEnum;
} SCD_Union_GP3;

typedef union {
	GPBEnumDescriptor* enumDescriptor_;
	/*function pointer*/void* enumVerifier_;
} SCD_Union_GP4;

typedef struct ccvrf {
	unsigned long long publickey_nbytes;
	unsigned long long secretkey_nbytes;
	unsigned long long proof_nbytes;
	unsigned long long hash_nbytes;
	unsigned long long group_nbytes;
	ccdigest_info di;
	void custom;
	/*function pointer*/void* derive_public_key;
	/*function pointer*/void* prove;
	/*function pointer*/void* verify;
	/*function pointer*/void* proof_to_hash;
} ccvrf;

typedef struct GPBOutputBufferState {
	char* bytes;
	unsigned long long size;
	unsigned long long position;
	NSOutputStream* output;
} GPBOutputBufferState;

typedef struct __CFString* CFStringRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_GP8;

typedef struct __SecPolicy* SecPolicyRef;

typedef struct __SecCertificate* SecCertificateRef;
