/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSString, NSDictionary, NSDate, NSData;

@interface IDSSocketPairResourceTransferReceiver : NSObject <IDSSocketPairMessage> {

	NSString* _resourcePath;
	NSDictionary* _metadata;
	int _fileDescriptor;
	unsigned long long _totalBytesExpected;
	unsigned long long _totalBytesReceived;
	BOOL _done;
	BOOL _isResuming;
	BOOL _resumeResourceTransfers;
	unsigned _sequenceNumber;
	unsigned short _streamID;
	BOOL _expectsPeerResponse;
	BOOL _wantsAppAck;
	BOOL _compressed;
	NSString* _peerResponseIdentifier;
	NSString* _messageUUID;
	NSDate* _expiryDate;

}

@property (nonatomic,readonly) unsigned long long totalBytesReceived;              //@synthesize totalBytesReceived=_totalBytesReceived - In the implementation block
@property (nonatomic,readonly) NSString * messageUUID;                             //@synthesize messageUUID=_messageUUID - In the implementation block
@property (nonatomic,retain) NSDate * expiryDate;                                  //@synthesize expiryDate=_expiryDate - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (assign,nonatomic) unsigned short streamID; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) BOOL wantsAppAck; 
@property (nonatomic,readonly) BOOL expectsPeerResponse; 
@property (nonatomic,readonly) BOOL didWakeHint; 
@property (nonatomic,readonly) NSString * peerResponseIdentifier; 
+(id)incomingFilePathForMessageUUID:(id)arg1 ;
+(id)incomingFilePath;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(BOOL)writeResourceData:(id)arg1 resourceByteOffset:(unsigned long long)arg2 ;
-(BOOL)writeResourceData:(id)arg1 ;
-(void)abortTransfer;
-(id)initWithMessage:(id)arg1 resumeResourceTransfers:(BOOL)arg2 receiverError:(unsigned char*)arg3 ;
-(BOOL)appendMessage:(id)arg1 receiverError:(unsigned char*)arg2 ;
-(id)finalizedMessageDictionaryIfDone;
-(unsigned long long)totalBytesReceived;
-(NSString *)messageUUID;
-(void)dealloc;
@end
