/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSString, NSValue;

@interface WFCloudKitItemProperty : NSObject {

	BOOL _ignoredByDefault;
	unsigned long long _type;
	NSString* _name;
	Class _itemClass;
	NSValue* _nilValue;

}

@property (nonatomic,readonly) unsigned long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) Class itemClass;                                              //@synthesize itemClass=_itemClass - In the implementation block
@property (getter=isIgnoredByDefault,nonatomic,readonly) BOOL ignoredByDefault;              //@synthesize ignoredByDefault=_ignoredByDefault - In the implementation block
@property (nonatomic,readonly) NSValue * nilValue;                                           //@synthesize nilValue=_nilValue - In the implementation block
+(id)assetPropertyWithName:(id)arg1 ;
+(id)objectPropertyWithName:(id)arg1 ;
+(id)scalarPropertyWithName:(id)arg1 nilValue:(id)arg2 ;
+(id)scalarPropertyWithName:(id)arg1 nilValue:(id)arg2 ignoredByDefault:(BOOL)arg3 ;
+(id)objectPropertyWithName:(id)arg1 ignoredByDefault:(BOOL)arg2 ;
+(id)assetPropertyWithName:(id)arg1 ignoredByDefault:(BOOL)arg2 ;
+(id)itemReferencePropertyWithName:(id)arg1 itemClass:(Class)arg2 ;
+(id)itemPropertyWithName:(id)arg1 itemClass:(Class)arg2 ;
-(NSString *)name;
-(unsigned long long)type;
-(NSValue *)nilValue;
-(Class)itemClass;
-(id)initWithType:(unsigned long long)arg1 name:(id)arg2 itemClass:(Class)arg3 ignoredByDefault:(BOOL)arg4 nilValue:(id)arg5 ;
-(BOOL)isIgnoredByDefault;
@end

