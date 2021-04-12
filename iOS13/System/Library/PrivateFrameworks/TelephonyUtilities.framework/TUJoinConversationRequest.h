/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/TUFilteredRequest.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSUUID, TUHandle, NSString, NSURL;

@interface TUJoinConversationRequest : NSObject <TUFilteredRequest, NSCopying, NSSecureCoding> {

	BOOL _videoEnabled;
	BOOL _shouldSuppressInCallUI;
	BOOL _wantsStagingArea;
	BOOL _showUIPrompt;
	BOOL _uplinkMuted;
	NSSet* _remoteMembers;
	NSUUID* _UUID;
	TUHandle* _callerID;
	NSUUID* _messagesGroupUUID;
	NSString* _messagesGroupName;

}

@property (nonatomic,retain) TUHandle * callerID;                                  //@synthesize callerID=_callerID - In the implementation block
@property (nonatomic,copy) NSUUID * messagesGroupUUID;                             //@synthesize messagesGroupUUID=_messagesGroupUUID - In the implementation block
@property (nonatomic,copy) NSString * messagesGroupName;                           //@synthesize messagesGroupName=_messagesGroupName - In the implementation block
@property (assign,nonatomic) BOOL showUIPrompt;                                    //@synthesize showUIPrompt=_showUIPrompt - In the implementation block
@property (assign,getter=isUplinkMuted,nonatomic) BOOL uplinkMuted;                //@synthesize uplinkMuted=_uplinkMuted - In the implementation block
@property (nonatomic,copy,readonly) NSSet * remoteMembers;                         //@synthesize remoteMembers=_remoteMembers - In the implementation block
@property (nonatomic,retain) NSUUID * UUID;                                        //@synthesize UUID=_UUID - In the implementation block
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled;              //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressInCallUI;                          //@synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI - In the implementation block
@property (assign,nonatomic) BOOL wantsStagingArea;                                //@synthesize wantsStagingArea=_wantsStagingArea - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)sanitizedMembersFromMembers:(id)arg1 ;
+(id)remoteMembersFromURLComponents:(id)arg1 ;
+(id)callerIDFromURLComponents:(id)arg1 ;
+(BOOL)videoEnabledFromURLComponents:(id)arg1 ;
+(BOOL)shouldSuppressInCallUIFromURLComponents:(id)arg1 ;
+(BOOL)wantsStagingAreaFromURLComponents:(id)arg1 ;
+(id)messagesGroupUUIDFromURLComponents:(id)arg1 ;
+(id)messagesGroupNameFromURLComponents:(id)arg1 ;
+(BOOL)showUIPromptFromURLComponents:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)bundleIdentifier;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSURL *)URL;
-(id)queryItems;
-(id)handles;
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(NSUUID *)messagesGroupUUID;
-(NSString *)messagesGroupName;
-(NSSet *)remoteMembers;
-(void)setMessagesGroupUUID:(NSUUID *)arg1 ;
-(void)setMessagesGroupName:(NSString *)arg1 ;
-(BOOL)isUplinkMuted;
-(void)setUplinkMuted:(BOOL)arg1 ;
-(id)initWithRemoteMembers:(id)arg1 ;
-(TUHandle *)callerID;
-(BOOL)shouldSuppressInCallUI;
-(BOOL)wantsStagingArea;
-(BOOL)showUIPrompt;
-(id)remoteMembersQueryItem;
-(id)callerIDQueryItem;
-(id)videoEnabledQueryItem;
-(id)shouldSuppressInCallUIQueryItem;
-(id)wantsStagingAreaQueryItem;
-(id)messagesGroupUUIDQueryItem;
-(id)messagesGroupNameQueryItem;
-(id)showUIPromptQueryItem;
-(void)setShouldSuppressInCallUI:(BOOL)arg1 ;
-(void)setWantsStagingArea:(BOOL)arg1 ;
-(void)setCallerID:(TUHandle *)arg1 ;
-(id)contactNamesByHandleWithContactsDataSource:(id)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(id)initWithGroupUUID:(id)arg1 localParticipantHandle:(id)arg2 remoteParticipantHandles:(id)arg3 ;
-(void)setShowUIPrompt:(BOOL)arg1 ;
@end
