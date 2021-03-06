/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TRIVersionedNamespace : NSObject <NSCopying, NSSecureCoding> {

	unsigned _compatibilityVersion;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
+(void)load;
+(BOOL)supportsSecureCoding;
+(id)versionedNamespaceWithName:(id)arg1 compatibilityVersion:(unsigned)arg2 ;
-(unsigned)compatibilityVersion;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithReplacementCompatibilityVersion:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithName:(id)arg1 compatibilityVersion:(unsigned)arg2 ;
-(BOOL)isEqualToVersionedNamespace:(id)arg1 ;
-(id)copyWithReplacementName:(id)arg1 ;
-(void)_swizzledEncodeWithCoder:(id)arg1 ;
@end

