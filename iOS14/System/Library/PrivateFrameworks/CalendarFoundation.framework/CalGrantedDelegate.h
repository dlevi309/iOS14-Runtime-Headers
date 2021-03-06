/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CalGrantedDelegate : NSObject <NSSecureCoding> {

	NSString* _uri;
	NSString* _displayName;
	NSString* _preferredUserAddress;
	long long _permission;

}

@property (nonatomic,copy) NSString * uri;                               //@synthesize uri=_uri - In the implementation block
@property (nonatomic,copy) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * preferredUserAddress;              //@synthesize preferredUserAddress=_preferredUserAddress - In the implementation block
@property (assign,nonatomic) long long permission;                       //@synthesize permission=_permission - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)uri;
-(void)setUri:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(long long)permission;
-(void)setPermission:(long long)arg1 ;
-(NSString *)preferredUserAddress;
-(void)setPreferredUserAddress:(NSString *)arg1 ;
@end

