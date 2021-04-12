/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASEvent.h>
#import <libobjc.A.dylib/ASParsingAcceptingTopLevelLeaves.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDate, NSString, NSArray, NSMutableDictionary, ASEmailItem;

@interface ASMeetingRequest : ASEvent <ASParsingAcceptingTopLevelLeaves, NSSecureCoding> {

	int _meetingClassType;
	int _meetingMessageType;
	NSNumber* _instanceType;
	NSDate* _dateReceived;
	NSDate* _recurrenceId;
	NSString* _cachedParentFolderId;
	NSString* _cachedParentServerId;
	NSString* _sender;
	NSArray* _forwardees;
	NSMutableDictionary* _placeHolder;
	ASEmailItem* _parentEmailItem;

}

@property (nonatomic,retain) NSMutableDictionary * placeHolder;                 //@synthesize placeHolder=_placeHolder - In the implementation block
@property (assign,nonatomic,__weak) ASEmailItem * parentEmailItem;              //@synthesize parentEmailItem=_parentEmailItem - In the implementation block
@property (nonatomic,retain) NSNumber * instanceType;                           //@synthesize instanceType=_instanceType - In the implementation block
@property (nonatomic,retain) NSDate * dateReceived;                             //@synthesize dateReceived=_dateReceived - In the implementation block
@property (nonatomic,retain) NSDate * recurrenceId;                             //@synthesize recurrenceId=_recurrenceId - In the implementation block
@property (assign,nonatomic) int meetingClassType;                              //@synthesize meetingClassType=_meetingClassType - In the implementation block
@property (assign,nonatomic) int meetingMessageType;                            //@synthesize meetingMessageType=_meetingMessageType - In the implementation block
@property (nonatomic,retain) NSString * cachedParentFolderId;                   //@synthesize cachedParentFolderId=_cachedParentFolderId - In the implementation block
@property (nonatomic,retain) NSString * cachedParentServerId;                   //@synthesize cachedParentServerId=_cachedParentServerId - In the implementation block
@property (nonatomic,retain) NSString * sender;                                 //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) NSArray * forwardees;                              //@synthesize forwardees=_forwardees - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sender;
-(void)setSender:(NSString *)arg1 ;
-(NSDate *)dateReceived;
-(void)setDateReceived:(NSDate *)arg1 ;
-(void)setOrganizer:(id)arg1 ;
-(void)applyPlaceHolder;
-(void)clearPlaceHolder;
-(void)setObject:(id)arg1 forDCCPT:(int)arg2 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(id)exceptionDate;
-(void)setExceptionDate:(id)arg1 ;
-(void)postProcessApplicationData;
-(BOOL)saveToCalendarWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(NSMutableDictionary *)placeHolder;
-(void)setPlaceHolder:(NSMutableDictionary *)arg1 ;
-(id)unactionableICSRepresentationForAccount:(id)arg1 ;
-(void)takeValuesFromParentEmailForAccount:(id)arg1 ;
-(void)setMeetingClassType:(int)arg1 ;
-(int)meetingMessageType;
-(BOOL)cachedOrganizerIsSelfWithAccount:(id)arg1 ;
-(void)setDTStamp:(id)arg1 ;
-(void)_determineSelfnessWithLocalEvent:(void*)arg1 forAccount:(id)arg2 ;
-(BOOL)_bailIfNotNewestDataForAccount:(id)arg1 ;
-(BOOL)shouldUseInMemoryAttendeesForAccount:(id)arg1 numExistingAttendees:(unsigned long long)arg2 ;
-(void)setInstanceType:(NSNumber *)arg1 ;
-(void)_setReminderSecsBefore:(id)arg1 ;
-(void)setRecurrenceId:(NSDate *)arg1 ;
-(void)setMeetingMessageType:(int)arg1 ;
-(void)setForwardees:(NSArray *)arg1 ;
-(ASEmailItem *)parentEmailItem;
-(void)setCachedParentFolderId:(NSString *)arg1 ;
-(void)setCachedParentServerId:(NSString *)arg1 ;
-(NSDate *)recurrenceId;
-(void)saveEmailServerIdAndUpdateNotificationToRecord:(void*)arg1 account:(id)arg2 ;
-(int)meetingClassType;
-(NSString *)cachedParentFolderId;
-(NSString *)cachedParentServerId;
-(NSArray *)forwardees;
-(BOOL)saveResponseCommentToCalendarWithExistingRecord:(void*)arg1 ;
-(BOOL)saveForwardeesToCalendarWithExistingRecord:(void*)arg1 ;
-(NSNumber *)instanceType;
-(BOOL)saveEmailServerIdToCalendarWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 account:(id)arg3 ;
-(void)setParentEmailItem:(ASEmailItem *)arg1 ;
-(BOOL)writeInviteToCalDBCreateAsRejected:(BOOL)arg1 defaultCalendar:(void*)arg2 account:(id)arg3 ;
@end
