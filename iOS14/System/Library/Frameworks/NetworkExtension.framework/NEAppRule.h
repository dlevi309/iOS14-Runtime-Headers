/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface NEAppRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	BOOL _noRestriction;
	BOOL _noDivertDNS;
	NSString* _matchSigningIdentifier;
	NSString* _matchDesignatedRequirement;
	NSString* _matchPath;
	NSArray* _matchDomains;
	NSArray* _matchTools;
	NSArray* _cachedMachOUUIDs;
	NSArray* _matchAccountIdentifiers;

}

@property (assign) BOOL noRestriction;                                   //@synthesize noRestriction=_noRestriction - In the implementation block
@property (retain) NSArray * cachedMachOUUIDs;                           //@synthesize cachedMachOUUIDs=_cachedMachOUUIDs - In the implementation block
@property (copy) NSArray * matchAccountIdentifiers;                      //@synthesize matchAccountIdentifiers=_matchAccountIdentifiers - In the implementation block
@property (assign) BOOL noDivertDNS;                                     //@synthesize noDivertDNS=_noDivertDNS - In the implementation block
@property (readonly) NSString * matchSigningIdentifier;                  //@synthesize matchSigningIdentifier=_matchSigningIdentifier - In the implementation block
@property (readonly) NSString * matchDesignatedRequirement;              //@synthesize matchDesignatedRequirement=_matchDesignatedRequirement - In the implementation block
@property (copy) NSString * matchPath;                                   //@synthesize matchPath=_matchPath - In the implementation block
@property (copy) NSArray * matchDomains;                                 //@synthesize matchDomains=_matchDomains - In the implementation block
@property (copy) NSArray * matchTools;                                   //@synthesize matchTools=_matchTools - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)noDivertDNS;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(id)initWithSigningIdentifier:(id)arg1 ;
-(void)setMatchDomains:(NSArray *)arg1 ;
-(void)setMatchAccountIdentifiers:(NSArray *)arg1 ;
-(void)setMatchPath:(NSString *)arg1 ;
-(void)setCachedMachOUUIDs:(NSArray *)arg1 ;
-(NSArray *)matchDomains;
-(NSString *)matchSigningIdentifier;
-(void)setNoRestriction:(BOOL)arg1 ;
-(id)copyLegacyDictionary;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(void)setMatchTools:(NSArray *)arg1 ;
-(NSArray *)cachedMachOUUIDs;
-(NSString *)matchPath;
-(NSString *)matchDesignatedRequirement;
-(BOOL)noRestriction;
-(void)setNoDivertDNS:(BOOL)arg1 ;
-(BOOL)matchesProcessWithAuditToken:(id)arg1 ;
-(NSArray *)matchTools;
-(NSArray *)matchAccountIdentifiers;
-(BOOL)overlapsWithRule:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)signingIdentifierAllowed:(id)arg1 domainsOrAccountsRequired:(out BOOL*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

