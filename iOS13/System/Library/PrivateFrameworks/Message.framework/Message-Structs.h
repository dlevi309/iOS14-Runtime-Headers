/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFString* CFStringRef;

typedef struct {
	id field1;
	id field2;
	id field3;
	unsigned field4;
	float field5;
	unsigned long long field6;
	double field7;
	unsigned field8;
	unsigned field9;
	sqlite3 field10;
	BOOL field11;
	id field12;
	BOOL field13;
} SCD_Struct_MF3;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct archive* archiveRef;

typedef struct archive_entry* archive_entryRef;

typedef struct sqlite3* sqlite3Ref;

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
} SCD_Struct_MF20;

typedef struct {
	unsigned short buffer[64];
	__CFString theString;
	unsigned short directUniCharBuffer;
	char* directCStringBuffer;
	SCD_Struct_MF20 rangeToBuffer;
	long long bufferedRangeStart;
	long long bufferedRangeEnd;
} SCD_Struct_MF21;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFCharacterSet* CFCharacterSetRef;

typedef struct {
	id field1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 2;
} SCD_Struct_MF24;

typedef struct __SecPolicy* SecPolicyRef;

typedef struct NtlmGenerator* NtlmGeneratorRef;

typedef struct SecCmsMessageStr* SecCmsMessageStrRef;

typedef struct SecCmsDigestContextStr* SecCmsDigestContextStrRef;

typedef struct SecCmsSignedDataStr* SecCmsSignedDataStrRef;

typedef struct SecCmsEnvelopedDataStr* SecCmsEnvelopedDataStrRef;

typedef struct SecCmsEncoderStr* SecCmsEncoderStrRef;
