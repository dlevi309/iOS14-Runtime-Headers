/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, NSObject, NSMutableString;

@interface UIDescriptionBuilder : NSObject {

	NSString* _separator;
	NSObject* _object;
	NSMutableString* _descriptionString;

}

@property (assign,nonatomic) NSObject * object;                                //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) NSMutableString * descriptionString;              //@synthesize descriptionString=_descriptionString - In the implementation block
@property (nonatomic,copy) NSString * separator;                               //@synthesize separator=_separator - In the implementation block
@property (nonatomic,readonly) NSString * string; 
+(id)descriptionForObject:(id)arg1 keys:(id)arg2 ;
+(id)descriptionBuilderWithObject:(id)arg1 ;
+(id)descriptionForObject:(id)arg1 namesAndObjects:(id)arg2 ;
-(NSString *)string;
-(NSObject *)object;
-(id)initWithObject:(id)arg1 ;
-(void)setObject:(NSObject *)arg1 ;
-(NSMutableString *)descriptionString;
-(id)appendObject:(id)arg1 withName:(id)arg2 ;
-(void)tryAppendKey:(id)arg1 ;
-(id)appendKey:(id)arg1 ;
-(id)appendKeys:(id)arg1 ;
-(NSString *)separator;
-(void)setSeparator:(NSString *)arg1 ;
-(id)appendName:(id)arg1 object:(id)arg2 ;
-(id)appendName:(id)arg1 integerValue:(long long)arg2 ;
-(id)appendName:(id)arg1 object:(id)arg2 usingLightweightDescription:(BOOL)arg3 ;
-(id)appendNamesAndObjects:(id)arg1 ;
-(id)appendName:(id)arg1 boolValue:(BOOL)arg2 ;
-(id)appendName:(id)arg1 unsignedInteger:(unsigned long long)arg2 ;
-(id)appendName:(id)arg1 intValue:(int)arg2 ;
-(id)appendName:(id)arg1 doubleValue:(double)arg2 ;
-(id)appendName:(id)arg1 pointerValue:(void*)arg2 ;
-(id)appendName:(id)arg1 selector:(SEL)arg2 ;
-(void)setDescriptionString:(NSMutableString *)arg1 ;
@end

