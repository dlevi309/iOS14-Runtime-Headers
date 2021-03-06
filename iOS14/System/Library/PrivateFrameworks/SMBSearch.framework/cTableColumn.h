/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@class fullPropSpec;

@interface cTableColumn : NSObject {

	BOOL _aggregateUsed;
	unsigned char _aggregateType;
	BOOL _valueUsed;
	BOOL _statusUsed;
	BOOL _lengthUsed;
	unsigned short _valueOffset;
	unsigned short _valueSize;
	unsigned short _statusOffset;
	unsigned short _lengthOffset;
	unsigned _vType;
	fullPropSpec* _propSpec;

}

@property (retain) fullPropSpec * propSpec;                  //@synthesize propSpec=_propSpec - In the implementation block
@property (assign) unsigned vType;                           //@synthesize vType=_vType - In the implementation block
@property (assign) BOOL aggregateUsed;                       //@synthesize aggregateUsed=_aggregateUsed - In the implementation block
@property (assign) unsigned char aggregateType;              //@synthesize aggregateType=_aggregateType - In the implementation block
@property (assign) BOOL valueUsed;                           //@synthesize valueUsed=_valueUsed - In the implementation block
@property (assign) unsigned short valueOffset;               //@synthesize valueOffset=_valueOffset - In the implementation block
@property (assign) unsigned short valueSize;                 //@synthesize valueSize=_valueSize - In the implementation block
@property (assign) BOOL statusUsed;                          //@synthesize statusUsed=_statusUsed - In the implementation block
@property (assign) unsigned short statusOffset;              //@synthesize statusOffset=_statusOffset - In the implementation block
@property (assign) BOOL lengthUsed;                          //@synthesize lengthUsed=_lengthUsed - In the implementation block
@property (assign) unsigned short lengthOffset;              //@synthesize lengthOffset=_lengthOffset - In the implementation block
-(unsigned)vType;
-(unsigned char)aggregateType;
-(void)setAggregateType:(unsigned char)arg1 ;
-(unsigned short)statusOffset;
-(unsigned short)lengthOffset;
-(unsigned short)valueOffset;
-(fullPropSpec *)propSpec;
-(void)setPropSpec:(fullPropSpec *)arg1 ;
-(id)initWithPropertyNumber:(int)arg1 WspCtx:(id)arg2 ;
-(void)setVType:(unsigned)arg1 ;
-(BOOL)aggregateUsed;
-(void)setAggregateUsed:(BOOL)arg1 ;
-(BOOL)valueUsed;
-(void)setValueUsed:(BOOL)arg1 ;
-(void)setValueOffset:(unsigned short)arg1 ;
-(unsigned short)valueSize;
-(void)setValueSize:(unsigned short)arg1 ;
-(BOOL)statusUsed;
-(void)setStatusUsed:(BOOL)arg1 ;
-(void)setStatusOffset:(unsigned short)arg1 ;
-(BOOL)lengthUsed;
-(void)setLengthUsed:(BOOL)arg1 ;
-(void)setLengthOffset:(unsigned short)arg1 ;
@end

