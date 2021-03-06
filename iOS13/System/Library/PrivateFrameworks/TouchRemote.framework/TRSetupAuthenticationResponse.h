/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRResponseMessage.h>

@class NSSet;

@interface TRSetupAuthenticationResponse : TRResponseMessage {

	NSSet* _unauthenticatedAccountServices;

}

@property (nonatomic,retain) NSSet * unauthenticatedAccountServices;              //@synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUnauthenticatedAccountServices:(NSSet *)arg1 ;
-(NSSet *)unauthenticatedAccountServices;
@end

