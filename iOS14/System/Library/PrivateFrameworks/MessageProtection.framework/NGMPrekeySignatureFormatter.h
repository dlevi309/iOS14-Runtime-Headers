/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/

#import <libobjc.A.dylib/SignatureFormatter.h>

@class NSData, NSString;

@interface NGMPrekeySignatureFormatter : NSObject <SignatureFormatter> {

	double _timestamp;
	NSData* _prekeyPublic;

}

@property (nonatomic,readonly) NSData * prekeyPublic;               //@synthesize prekeyPublic=_prekeyPublic - In the implementation block
@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(id)signedData;
-(id)initToSignKey:(id)arg1 ;
-(NSData *)prekeyPublic;
-(id)initWithPublicPrekey:(id)arg1 ;
@end

