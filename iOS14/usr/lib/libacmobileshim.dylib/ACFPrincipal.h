/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ACFPrincipal : NSObject <NSCopying, NSCoding> {

	NSString* _userName;
	NSString* _realm;
	NSString* _principalString;

}

@property (nonatomic,retain) NSString * userName;                     //@synthesize userName=_userName - In the implementation block
@property (nonatomic,retain) NSString * realm;                        //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSString * principalString; 
+(id)principalWithPrincipalString:(id)arg1 ;
+(id)principalWithUserName:(id)arg1 realm:(id)arg2 ;
-(NSString *)realm;
-(NSString *)userName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqualTo:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setRealm:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setPrincipalString:(NSString *)arg1 ;
-(void)releaseCaches;
-(NSString *)principalString;
@end
