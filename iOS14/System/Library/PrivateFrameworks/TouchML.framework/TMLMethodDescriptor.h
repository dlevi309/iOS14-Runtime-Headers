/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLModelSerialize.h>

@class NSString, NSArray;

@interface TMLMethodDescriptor : NSObject <TMLModelSerialize> {

	NSString* _methodName;
	unsigned long long _returnType;
	NSArray* _parameters;
	NSString* _methodSelector;
	BOOL _optional;

}

@property (nonatomic,readonly) NSString * methodName;                        //@synthesize methodName=_methodName - In the implementation block
@property (nonatomic,readonly) NSArray * parameters;                         //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSString * methodSelector;                    //@synthesize methodSelector=_methodSelector - In the implementation block
@property (nonatomic,readonly) unsigned long long returnType;                //@synthesize returnType=_returnType - In the implementation block
@property (getter=isOptional,nonatomic,readonly) BOOL optional;              //@synthesize optional=_optional - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decode:(const ProtobufCMessage*)arg1 ;
+(id)methodSelectorForMethodName:(id)arg1 parameters:(id)arg2 ;
-(NSArray *)parameters;
-(BOOL)isOptional;
-(void)encode:(ProtobufCMessage*)arg1 ;
-(unsigned long long)returnType;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)methodName;
-(NSString *)methodSelector;
-(id)initWithName:(id)arg1 returnType:(unsigned long long)arg2 parameters:(id)arg3 methodSelector:(id)arg4 attributes:(id)arg5 ;
@end

