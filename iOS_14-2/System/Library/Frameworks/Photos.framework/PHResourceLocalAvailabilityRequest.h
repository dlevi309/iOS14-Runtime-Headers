/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSMutableDictionary, PHAsset, NSProgress, NSArray, NSMutableArray, NSString;

@interface PHResourceLocalAvailabilityRequest : NSObject <NSProgressReporting> {

	NSMutableDictionary* _progressByRequestIdentifier;
	/*^block*/id _downloadCompletionHandler;
	BOOL __downloadCancelled;
	PHAsset* _asset;
	long long _requestType;
	double _progressFraction;
	NSProgress* _progress;
	/*^block*/id _progressChangeHandler;
	NSArray* __assetResources;
	NSMutableArray* __activeAssetResourcesRequest;

}

@property (assign,setter=_setProgressFraction:,nonatomic) double progressFraction;                                           //@synthesize progressFraction=_progressFraction - In the implementation block
@property (assign,setter=_setDownloadCancelled:,getter=_isDownloadCancelled,nonatomic) BOOL _downloadCancelled;              //@synthesize _downloadCancelled=__downloadCancelled - In the implementation block
@property (setter=_setAssetResources:,nonatomic,retain) NSArray * _assetResources;                                           //@synthesize _assetResources=__assetResources - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _activeAssetResourcesRequest;                                                //@synthesize _activeAssetResourcesRequest=__activeAssetResourcesRequest - In the implementation block
@property (readonly) PHAsset * asset;                                                                                        //@synthesize asset=_asset - In the implementation block
@property (readonly) long long requestType;                                                                                  //@synthesize requestType=_requestType - In the implementation block
@property (readonly) NSProgress * progress;                                                                                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id progressChangeHandler;                                                                         //@synthesize progressChangeHandler=_progressChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_resourceInfoForAsset:(id)arg1 resourcesToShare:(id)arg2 includeAllAssetResources:(BOOL)arg3 fulfillOnDemandResources:(BOOL)arg4 error:(id*)arg5 ;
+(id)_resourcesToShareForAsset:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)utiKeysForURLKeys;
+(id)fetchResourcesToShareForAsset:(id)arg1 requestOptions:(id)arg2 error:(id*)arg3 ;
+(id)_resourcesToShareForAsset:(id)arg1 error:(id*)arg2 ;
+(BOOL)setValuesInDictionary:(id)arg1 fromDictionary:(id)arg2 keysToCopy:(id)arg3 ;
+(id)resourceInfoKeysForResourceTypesForPhotos;
+(id)originalsAndFullSizeResourcesToShareForAsset:(id)arg1 fromAvailableResources:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)indexesForAssetsRequiringResourceRetrieval:(id)arg1 requestType:(long long)arg2 ;
+(id)indexesForAssetsWithoutThumbnails:(id)arg1 requestType:(long long)arg2 ;
+(id)singularResourcesToShareForAsset:(id)arg1 fromAvailableResources:(id)arg2 options:(id)arg3 useOriginalResources:(BOOL)arg4 knownUnsupported:(BOOL)arg5 error:(id*)arg6 ;
+(id)resourceInfoKeysForResourceTypesForVideos;
+(id)indexesForAssetsRequiringResourceRetrieval:(id)arg1 requestType:(long long)arg2 options:(id)arg3 ;
+(id)resourceInfoForAsset:(id)arg1 requestType:(long long)arg2 error:(id*)arg3 ;
-(NSProgress *)progress;
-(id)init;
-(long long)requestType;
-(PHAsset *)asset;
-(NSArray *)_assetResources;
-(id)initWithAsset:(id)arg1 requestType:(long long)arg2 ;
-(void)fetchResourceAvailabilityWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)retrieveRequiredResourcesWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_cancelActiveAssetResourceRequests;
-(void)_fetchResourcesWithOptions:(id)arg1 networkAccessAllowed:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchResourcesForPickerAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_handleCompletionOfAssetResourceDataRequestWithId:(int)arg1 error:(id)arg2 ;
-(void)_fetchResourcesForSharingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchResourcesForDuplicatingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)cancelRetrievalRequest;
-(void)_setProgressFraction:(double)arg1 ;
-(void)_simulateFetchResourcesWithDuration:(double)arg1 success:(BOOL)arg2 networkAccessAllowed:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_didFinishDownloadWithSuccess:(BOOL)arg1 resourceInfo:(id)arg2 error:(id)arg3 ;
-(long long)resourceAvailabilityForOptions:(id)arg1 resourceInfo:(id*)arg2 ;
-(double)progressFraction;
-(void)_updateCombinedProgressWithValue:(double)arg1 forRequestIdentifier:(id)arg2 networkAccessAllowed:(BOOL)arg3 ;
-(id)progressChangeHandler;
-(void)setProgressChangeHandler:(id)arg1 ;
-(BOOL)_isDownloadCancelled;
-(void)_setDownloadCancelled:(BOOL)arg1 ;
-(void)_setAssetResources:(id)arg1 ;
-(NSMutableArray *)_activeAssetResourcesRequest;
@end
