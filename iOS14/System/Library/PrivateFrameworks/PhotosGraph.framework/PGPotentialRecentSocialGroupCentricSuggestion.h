/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSArray, NSDate;

@interface PGPotentialRecentSocialGroupCentricSuggestion : NSObject {

	float _weight;
	NSArray* _personLocalIdentifiers;
	NSArray* _personWeights;
	NSArray* _momentLocalIdentifiers;
	NSArray* _assets;
	NSDate* _notSeenSinceDate;

}

@property (nonatomic,readonly) NSArray * personLocalIdentifiers;              //@synthesize personLocalIdentifiers=_personLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * personWeights;                       //@synthesize personWeights=_personWeights - In the implementation block
@property (nonatomic,readonly) NSArray * momentLocalIdentifiers;              //@synthesize momentLocalIdentifiers=_momentLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) float weight;                                  //@synthesize weight=_weight - In the implementation block
@property (nonatomic,retain) NSArray * assets;                                //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSDate * notSeenSinceDate;                       //@synthesize notSeenSinceDate=_notSeenSinceDate - In the implementation block
-(NSArray *)assets;
-(float)weight;
-(NSArray *)momentLocalIdentifiers;
-(NSArray *)personLocalIdentifiers;
-(void)setAssets:(NSArray *)arg1 ;
-(id)initWithPersonLocalIdentifiers:(id)arg1 personWeights:(id)arg2 momentLocalIdentifiers:(id)arg3 weight:(float)arg4 notSeenSinceDate:(id)arg5 ;
-(NSArray *)personWeights;
-(NSDate *)notSeenSinceDate;
-(void)setNotSeenSinceDate:(NSDate *)arg1 ;
@end

