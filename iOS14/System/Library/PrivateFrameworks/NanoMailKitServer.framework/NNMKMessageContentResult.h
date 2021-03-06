/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@class NNMKProtoMessageContentSync;

@interface NNMKMessageContentResult : NSObject {

	BOOL _isContentCompletelySynced;
	BOOL _isNotificationPriority;
	BOOL _isUserRequest;
	BOOL _alreadySyncedWithCurrentPriority;
	BOOL _messageDoesNotExist;
	NNMKProtoMessageContentSync* _protoMessageContentSync;
	unsigned long long _resendInterval;
	long long _compressedTextDataLength;

}

@property (nonatomic,retain) NNMKProtoMessageContentSync * protoMessageContentSync;              //@synthesize protoMessageContentSync=_protoMessageContentSync - In the implementation block
@property (assign,nonatomic) unsigned long long resendInterval;                                  //@synthesize resendInterval=_resendInterval - In the implementation block
@property (assign,nonatomic) long long compressedTextDataLength;                                 //@synthesize compressedTextDataLength=_compressedTextDataLength - In the implementation block
@property (assign,nonatomic) BOOL isContentCompletelySynced;                                     //@synthesize isContentCompletelySynced=_isContentCompletelySynced - In the implementation block
@property (assign,nonatomic) BOOL isNotificationPriority;                                        //@synthesize isNotificationPriority=_isNotificationPriority - In the implementation block
@property (assign,nonatomic) BOOL isUserRequest;                                                 //@synthesize isUserRequest=_isUserRequest - In the implementation block
@property (assign,nonatomic) BOOL alreadySyncedWithCurrentPriority;                              //@synthesize alreadySyncedWithCurrentPriority=_alreadySyncedWithCurrentPriority - In the implementation block
@property (assign,nonatomic) BOOL messageDoesNotExist;                                           //@synthesize messageDoesNotExist=_messageDoesNotExist - In the implementation block
-(unsigned long long)resendInterval;
-(void)setResendInterval:(unsigned long long)arg1 ;
-(BOOL)isContentCompletelySynced;
-(void)setAlreadySyncedWithCurrentPriority:(BOOL)arg1 ;
-(void)setMessageDoesNotExist:(BOOL)arg1 ;
-(BOOL)alreadySyncedWithCurrentPriority;
-(void)setProtoMessageContentSync:(NNMKProtoMessageContentSync *)arg1 ;
-(void)setCompressedTextDataLength:(long long)arg1 ;
-(void)setIsContentCompletelySynced:(BOOL)arg1 ;
-(void)setIsNotificationPriority:(BOOL)arg1 ;
-(void)setIsUserRequest:(BOOL)arg1 ;
-(NNMKProtoMessageContentSync *)protoMessageContentSync;
-(long long)compressedTextDataLength;
-(BOOL)isNotificationPriority;
-(BOOL)isUserRequest;
-(BOOL)messageDoesNotExist;
@end

