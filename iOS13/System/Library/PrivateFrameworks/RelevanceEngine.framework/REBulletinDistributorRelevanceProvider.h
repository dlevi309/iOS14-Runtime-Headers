/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString;

@interface REBulletinDistributorRelevanceProvider : RERelevanceProvider {

	NSString* _bulletinSectionIdentifier;

}

@property (nonatomic,readonly) NSString * bulletinSectionIdentifier;              //@synthesize bulletinSectionIdentifier=_bulletinSectionIdentifier - In the implementation block
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithBulletinSectionIdentifier:(id)arg1 ;
-(NSString *)bulletinSectionIdentifier;
@end

