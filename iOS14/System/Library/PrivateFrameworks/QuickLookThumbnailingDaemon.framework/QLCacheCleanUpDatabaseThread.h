/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
@class NSMutableDictionary, _QLCacheThread, NSConditionLock, NSThread;

@interface QLCacheCleanUpDatabaseThread : NSObject {

	NSMutableDictionary* _thumbnailsHit;
	_QLCacheThread* _cacheThread;
	NSConditionLock* _threadLock;
	CFRunLoopRef _threadRunLoop;
	NSThread* _thread;
	BOOL _diskCacheCleanupDone;
	int _currentMode;
	BOOL _shouldRemoveThumbnailsForDeletedFiles;

}

@property (assign) BOOL diskCacheCleanupDone;                                         //@synthesize diskCacheCleanupDone=_diskCacheCleanupDone - In the implementation block
@property (retain) _QLCacheThread * cacheThread;                                      //@synthesize cacheThread=_cacheThread - In the implementation block
@property (retain) NSMutableDictionary * thumbnailsHit;                               //@synthesize thumbnailsHit=_thumbnailsHit - In the implementation block
@property (nonatomic,readonly) unsigned long long hitToSaveCount; 
@property (nonatomic,readonly) int currentMode;                                       //@synthesize currentMode=_currentMode - In the implementation block
@property (assign,nonatomic) BOOL shouldRemoveThumbnailsForDeletedFiles;              //@synthesize shouldRemoveThumbnailsForDeletedFiles=_shouldRemoveThumbnailsForDeletedFiles - In the implementation block
-(int)currentMode;
-(void)pause;
-(void)_threadMain;
-(void)stop;
-(void)dealloc;
-(id)initWithCacheThread:(id)arg1 ;
-(_QLCacheThread *)cacheThread;
-(void)setCacheThread:(_QLCacheThread *)arg1 ;
-(void)setShouldRemoveThumbnailsForDeletedFiles:(BOOL)arg1 ;
-(void)_stopWriteAndCleanUpThreadRunLoop;
-(BOOL)diskCacheCleanupDone;
-(BOOL)_updateHitCount;
-(BOOL)shouldRemoveThumbnailsForDeletedFiles;
-(void)setDiskCacheCleanupDone:(BOOL)arg1 ;
-(NSMutableDictionary *)thumbnailsHit;
-(void)_writeAndCleanUp;
-(void)startCleanUp;
-(void)addHitWithThumbnailData:(id)arg1 ;
-(unsigned long long)hitToSaveCount;
-(void)cleanUpForReset;
-(void)setThumbnailsHit:(NSMutableDictionary *)arg1 ;
@end
