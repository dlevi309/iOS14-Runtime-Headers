/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGSeasonMemoryGenerator : PGMemoryGenerator {

	NSDate* _localDate;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDate * localDate;                   //@synthesize localDate=_localDate - In the implementation block
+(unsigned long long)numberOfPotentialMemoriesWithGraph:(id)arg1 ;
+(BOOL)isMoment:(id)arg1 duringSeason:(id)arg2 ;
+(id)seasonNodeForMomentNode:(id)arg1 ;
-(NSDate *)localDate;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)initWithController:(id)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(void)setLocalDate:(NSDate *)arg1 ;
-(id)keyAssetCurationOptions;
-(void)lastSeasonMomentNodesForLocalDate:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(void)seasonInHistoryMomentNodesForLocalDate:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(id)_potentialMemoryForMomentNodes:(id)arg1 seasonNode:(id)arg2 category:(unsigned long long)arg3 ;
-(id)_lastSeasonPotentialMemory;
-(id)_seasonInHistoryPotentialMemories;
@end
