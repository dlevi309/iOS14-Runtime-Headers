/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NEPathController : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	long long _cellularFallbackFlags;
	NSArray* _pathRules;
	NSArray* _payloadAppRules;

}

@property (copy) NSArray * payloadAppRules;                          //@synthesize payloadAppRules=_payloadAppRules - In the implementation block
@property (getter=isEnabled) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
@property (assign) long long cellularFallbackFlags;                  //@synthesize cellularFallbackFlags=_cellularFallbackFlags - In the implementation block
@property (copy) NSArray * pathRules;                                //@synthesize pathRules=_pathRules - In the implementation block
@property (nonatomic,readonly) BOOL hasNonDefaultRules; 
+(BOOL)supportsSecureCoding;
+(id)copyAggregatePathRules;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setPayloadAppRules:(NSArray *)arg1 ;
-(BOOL)hasNonDefaultRules;
-(NSArray *)pathRules;
-(NSArray *)payloadAppRules;
-(long long)cellularFallbackFlags;
-(void)setPathRules:(NSArray *)arg1 ;
-(void)setCellularFallbackFlags:(long long)arg1 ;
-(id)copyPathRuleBySigningIdentifier:(id)arg1 ;
-(BOOL)removePathRuleBySigningIdentifier:(id)arg1 ;
-(id)copyPathRuleSigningIdentifiers;
@end
