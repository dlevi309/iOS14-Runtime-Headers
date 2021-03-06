/*
* Generated on Thursday, January 14, 2021 at 2:29:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
*/


#import <IOHIDLib/IOHIDLib-Structs.h>
@class NSString, NSData;

@interface HIDLibElement : NSObject {

	IOHIDElementRef _element;
	IOHIDValueRef _value;
	IOHIDValueRef _defaultValue;
	NSString* _psKey;
	IOHIDElementStruct _elementStruct;
	BOOL _isConstant;
	BOOL _isUpdated;

}

@property (assign) IOHIDElementRef elementRef;                      //@synthesize element=_element - In the implementation block
@property (assign) IOHIDValueRef valueRef;                          //@synthesize value=_value - In the implementation block
@property (assign) IOHIDValueRef defaultValueRef;                   //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign) long long integerValue; 
@property (retain) NSData * dataValue; 
@property (copy) NSString * psKey;                                  //@synthesize psKey=_psKey - In the implementation block
@property (readonly) unsigned long long timestamp; 
@property (readonly) long long length; 
@property (readonly) IOHIDElementStruct elementStruct;              //@synthesize elementStruct=_elementStruct - In the implementation block
@property (assign) BOOL isConstant;                                 //@synthesize isConstant=_isConstant - In the implementation block
@property (assign) BOOL isUpdated;                                  //@synthesize isUpdated=_isUpdated - In the implementation block
@property (readonly) unsigned elementCookie; 
@property (readonly) unsigned collectionCookie; 
@property (readonly) int type; 
@property (readonly) unsigned usage; 
@property (readonly) unsigned usagePage; 
@property (readonly) unsigned unit; 
@property (readonly) unsigned char unitExponent; 
@property (readonly) unsigned char reportID; 
@property (readonly) unsigned usageMin; 
@property (readonly) unsigned usageMax; 
@property (readonly) int collectionType; 
-(long long)integerValue;
-(unsigned)usage;
-(NSData *)dataValue;
-(void)setDataValue:(NSData *)arg1 ;
-(unsigned long long)timestamp;
-(long long)length;
-(NSString *)psKey;
-(id)description;
-(unsigned)usagePage;
-(void)setIntegerValue:(long long)arg1 ;
-(unsigned)unit;
-(BOOL)isUpdated;
-(int)type;
-(BOOL)isConstant;
-(int)collectionType;
-(unsigned char)reportID;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(IOHIDElementRef)elementRef;
-(unsigned char)unitExponent;
-(void)setIsUpdated:(BOOL)arg1 ;
-(void)setValueRef:(IOHIDValueRef)arg1 ;
-(IOHIDValueRef)valueRef;
-(id)initWithElementRef:(IOHIDElementRef)arg1 ;
-(void)setDefaultValueRef:(IOHIDValueRef)arg1 ;
-(IOHIDValueRef)defaultValueRef;
-(unsigned)elementCookie;
-(BOOL)isEqualToHIDLibElement:(id)arg1 ;
-(id)initWithElementStruct:(IOHIDElementStruct*)arg1 parent:(IOHIDElementRef)arg2 index:(unsigned)arg3 ;
-(void)setElementRef:(IOHIDElementRef)arg1 ;
-(unsigned)collectionCookie;
-(unsigned)usageMin;
-(unsigned)usageMax;
-(void)setPsKey:(NSString *)arg1 ;
-(IOHIDElementStruct)elementStruct;
-(void)setIsConstant:(BOOL)arg1 ;
@end

