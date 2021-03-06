/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXAnimatedImageViewCacheDelegate;
#import <Silex/Silex-Structs.h>
@class SXAnimatedImage, NSOperationQueue, NSMutableArray, NSMutableIndexSet;

@interface SXAnimatedImageViewCache : NSObject {

	BOOL _cachingEnabled;
	os_unfair_lock_s _lock;
	id<SXAnimatedImageViewCacheDelegate> _delegate;
	SXAnimatedImage* _animatedImage;
	long long _singleImageByteSize;
	unsigned long long _lastRequestedIndex;
	NSOperationQueue* _queue;
	unsigned long long _numberOfCachedImages;
	NSMutableArray* _cachedImages;
	NSMutableIndexSet* _indicesToCache;
	CGSize _size;

}

@property (assign,nonatomic) BOOL cachingEnabled;                                               //@synthesize cachingEnabled=_cachingEnabled - In the implementation block
@property (assign) long long singleImageByteSize;                                               //@synthesize singleImageByteSize=_singleImageByteSize - In the implementation block
@property (assign) unsigned long long lastRequestedIndex;                                       //@synthesize lastRequestedIndex=_lastRequestedIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long maxCacheSize; 
@property (nonatomic,readonly) NSOperationQueue * queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s lock;                                           //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCachedImages;                           //@synthesize numberOfCachedImages=_numberOfCachedImages - In the implementation block
@property (nonatomic,readonly) NSMutableArray * cachedImages;                                   //@synthesize cachedImages=_cachedImages - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * indicesToCache;                              //@synthesize indicesToCache=_indicesToCache - In the implementation block
@property (nonatomic,readonly) CGSize size;                                                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic,__weak) id<SXAnimatedImageViewCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) SXAnimatedImage * animatedImage;                            //@synthesize animatedImage=_animatedImage - In the implementation block
@property (assign,getter=preloadingSuspended,nonatomic) BOOL suspendPreloading; 
-(void)prune;
-(unsigned long long)numberOfCachedImages;
-(id<SXAnimatedImageViewCacheDelegate>)delegate;
-(CGSize)size;
-(os_unfair_lock_s)lock;
-(void)setCachingEnabled:(BOOL)arg1 ;
-(SXAnimatedImage *)animatedImage;
-(BOOL)cachingEnabled;
-(void)setDelegate:(id<SXAnimatedImageViewCacheDelegate>)arg1 ;
-(void)setAnimatedImage:(SXAnimatedImage *)arg1 ;
-(NSOperationQueue *)queue;
-(id)imageForFrameIndex:(unsigned long long)arg1 ;
-(void)prepareCache;
-(void)cacheNextImage;
-(void)decreaseCacheSize;
-(void)restoreCacheSize;
-(id)decodeImageFromSource:(CGImageSourceRef)arg1 index:(unsigned long long)arg2 ;
-(void)checkCacheSize;
-(unsigned long long)maxCacheSize;
-(id)initWithImageSize:(CGSize)arg1 ;
-(void)prepareImageForFrameIndex:(unsigned long long)arg1 ;
-(unsigned long long)nearestCachedFrameIndexForFrameIndex:(unsigned long long)arg1 ;
-(void)setSuspendPreloading:(BOOL)arg1 ;
-(BOOL)preloadingSuspended;
-(long long)singleImageByteSize;
-(void)setSingleImageByteSize:(long long)arg1 ;
-(unsigned long long)lastRequestedIndex;
-(void)setLastRequestedIndex:(unsigned long long)arg1 ;
-(void)setNumberOfCachedImages:(unsigned long long)arg1 ;
-(NSMutableArray *)cachedImages;
-(NSMutableIndexSet *)indicesToCache;
@end

