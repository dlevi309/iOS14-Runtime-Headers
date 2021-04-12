/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/PosterDataProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSString, PHAssetCollection, NSDate, PHAsset, VEKBlueprint, NSSet, _TtC11AutoEditLib18PipelineController, _TtC11AutoEditLib24PipelineExportController, NSObject, VEKProductionExport, VEKResult, _TtC11AutoEditLib11MoodService, NSDictionary, NSArray, MiroPickList, _TtC11AutoEditLib15PicklistService;

@interface VEKProduction : NSObject <PosterDataProtocol, NSSecureCoding, NSCopying> {

	BOOL _isPending;
	BOOL _memoryTypeDisablesCropping;
	BOOL _persistedAtLeastOnce;
	PHAssetCollection* _collection;
	double _requestedDuration;
	NSString* _requestedMood;
	NSDate* _memoryViewedDate;
	NSString* _title;
	NSString* _subtitle;
	PHAsset* _keyAsset;
	VEKBlueprint* _blueprint;
	NSSet* _suggestions;
	_TtC11AutoEditLib18PipelineController* _pipelineController;
	_TtC11AutoEditLib24PipelineExportController* _pipelineExportController;
	NSObject*<OS_dispatch_queue> _pipelineQueue;
	VEKProductionExport* _productionExport;
	VEKResult* _lastResult;
	_TtC11AutoEditLib11MoodService* _moodService;
	unsigned long long _memoryCategory;
	unsigned long long _memorySubcategory;
	NSDictionary* _memoryFeaturesPersonInAsset;
	NSDictionary* _featuredPersonsInMemoryAsFaceRanges;
	NSArray* _fetchedAssets;
	MiroPickList* _fullPicklist;
	_TtC11AutoEditLib15PicklistService* _fullPicklistService;
	double _maxDuration;

}

