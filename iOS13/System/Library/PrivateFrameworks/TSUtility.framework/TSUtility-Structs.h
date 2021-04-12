/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@class NSString, <TSUMultipleChoiceListChoiceProviding>;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_TS1;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFDateFormatter* CFDateFormatterRef;

typedef struct __CFLocale* CFLocaleRef;

typedef struct __CFDate* CFDateRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFNumberFormatter* CFNumberFormatterRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct __CFSet* CFSetRef;

typedef struct CGContext* CGContextRef;

typedef struct CGColor* CGColorRef;

typedef struct CGPath* CGPathRef;

typedef struct _compressed_pair<std::__1::shared_ptr<TSUStringChunk> *, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > > {
	shared_ptr<TSUStringChunk> __value_;
} compressed_pair<std::__1::shared_ptr<TSUStringChunk> *, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > >;

typedef struct vector<std::__1::shared_ptr<TSUStringChunk>, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > > {
	shared_ptr<TSUStringChunk> __begin_;
	shared_ptr<TSUStringChunk> __end_;
	compressed_pair<std::__1::shared_ptr<TSUStringChunk> *, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > > __end_cap_;
} vector<std::__1::shared_ptr<TSUStringChunk>, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > >;

typedef struct {
	long long field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
	/*function pointer*/void* field6;
} SCD_Struct_TS17;

typedef struct {
	long long field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_TS18;

typedef struct CGImage* CGImageRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct {
	NSString* mCurrencyCode;
	unsigned mDecimalPlaces : 8;
	unsigned mNegativeStyle : 3;
	unsigned mShowThousandsSeparator : 1;
	unsigned mUseAccountingStyle : 1;
} SCD_Struct_TS21;

typedef struct {
	unsigned mFractionAccuracy : 8;
} SCD_Struct_TS22;

typedef struct {
	unsigned mBase : 8;
	unsigned mBasePlaces : 8;
	unsigned mBaseUseMinusSign : 1;
} SCD_Struct_TS23;

typedef struct {
	unsigned mSuppressDateFormat : 1;
	unsigned mSuppressTimeFormat : 1;
	NSString* mDateTimeFormat;
} SCD_Struct_TS24;

typedef struct {
	unsigned mUseAutomaticUnits : 1;
	int mDurationUnitSmallest;
	int mDurationUnitLargest;
	int mDurationStyle;
} SCD_Struct_TS25;

typedef struct {
	double mMinimum;
	double mMaximum;
	double mIncrement;
	int mDisplayFormatType;
	unsigned mOrientation : 2;
	unsigned mPosition : 2;
} SCD_Struct_TS26;

typedef struct {
	int mInitialValue;
	unsigned mMultipleChoiceListFormatID;
	<TSUMultipleChoiceListChoiceProviding>* mData;
} SCD_Struct_TS27;

typedef struct {
	unsigned mCustomFormatID;
	/*function pointer*/void* mData;
} SCD_Struct_TS28;

typedef struct {
	int mFormatType;
	/*function pointer*/void* ;
	SCD_Struct_TS21 mNumberFormatStruct;
	SCD_Struct_TS22 mFractionFormatStruct;
	SCD_Struct_TS23 mBaseFormatStruct;
	SCD_Struct_TS24 mDateFormatStruct;
	SCD_Struct_TS25 mDurationFormatStruct;
	SCD_Struct_TS28 mCustomFormatStruct;
	SCD_Struct_TS26 mControlFormatStruct;
	SCD_Struct_TS27) mMultipleChoiceListFormatStruct;
} SCD_Struct_TS29;

typedef struct {
	id field1;
	unsigned field2 : 8;
	unsigned field3 : 3;
	unsigned field4 : 1;
	unsigned field5 : 1;
} SCD_Struct_TS30;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	id field3;
} SCD_Struct_TS31;

typedef struct {
	int field1;
	unsigned field2;
	id field3;
} SCD_Struct_TS32;

typedef struct {
	int( field1;
	/*function pointer*/void* field2;
	= field3;
	SCD_Struct_TS22 field4;
	SCD_Struct_TS23 field5;
	SCD_Struct_TS25 field6;
	SCD_Struct_TS26 field7;
	SCD_Struct_TS28 field8;
	SCD_Struct_TS30 field9;
	SCD_Struct_TS31 field10;
	SCD_Struct_TS32) field11;
} SCD_Struct_TS33;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	id field5;
	double field6;
	unsigned field7 : 8;
	unsigned char field8;
	unsigned char field9;
	unsigned char field10;
	unsigned char field11;
	unsigned char field12;
	unsigned char field13;
	unsigned char field14;
	unsigned field15 : 1;
	unsigned field16 : 1;
	unsigned field17 : 1;
	unsigned field18 : 1;
	unsigned field19 : 1;
	unsigned field20 : 1;
} SCD_Struct_TS34;

typedef struct _CCCryptor* CCCryptorRef;

typedef struct CGDataProvider* CGDataProviderRef;

typedef struct _xmlTextReader* xmlTextReaderRef;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef struct __CTFont* CTFontRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;
