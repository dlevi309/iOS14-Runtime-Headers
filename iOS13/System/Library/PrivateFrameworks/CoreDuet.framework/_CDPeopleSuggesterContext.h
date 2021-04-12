/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, NSSet, _CDInteraction;

@interface _CDPeopleSuggesterContext : NSObject <NSCopying> {

	NSDate* _date;
	NSString* _locationUUID;
	NSString* _title;
	NSString* _contactPrefix;
	NSSet* _seedContactIdentifiers;
	NSSet* _nearbyPeople;
	NSString* _consumerIdentifier;
	NSSet* _contentUTIs;
	_CDInteraction* _activeInteraction;

}

@property (retain) _CDInteraction * activeInteraction;              //@synthesize activeInteraction=_activeInteraction - In the implementation block
@property (retain) NSDate * date;                                   //@synthesize date=_date - In the implementation block
@property (retain) NSString * locationUUID;                         //@synthesize locationUUID=_locationUUID - In the implementation block
@property (retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (retain) NSString * contactPrefix;                        //@synthesize contactPrefix=_contactPrefix - In the implementation block
@property (retain) NSSet * seedContactIdentifiers;                  //@synthesize seedContactIdentifiers=_seedContactIdentifiers - In the implementation block
@property (retain) NSSet * nearbyPeople;                            //@synthesize nearbyPeople=_nearbyPeople - In the implementation block
@property (retain) NSString * consumerIdentifier;                   //@synthesize consumerIdentifier=_consumerIdentifier - In the implementation block
@property (retain) NSSet * contentUTIs;                             //@synthesize contentUTIs=_contentUTIs - In the implementation block
+(id)currentContext;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)locationUUID;
-(void)setLocationUUID:(NSString *)arg1 ;
-(void)setConsumerIdentifier:(NSString *)arg1 ;
-(void)setContactPrefix:(NSString *)arg1 ;
-(NSString *)contactPrefix;
-(NSString *)consumerIdentifier;
-(void)setNearbyPeople:(NSSet *)arg1 ;
-(void)setActiveInteraction:(_CDInteraction *)arg1 ;
-(_CDInteraction *)activeInteraction;
-(NSSet *)nearbyPeople;
-(NSSet *)seedContactIdentifiers;
-(NSSet *)contentUTIs;
-(void)setSeedContactIdentifiers:(NSSet *)arg1 ;
-(void)setContentUTIs:(NSSet *)arg1 ;
@end
