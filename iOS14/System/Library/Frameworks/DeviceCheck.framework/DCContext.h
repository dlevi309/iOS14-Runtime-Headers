/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/DeviceCheck.framework/DeviceCheck
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DCContext : NSObject <NSSecureCoding> {

	NSString* _clientAppID;

}

@property (copy) NSString * clientAppID;              //@synthesize clientAppID=_clientAppID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)clientAppID;
-(void)setClientAppID:(NSString *)arg1 ;
@end

