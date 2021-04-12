/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

typedef struct _NSZone* NSZoneRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_HU2;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_HU3;

typedef struct {
	SCD_Struct_HU3 field1;
	SCD_Struct_HU3 field2;
} SCD_Struct_HU4;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	double field1;
} SCD_Struct_HU10;

typedef struct {
	CGPoint origin;
	CGPoint size;
} SCD_Struct_HU11;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct CGPath* CGPathRef;

typedef struct CGContext* CGContextRef;

typedef struct HUGridSize {
	long long rowsDown;
	long long columnsAcross;
} HUGridSize;

typedef struct {
	double minScrollPercentage;
	double maxScrollPercentage;
	double maxValue;
} SCD_Struct_HU16;

typedef struct {
	double topToLabelBaselineDistance;
	double labelBaselineToBottomDistance;
	double minHorizontalPadding;
	double minWidth;
	double heightReduction;
} SCD_Struct_HU17;
