/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPassAuxiliaryRegistrationCSRMetadata.h>

@interface PKPassAuxiliaryRegistrationSignatureCSRMetadata : PKPassAuxiliaryRegistrationCSRMetadata {

	unsigned long long _signatureSchemeVersion;

}

@property (nonatomic,readonly) unsigned long long signatureSchemeVersion;              //@synthesize signatureSchemeVersion=_signatureSchemeVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)signatureSchemeVersion;
@end

