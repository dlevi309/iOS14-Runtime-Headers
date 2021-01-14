/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFResource.h>
#import <libobjc.A.dylib/WFWorkflowReferencing.h>

@protocol WFAccessResourcePerWorkflowState, NSObject;
@class WFWorkflow, NSString, NSDictionary, NSError, WFDatabase, WFImage;

@interface WFAccessResource : WFResource <WFWorkflowReferencing> {

	WFWorkflow* _workflow;
	id<WFAccessResourcePerWorkflowState> _currentPerWorkflowState;
	NSString* _persistentIdentifier;
	id<NSObject> _resourceAvailabilityChangedNotificationObserver;

}

@property (nonatomic,readonly) NSString * resourceName; 
@property (nonatomic,readonly) NSString * username; 
@property (nonatomic,readonly) BOOL canLogOut; 
@property (nonatomic,readonly) BOOL logOutAffectsOtherApps; 
@property (nonatomic,readonly) NSDictionary * settingsUIDefinition; 
@property (nonatomic,readonly) NSError * workflowLevelAvailabilityError; 
@property (nonatomic,readonly) NSError * globalLevelAvailabilityError; 
@property (nonatomic,readonly) NSError * computedAvailabilityError; 
@property (nonatomic,readonly) WFDatabase * database; 
@property (nonatomic,readonly) id<NSObject> resourceAvailabilityChangedNotificationObserver;              //@synthesize resourceAvailabilityChangedNotificationObserver=_resourceAvailabilityChangedNotificationObserver - In the implementation block
@property (nonatomic,readonly) unsigned long long globalLevelStatus; 
@property (nonatomic,readonly) unsigned long long workflowLevelStatus; 
@property (nonatomic,retain) id<WFAccessResourcePerWorkflowState> currentPerWorkflowState;                //@synthesize currentPerWorkflowState=_currentPerWorkflowState - In the implementation block
@property (nonatomic,readonly) NSString * attemptRecoveryFromGlobalLevelErrorMessage; 
@property (nonatomic,readonly) NSString * workflowLevelPromptTemplate; 
@property (nonatomic,readonly) NSString * workflowLevelMessageTemplate; 
@property (nonatomic,readonly) NSString * workflowLevelNotDeterminedStatusMessage; 
@property (nonatomic,readonly) NSString * workflowLevelDeniedStatusMessage; 
@property (nonatomic,readonly) NSString * localizedWorkflowLevelPromptTemplate; 
@property (nonatomic,readonly) NSString * localizedWorkflowLevelMessageTemplate; 
@property (nonatomic,readonly) NSString * localizedWorkflowLevelNotDeterminedStatusMessage; 
@property (nonatomic,readonly) NSString * localizedWorkflowLevelDeniedStatusMessage; 
@property (nonatomic,readonly) NSString * associatedAppIdentifier; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) WFImage * icon; 
@property (nonatomic,readonly) unsigned long long status; 
@property (nonatomic,readonly) NSString * protectedResourceDescription; 
@property (nonatomic,readonly) NSString * persistentIdentifier;                                           //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (assign,nonatomic,__weak) WFWorkflow * workflow;                                                //@synthesize workflow=_workflow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSystemResource;
+(Class)perWorkflowStateClass;
+(id)accessResourceFromDatabaseState:(id)arg1 ;
-(id)initWithPersistentIdentifier:(id)arg1 ;
-(NSString *)resourceName;
-(WFImage *)icon;
-(NSString *)username;
-(NSString *)name;
-(NSString *)persistentIdentifier;
-(void)logOut;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(WFDatabase *)database;
-(unsigned long long)status;
-(void)dealloc;
-(id)initWithDefinition:(id)arg1 ;
-(void)refreshAvailability;
-(id)initWithDefinition:(id)arg1 persistentIdentifier:(id)arg2 ;
-(unsigned long long)globalLevelStatus;
-(NSString *)localizedWorkflowLevelNotDeterminedStatusMessage;
-(NSString *)localizedWorkflowLevelDeniedStatusMessage;
-(NSString *)localizedWorkflowLevelPromptTemplate;
-(NSString *)localizedWorkflowLevelMessageTemplate;
-(NSString *)associatedAppIdentifier;
-(NSString *)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCurrentPerWorkflowState:(id<WFAccessResourcePerWorkflowState>)arg1 ;
-(unsigned long long)workflowLevelStatus;
-(id)updatedPerWorkflowStateForAuthorizationChoice:(BOOL)arg1 overridingPreviouslyDeterminedAuthorizations:(BOOL)arg2 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)refreshAvailabilityWithNotification:(BOOL)arg1 ;
-(NSDictionary *)settingsUIDefinition;
-(BOOL)canLogOut;
-(BOOL)logOutAffectsOtherApps;
-(void)makeAvailableAtWorkflowLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)statusAtLevel:(unsigned long long)arg1 ;
-(id)availabilityErrorForLevel:(unsigned long long)arg1 ;
-(void)makeAvailableAtLevel:(unsigned long long)arg1 withUserInterface:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAuthorizedAtWorkflowLevel:(BOOL)arg1 overridingPreviouslyDeterminedAuthorizations:(BOOL)arg2 ;
-(BOOL)isEquivalentToAccessResource:(id)arg1 ;
-(void)attemptRecoveryFromWorkflowLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)loadPersistedPerWorkflowStateForReference:(id)arg1 inDatabase:(id)arg2 ;
-(void)refreshCurrentPerWorkflowState;
-(void)refreshCurrentPerWorkflowStateForReference:(id)arg1 inDatabase:(id)arg2 ;
-(void)persistPerWorkflowState:(id)arg1 forReference:(id)arg2 inDatabase:(id)arg3 ;
-(void)setAuthorizedAtWorkflowLevel:(BOOL)arg1 forReference:(id)arg2 inDatabase:(id)arg3 overridingPreviouslyDeterminedAuthorizations:(BOOL)arg4 ;
-(void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1 ;
-(NSError *)workflowLevelAvailabilityError;
-(NSError *)globalLevelAvailabilityError;
-(NSError *)computedAvailabilityError;
-(NSString *)workflowLevelPromptTemplate;
-(NSString *)workflowLevelMessageTemplate;
-(NSString *)workflowLevelNotDeterminedStatusMessage;
-(NSString *)workflowLevelDeniedStatusMessage;
-(NSString *)attemptRecoveryFromGlobalLevelErrorMessage;
-(id)localizedAttemptRecoveryFromErrorMessage;
-(id<WFAccessResourcePerWorkflowState>)currentPerWorkflowState;
-(id<NSObject>)resourceAvailabilityChangedNotificationObserver;
@end
