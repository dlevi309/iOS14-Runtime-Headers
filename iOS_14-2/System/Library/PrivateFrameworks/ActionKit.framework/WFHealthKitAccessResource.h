/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFGranularAccessResource.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class WFAction, HKHealthStore, NSString;

@interface WFHealthKitAccessResource : WFGranularAccessResource <WFActionEventObserver> {

	unsigned long long _globalLevelStatus;
	WFAction* _action;
	HKHealthStore* _healthStore;

}

@property (assign,nonatomic,__weak) WFAction * action;                   //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSystemResource;
+(Class)perWorkflowStateClass;
+(BOOL)alwaysMakeAvailable;
-(HKHealthStore *)healthStore;
-(id)objectTypes;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(void)refreshAvailability;
-(unsigned long long)globalLevelStatus;
-(id)localizedWorkflowLevelNotDeterminedStatusMessage;
-(id)localizedWorkflowLevelDeniedStatusMessage;
-(id)localizedWorkflowLevelPromptTemplate;
-(id)localizedWorkflowLevelMessageTemplate;
-(id)associatedAppIdentifier;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)requestedEntries;
-(void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)objectTypesForAccessType:(id)arg1 ;
-(id)readTypes;
-(id)writeTypes;
-(id)readableUnauthorizedResourceDescription;
@end
