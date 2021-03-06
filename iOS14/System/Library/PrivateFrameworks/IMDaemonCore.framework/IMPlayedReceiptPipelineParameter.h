/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMPlayedReceiptProcessingParameter.h>
#import <IMDaemonCore/IMMessageFromStorageParameter.h>

@class IMDiMessageIDSTrustedData, NSString, NSNumber, NSArray, IMDChat;

@interface IMPlayedReceiptPipelineParameter : NSObject <IMPlayedReceiptProcessingParameter, IMMessageFromStorageParameter> {

	BOOL _isFromStorage;
	BOOL _isLastFromStorage;
	BOOL _isFromDefaultPairedDevice;
	IMDiMessageIDSTrustedData* _idsTrustedData;
	NSString* _GUID;
	NSNumber* _timestamp;
	NSArray* _messageItems;
	IMDChat* _chat;

}

@property (nonatomic,readonly) IMDiMessageIDSTrustedData * idsTrustedData;              //@synthesize idsTrustedData=_idsTrustedData - In the implementation block
@property (getter=UID,nonatomic,readonly) NSString * GUID;                              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) NSNumber * timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL isFromStorage;                                      //@synthesize isFromStorage=_isFromStorage - In the implementation block
@property (nonatomic,readonly) BOOL isLastFromStorage;                                  //@synthesize isLastFromStorage=_isLastFromStorage - In the implementation block
@property (nonatomic,readonly) BOOL isFromDefaultPairedDevice;                          //@synthesize isFromDefaultPairedDevice=_isFromDefaultPairedDevice - In the implementation block
@property (nonatomic,copy) NSArray * messageItems;                                      //@synthesize messageItems=_messageItems - In the implementation block
@property (nonatomic,retain) IMDChat * chat;                                            //@synthesize chat=_chat - In the implementation block
-(IMDChat *)chat;
-(NSNumber *)timestamp;
-(void)setChat:(IMDChat *)arg1 ;
-(id)description;
-(BOOL)isFromDefaultPairedDevice;
-(NSString *)GUID;
-(BOOL)isFromStorage;
-(BOOL)isLastFromStorage;
-(NSArray *)messageItems;
-(void)setMessageItems:(NSArray *)arg1 ;
-(id)initWithDefusedMessage:(id)arg1 idsTrustedData:(id)arg2 isFromDefaultPairedDevice:(BOOL)arg3 ;
-(id)initWithIdsTrustedData:(id)arg1 GUID:(id)arg2 timestamp:(id)arg3 isFromStorage:(BOOL)arg4 isLastFromStorage:(BOOL)arg5 isFromDefaultPairedDevice:(BOOL)arg6 ;
-(IMDiMessageIDSTrustedData *)idsTrustedData;
@end

