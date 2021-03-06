/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFMailDelivery.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class DAMailAccount, MFMessageLibrary, NSString;

@interface MFDADelivery : MFMailDelivery <EFLoggable> {

	DAMailAccount* _DAMailAccount;
	MFMessageLibrary* _library;
	NSString* _folderID;
	NSString* _accountID;
	NSString* _originalMessageID;
	NSString* _originalLongID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)setDAMailAccount:(id)arg1 ;
-(id)newMessageWriter;
-(void)_updateBasedOnOriginalMessage:(id)arg1 ;
-(id)deliverSynchronously;
@end

