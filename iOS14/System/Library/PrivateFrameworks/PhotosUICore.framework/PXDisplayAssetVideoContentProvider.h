/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXVideoContentProvider.h>
#import <libobjc.A.dylib/PXDisplayAssetVideoContentProviderRequestDelegate.h>

@protocol OS_dispatch_queue, PXDisplayAsset;
@class NSObject, NSMutableDictionary, NSString, PXMediaProvider;

@interface PXDisplayAssetVideoContentProvider : PXVideoContentProvider <PXDisplayAssetVideoContentProviderRequestDelegate> {

	long long _videoRequestID;
	NSObject*<OS_dispatch_queue> _loadingQueue;
	NSObject*<OS_dispatch_queue> _postprocessingQueue;
	NSMutableDictionary* _loadingQueue_requestsByPriority;
	long long _loadingQueue_lastRequestedPriority;
	id<PXDisplayAsset> _loadingQueue_asset;
	double _videoAspectRatio;
	NSString* _contentIdentifier;
	PXMediaProvider* _mediaProvider;

}

@property (nonatomic,retain) id<PXDisplayAsset> asset; 
@property (nonatomic,readonly) BOOL needsPostprocessing; 
@property (nonatomic,readonly) PXMediaProvider * mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAsset:(id<PXDisplayAsset>)arg1 ;
-(void)cancelLoading;
-(PXMediaProvider *)mediaProvider;
-(id)init;
-(void)requestLoadingProgressDidChange:(id)arg1 ;
-(void)request:(id)arg1 didFinishWithPlayerItem:(id)arg2 info:(id)arg3 ;
-(id)analyticsPayload;
-(void)beginLoadingWithPriority:(long long)arg1 ;
-(BOOL)needsPostprocessing;
-(void)postprocessPlayerItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reloadContent;
-(void)_loadingQueue_setAsset:(id)arg1 ;
-(void)_loadingQueueBeginLoadingWithPriority:(long long)arg1 ;
-(void)_loadingQueue_cancelAllRequests;
-(void)_loadingQueue_beginRequestForPriorityIfNeeded:(long long)arg1 ;
-(BOOL)_loadingQueue_needsNewRequestForPriority:(long long)arg1 ;
-(void)_postprocessingQueue_performPostprocessingOfItem:(id)arg1 info:(id)arg2 priority:(long long)arg3 ;
-(void)_handlePostprocessedPlayerItem:(id)arg1 priority:(long long)arg2 description:(id)arg3 ;
-(id<PXDisplayAsset>)asset;
-(void)_loadingQueue_reloadContent;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(id)contentIdentifier;
-(id)videoAspectRatio;
-(NSString *)description;
@end