@property (nonatomic,readonly) NSString * fontName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _TtC11AutoEditLib18PipelineController * pipelineController;                          //@synthesize pipelineController=_pipelineController - In the implementation block
@property (nonatomic,retain) _TtC11AutoEditLib24PipelineExportController * pipelineExportController;              //@synthesize pipelineExportController=_pipelineExportController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pipelineQueue;                                          //@synthesize pipelineQueue=_pipelineQueue - In the implementation block
@property (nonatomic,retain) VEKProductionExport * productionExport;                                              //@synthesize productionExport=_productionExport - In the implementation block
@property (nonatomic,retain) VEKResult * lastResult;                                                              //@synthesize lastResult=_lastResult - In the implementation block
@property (nonatomic,retain) _TtC11AutoEditLib11MoodService * moodService;                                        //@synthesize moodService=_moodService - In the implementation block
@property (assign,nonatomic) BOOL memoryTypeDisablesCropping;                                                     //@synthesize memoryTypeDisablesCropping=_memoryTypeDisablesCropping - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCategory;                                                   //@synthesize memoryCategory=_memoryCategory - In the implementation block
@property (assign,nonatomic) unsigned long long memorySubcategory;                                                //@synthesize memorySubcategory=_memorySubcategory - In the implementation block
@property (nonatomic,retain) NSDictionary * memoryFeaturesPersonInAsset;                                          //@synthesize memoryFeaturesPersonInAsset=_memoryFeaturesPersonInAsset - In the implementation block
@property (nonatomic,retain) NSDictionary * featuredPersonsInMemoryAsFaceRanges;                                  //@synthesize featuredPersonsInMemoryAsFaceRanges=_featuredPersonsInMemoryAsFaceRanges - In the implementation block
@property (nonatomic,retain) NSArray * fetchedAssets;                                                             //@synthesize fetchedAssets=_fetchedAssets - In the implementation block
@property (nonatomic,retain) MiroPickList * fullPicklist;                                                         //@synthesize fullPicklist=_fullPicklist - In the implementation block
@property (assign,nonatomic) BOOL persistedAtLeastOnce;                                                           //@synthesize persistedAtLeastOnce=_persistedAtLeastOnce - In the implementation block
@property (nonatomic,retain) _TtC11AutoEditLib15PicklistService * fullPicklistService;                            //@synthesize fullPicklistService=_fullPicklistService - In the implementation block
@property (assign,nonatomic) double maxDuration;                                                                  //@synthesize maxDuration=_maxDuration - In the implementation block
@property (nonatomic,retain) NSString * requestedMood;                                                            //@synthesize requestedMood=_requestedMood - In the implementation block
@property (nonatomic,retain) NSDate * memoryViewedDate;                                                           //@synthesize memoryViewedDate=_memoryViewedDate - In the implementation block
@property (assign,nonatomic) BOOL isPending;                                                                      //@synthesize isPending=_isPending - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * collection;                                                    //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic) double requestedDuration;                                                            //@synthesize requestedDuration=_requestedDuration - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) PHAsset * keyAsset;                                                                    //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) VEKBlueprint * blueprint;                                                            //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,retain) NSSet * suggestions;                                                                 //@synthesize suggestions=_suggestions - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)fontName;
-(NSSet *)suggestions;
-(void)setSuggestions:(NSSet *)arg1 ;
-(VEKBlueprint *)blueprint;
-(PHAssetCollection *)collection;
-(PHAsset *)keyAsset;
-(double)maxDuration;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(BOOL)isPending;
-(NSString *)subtitle;
-(void)setIsPending:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)fetchedAssets;
-(void)setFetchedAssets:(NSArray *)arg1 ;
-(VEKResult *)lastResult;
-(void)setBlueprint:(VEKBlueprint *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setLastResult:(VEKResult *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)persisted;
-(id)initWithAssetCollection:(id)arg1 ;
-(void)setMaxDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)memoryCategory;
-(void)setMemoryCategory:(unsigned long long)arg1 ;
-(unsigned long long)memorySubcategory;
-(void)setMemorySubcategory:(unsigned long long)arg1 ;
-(double)requestedDuration;
-(void)persistMemory;
-(long long)pickedItemCount;
-(void)exportWithPresets:(id)arg1 naturalSize:(CGSize)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setRequestedDuration:(double)arg1 ;
-(BOOL)memoryTypeDisablesCropping;
-(void)setMemoryTypeDisablesCropping:(BOOL)arg1 ;
-(NSDictionary *)memoryFeaturesPersonInAsset;
-(void)setMemoryFeaturesPersonInAsset:(NSDictionary *)arg1 ;
-(NSDictionary *)featuredPersonsInMemoryAsFaceRanges;
-(void)setFeaturedPersonsInMemoryAsFaceRanges:(NSDictionary *)arg1 ;
-(void)makePlayerItemWithNaturalSize:(CGSize)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)logCloudToLocalIdentifiersForCollection:(id)arg1 ;
-(void)logAssetTypesForCollection:(id)arg1 description:(id)arg2 ;
-(_TtC11AutoEditLib11MoodService *)moodService;
-(NSObject*<OS_dispatch_queue>)pipelineQueue;
-(_TtC11AutoEditLib18PipelineController *)pipelineController;
-(_TtC11AutoEditLib24PipelineExportController *)pipelineExportController;
-(_TtC11AutoEditLib15PicklistService *)fullPicklistService;
-(MiroPickList *)fullPicklist;
-(BOOL)persistedAtLeastOnce;
-(void)setPersistedAtLeastOnce:(BOOL)arg1 ;
-(void)setFullPicklist:(MiroPickList *)arg1 ;
-(void)setProductionExport:(VEKProductionExport *)arg1 ;
-(VEKProductionExport *)productionExport;
-(void)makeProjectWithNaturalSize:(CGSize)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)requestedMood;
-(void)setRequestedMood:(NSString *)arg1 ;
-(NSDate *)memoryViewedDate;
-(void)setMemoryViewedDate:(NSDate *)arg1 ;
-(void)setPipelineController:(_TtC11AutoEditLib18PipelineController *)arg1 ;
-(void)setPipelineExportController:(_TtC11AutoEditLib24PipelineExportController *)arg1 ;
-(void)setPipelineQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMoodService:(_TtC11AutoEditLib11MoodService *)arg1 ;
-(void)setFullPicklistService:(_TtC11AutoEditLib15PicklistService *)arg1 ;
@end
