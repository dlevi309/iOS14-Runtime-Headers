/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSVCloudServiceCapabilitiesRequest : SSRequest <SSXPCCoding> {

	BOOL _allowsPromptingForPrivacyAcknowledgement;

}

@property (assign,nonatomic) BOOL allowsPromptingForPrivacyAcknowledgement;              //@synthesize allowsPromptingForPrivacyAcknowledgement=_allowsPromptingForPrivacyAcknowledgement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setAllowsPromptingForPrivacyAcknowledgement:(BOOL)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(BOOL)allowsPromptingForPrivacyAcknowledgement;
@end

