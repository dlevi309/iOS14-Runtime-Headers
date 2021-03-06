/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

typedef struct __CFString* CFStringRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

typedef struct pthread_override_s* pthread_override_sRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __SCPreferences* SCPreferencesRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct {
	long long location;
	long long length;
} SCD_Struct_MF14;

typedef struct {
	unsigned short buffer[64];
	__CFString theString;
	unsigned short directUniCharBuffer;
	char* directCStringBuffer;
	SCD_Struct_MF14 rangeToBuffer;
	long long bufferedRangeStart;
	long long bufferedRangeEnd;
} SCD_Struct_MF15;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFCharacterSet* CFCharacterSetRef;

typedef struct {
	id field1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 2;
} SCD_Struct_MF18;

typedef struct __SecPolicy* SecPolicyRef;

typedef struct NtlmGenerator* NtlmGeneratorRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct SecCmsMessageStr* SecCmsMessageStrRef;

typedef struct SecCmsDigestContextStr* SecCmsDigestContextStrRef;

typedef struct SecCmsSignedDataStr* SecCmsSignedDataStrRef;

typedef struct SecCmsEnvelopedDataStr* SecCmsEnvelopedDataStrRef;

typedef struct SecCmsEncoderStr* SecCmsEncoderStrRef;

