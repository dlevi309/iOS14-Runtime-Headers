/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@class ASProtocolCapabilities;

@interface ASProtocol : NSObject {

	ASProtocolCapabilities* _capabilities;

}

@property (nonatomic,retain) ASProtocolCapabilities * capabilities;              //@synthesize capabilities=_capabilities - In the implementation block
-(ASProtocolCapabilities *)capabilities;
-(void)setCapabilities:(ASProtocolCapabilities *)arg1 ;
-(id)init;
-(BOOL)supportsAttachments;
-(id)protocolVersion;
-(id)initWithVersion:(id)arg1 ;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
-(int)supportsDraftFolderSync;
-(BOOL)supportsUniqueServerId;
-(int)supportsConversations;
-(BOOL)sendUID;
-(BOOL)useSmartMailTasks;
-(BOOL)useEventIdsInMeetingResponse;
-(BOOL)includeCommentInMeetingResponse;
-(BOOL)supportsProposeNewTime;
-(void)_setCapabilitiesVersion:(id)arg1 ;
-(id)_initWithVersion:(id)arg1 capabilitiesVersion:(id)arg2 ;
-(id)_requestLinePrefixWithTask:(id)arg1 ;
-(id)_usernameOnlyPortionOfUserString:(id)arg1 ;
-(BOOL)supportsSettingsCommand;
-(BOOL)supportsItemOperationsCommand;
-(BOOL)serverUpdatesAttendeeStatusOnEvents;
-(id)calendarConstraintsPath;
-(id)addressBookConstraintsPath;
-(BOOL)supportsNoteSyncing;
-(BOOL)supportsFreeBusyLookup;
-(id)initWithCachedVersion:(id)arg1 ;
-(BOOL)versionChangeRequiresAccountUpgrade:(id)arg1 ;
-(id)requestURLStringWithTask:(id)arg1 ;
-(BOOL)headerNeedsUserAgent;
-(BOOL)headerNeedsPolicyKey;
-(BOOL)headerNeedsProtocolVersion;
-(BOOL)commandStringNeedsSaveInSent;
-(BOOL)shouldUseWBXMLProvisioning;
-(BOOL)usesAirSyncBaseNamespace;
-(BOOL)sendAttendeeRole;
-(BOOL)shouldSendClassForFolderItemsSync;
-(BOOL)shouldSendFullContactInfo;
-(BOOL)requiresExplicitlyFalseGetChanges;
-(BOOL)useBooleanFolderItemsSyncDeletesAsMoves;
-(BOOL)sendEmailInWBXML;
-(BOOL)usesTopLevelStatusCodes;
-(BOOL)fetchAttachmentsWithItemOperations;
-(BOOL)allAttachmentsAreBase64ed;
-(BOOL)sendCalendarInfoInRecurrence;
-(BOOL)serverCreatesEventChangesForInvitations;
-(BOOL)allowsReminderOnCompletedTasks;
-(BOOL)sendFirstDayOfWeekInRecurrence;
-(BOOL)sendDeviceInfoOnProvision;
-(BOOL)sendUserAgentInDeviceInfo;
-(BOOL)supportsGALPhotos;
-(BOOL)supportsAttendeesInExceptions;
-(BOOL)sendEmailForMeetingInvitationAndResponse;
-(BOOL)processFullMeetingInvitationData;
-(BOOL)sendDTStamp;
-(BOOL)useStructuredLocation;
-(BOOL)alwaysSendAttendeeRole;
-(BOOL)includeExceptionsInParent;
-(BOOL)useInstanceIdForException;
-(BOOL)useFloatingTimeForAllDayEvents;
-(BOOL)useEmptyRecurrence;
-(BOOL)useEmptyReminderMinutes;
-(BOOL)useEmptyLocation;
-(BOOL)syncSnoozeEvents;
-(BOOL)alwaysSendTimezone;
-(BOOL)supportsMailboxEnhancedSearch;
-(BOOL)supportsForwarderTracking;
-(BOOL)useEmptyAttendees;
@end

