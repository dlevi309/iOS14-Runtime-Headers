/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSSet, NSData;

@interface CRKIdentitySharingSendCertificateRequest : CATTaskRequest {

	NSSet* _recipients;
	NSData* _activeCertificateData;
	NSData* _stagedCertificateData;

}

@property (nonatomic,retain) NSSet * recipients;                          //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) NSData * activeCertificateData;              //@synthesize activeCertificateData=_activeCertificateData - In the implementation block
@property (nonatomic,retain) NSData * stagedCertificateData;              //@synthesize stagedCertificateData=_stagedCertificateData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)recipients;
-(void)setRecipients:(NSSet *)arg1 ;
-(NSData *)activeCertificateData;
-(NSData *)stagedCertificateData;
-(void)setActiveCertificateData:(NSData *)arg1 ;
-(void)setStagedCertificateData:(NSData *)arg1 ;
@end

