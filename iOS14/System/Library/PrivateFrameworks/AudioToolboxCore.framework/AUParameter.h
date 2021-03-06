/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUParameterNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, _AUStaticParameterInfo, NSString;

@interface AUParameter : AUParameterNode <NSSecureCoding> {

	atomic<bool> _localValueStale;
	atomic<int> _numUIObservers;
	atomic<int> _numRecordingObservers;
	float _value;
	unsigned long long _address;
	NSArray* _dependentParameters;
	_AUStaticParameterInfo* _info;

}

@property (assign,nonatomic) unsigned long long address;                        //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) _AUStaticParameterInfo * info;                     //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) float minValue; 
@property (nonatomic,readonly) float maxValue; 
@property (nonatomic,readonly) unsigned unit; 
@property (nonatomic,copy,readonly) NSString * unitName; 
@property (nonatomic,readonly) unsigned flags; 
@property (nonatomic,copy,readonly) NSArray * valueStrings; 
@property (nonatomic,copy,readonly) NSArray * dependentParameters;              //@synthesize dependentParameters=_dependentParameters - In the implementation block
@property (assign,nonatomic) float value;                                       //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(_AUStaticParameterInfo *)info;
-(unsigned)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(float)arg1 ;
-(id)description;
-(id)copyNodeWithOffset:(unsigned long long)arg1 ;
-(void)_observersChanged:(BOOL)arg1 deltaCount:(int)arg2 ;
-(unsigned)_clumpID;
-(unsigned long long)address;
-(void)setAddress:(unsigned long long)arg1 ;
-(void)setValue:(float)arg1 extOriginator:(AUParameterObserverExtendedToken)arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned)arg4 ;
-(void)setValue:(float)arg1 originator:(void*)arg2 ;
-(unsigned)_originalOrder;
-(NSArray *)valueStrings;
-(BOOL)localValueStale;
-(void)setLocalValueStale:(BOOL)arg1 ;
-(float)_internalValue;
-(void)setValue:(float)arg1 originator:(void*)arg2 atHostTime:(unsigned long long)arg3 ;
-(id)initWithID:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned)arg6 unitName:(id)arg7 flags:(unsigned)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10 ;
-(void)setValue:(float)arg1 originator:(void*)arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned)arg4 ;
-(id)stringFromValue:(const float*)arg1 ;
-(float)valueFromString:(id)arg1 ;
-(void)set_clumpID:(unsigned)arg1 ;
-(void)set_defaultValue:(float)arg1 ;
-(void)set_originalOrder:(unsigned)arg1 ;
-(NSArray *)dependentParameters;
-(unsigned)unit;
-(void)setInfo:(_AUStaticParameterInfo *)arg1 ;
-(NSString *)unitName;
-(id)initWithCoder:(id)arg1 ;
-(float)_defaultValue;
-(float)maxValue;
-(float)minValue;
-(float)value;
-(void)dealloc;
@end

