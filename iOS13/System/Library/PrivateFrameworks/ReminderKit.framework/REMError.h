/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@interface REMError : NSObject
+(id)cancelledError;
+(id)internalErrorWithDebugDescription:(id)arg1 ;
+(id)invalidParameterErrorWithDescription:(id)arg1 ;
+(id)noSuchObjectErrorWithObjectID:(id)arg1 ;
+(id)unexpectedError;
+(id)noSuchObjectErrorWithExternalIdentifier:(id)arg1 ;
+(id)noSuchObjectErrorWithDACalendarItemUniqueIdentifier:(id)arg1 ;
+(id)_errorSanitizedForXPCFromError:(id)arg1 ;
+(BOOL)_isCoreDataError:(id)arg1 ;
+(id)_errorWithCode:(long long)arg1 underlyingError:(id)arg2 ;
+(id)errorSanitizedForXPCFromError:(id)arg1 ;
+(id)mismatchedObjectIDWithObjectID:(id)arg1 expected:(Class)arg2 ;
+(id)unexpectedNilPropertyWithClass:(Class)arg1 property:(id)arg2 ;
+(id)errorFromErrors:(id)arg1 ;
+(id)unauthorizedErrorWithMissingEntitlement:(id)arg1 ;
+(id)unauthorizedErrorWithMissingEntitlement:(id)arg1 requestedAccessLevel:(id)arg2 currentAccesslevel:(id)arg3 ;
+(id)throttledErrorWithRemainingTimeInterval:(double)arg1 ;
+(id)babySatErrorWithOperationName:(id)arg1 ;
+(id)retryLaterErrorWithInterval:(double)arg1 ;
+(BOOL)isNoSuchObjectError:(id)arg1 forObjectID:(id)arg2 ;
+(id)saveErrorWithCoreDataError:(id)arg1 ;
+(id)validationErrorMoveFromAccount:(id)arg1 toAccout:(id)arg2 ;
+(id)validationErrorListHasNoAccount:(id)arg1 ;
+(id)validationErrorMoveReminderFromList:(id)arg1 toList:(id)arg2 inAccount:(id)arg3 ;
+(id)validationErrorNestedSubtask:(id)arg1 parentReminderID:(id)arg2 ;
+(id)validationErrorSubtaskAndParentNotOnSameList:(id)arg1 parentReminderID:(id)arg2 ;
+(id)constraintConflictWithIdentifier:(id)arg1 constraint:(id)arg2 ;
+(id)xpcPerformerUnavailableErrorWithDescription:(id)arg1 ;
@end

