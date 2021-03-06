/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


#import <Message/Message-Structs.h>
@class MFCertificateTrustInfo, NSString, MFError;

@interface MFMessageSigner : NSObject {

	int _status;
	MFCertificateTrustInfo* _signingCertificateTrustInfo;
	MFCertificateTrustInfo* _encryptionCertificateTrustInfo;
	NSString* _sender;

}

@property (nonatomic,readonly) MFCertificateTrustInfo * signingCertificateTrustInfo;                 //@synthesize signingCertificateTrustInfo=_signingCertificateTrustInfo - In the implementation block
@property (nonatomic,readonly) MFCertificateTrustInfo * encryptionCertificateTrustInfo;              //@synthesize encryptionCertificateTrustInfo=_encryptionCertificateTrustInfo - In the implementation block
@property (nonatomic,readonly) NSString * sender;                                                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) MFError * error; 
-(MFError *)error;
-(NSString *)sender;
-(id)initWithSender:(id)arg1 signingTrust:(SecTrustRef)arg2 encryptionTrust:(SecTrustRef)arg3 verification:(int)arg4 ;
-(MFCertificateTrustInfo *)signingCertificateTrustInfo;
-(MFCertificateTrustInfo *)encryptionCertificateTrustInfo;
@end

