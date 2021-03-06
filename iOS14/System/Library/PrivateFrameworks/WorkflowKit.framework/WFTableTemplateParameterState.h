/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFParameterState.h>

@class NSArray, NSString;

@interface WFTableTemplateParameterState : NSObject <WFParameterState> {

	BOOL _requiresBoundedDate;
	long long _compoundType;
	NSArray* _rows;

}

@property (nonatomic,readonly) long long compoundType;              //@synthesize compoundType=_compoundType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rows;                 //@synthesize rows=_rows - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)processingValueClass;
-(id)serializedRepresentation;
-(NSArray *)rows;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compoundType;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(id)initWithCompoundType:(long long)arg1 rows:(id)arg2 ;
-(id)actualCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCompoundType:(long long)arg1 rows:(id)arg2 requiresBoundedDate:(BOOL)arg3 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 contentItemClass:(Class)arg4 ;
-(id)stateBySettingCompoundType:(long long)arg1 ;
-(id)stateByReplacingRowAtIndex:(unsigned long long)arg1 withState:(id)arg2 ;
-(id)stateByRemovingRowAtIndex:(unsigned long long)arg1 ;
-(id)stateByAddingRow:(id)arg1 ;
@end

