/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

typedef struct {
	BOOL field1;
	BOOL field2;
	double field3;
	BOOL field4;
	double field5;
	double field6;
	double field7;
	double field8;
	BOOL field9;
	BOOL field10;
	BOOL field11;
	unsigned long long field12;
} SCD_Struct_CS0;

typedef struct {
	double field1;
	BOOL field2;
} SCD_Struct_CS1;

typedef struct {
	SCD_Struct_CS1 field1;
	SCD_Struct_CS1 field2;
} SCD_Struct_CS2;

typedef struct {
	double field1;
	SCD_Struct_CS2 field2;
	long long field3;
} SCD_Struct_CS3;

typedef struct {
	double value;
	BOOL inclusive;
} SCD_Struct_CS4;

typedef struct {
	SCD_Struct_CS4 start;
	SCD_Struct_CS4 end;
} SCD_Struct_CS5;

typedef struct {
	double value;
	SCD_Struct_CS5 interval;
	long long mode;
} SCD_Struct_CS6;

typedef struct {
	double field1;
	SCD_Struct_CS5 field2;
	long long field3;
} SCD_Struct_CS7;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	long long field1;
	CGPoint field2;
	CGPoint field3;
} SCD_Struct_CS9;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct _NSZone* NSZoneRef;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

