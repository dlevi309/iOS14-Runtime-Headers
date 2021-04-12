/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTStoreBackendDelegate.h>
#import <libobjc.A.dylib/AVTAvatarStoreInternal.h>
#import <libobjc.A.dylib/AVTAvatarStore.h>

@protocol AVTAvatarStore <NSObject>
@required
-(BOOL)canCreateAvatar;
-(id)avatarsForFetchRequest:(id)arg1 error:(id*)arg2;
-(BOOL)canCreateAvatarWithError:(id*)arg1;
-(void)duplicateAvatar:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)deleteAvatar:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)saveAvatarRecord:(id)arg1 thumbnailAvatar:(id)arg2 completionBlock:(/*^block*/id)arg3 thumbnailGenerationCompletionBlock:(/*^block*/id)arg4;
-(void)fetchAvatarsForFetchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end


@protocol OS_dispatch_queue, AVTStoreBackend, AVTUILogger, AVTStickerBackend;
@class NSObject, AVTUIEnvironment, AVTPuppetStore, AVTAvatarRecordImageGenerator, NSString;

@interface AVTAvatarStore : NSObject <AVTStoreBackendDelegate, AVTAvatarStoreInternal, AVTAvatarStore> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _backendAccessQueue;
	NSObject*<OS_dispatch_queue> _puppetStoreAccessQueue;
	AVTUIEnvironment* _environment;
	id<AVTStoreBackend> _backend;
	AVTPuppetStore* _puppetStore;
	AVTAvatarRecordImageGenerator* _imageGenerator;
	id<AVTUILogger> _logger;
	id<AVTStickerBackend> _stickerBackend;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> backendAccessQueue;                        //@synthesize backendAccessQueue=_backendAccessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> puppetStoreAccessQueue;                    //@synthesize puppetStoreAccessQueue=_puppetStoreAccessQueue - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                         //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTStoreBackend> backend;                                            //@synthesize backend=_backend - In the implementation block
@property (nonatomic,readonly) AVTPuppetStore * puppetStore;                                           //@synthesize puppetStore=_puppetStore - In the implementation block
@property (nonatomic,readonly) AVTAvatarRecordImageGenerator * imageGenerator;                         //@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                 //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<AVTStickerBackend> stickerBackend;                                   //@synthesize stickerBackend=_stickerBackend - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTStickerBackendDelegate> stickerBackendDelegate; 
+(id)defaultImageGeneratorForEnvironment:(id)arg1 ;
+(id)defaultBackendWithWorkQueue:(id)arg1 environment:(id)arg2 ;
+(unsigned long long)maximumNumberOfFetchableAvatars;
+(unsigned long long)maximumNumberOfSavableAvatars;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(AVTPuppetStore *)puppetStore;
-(id)initWithBackend:(id)arg1 backendAccessQueue:(id)arg2 puppetStore:(id)arg3 imageGenerator:(id)arg4 stickerBackend:(id)arg5 environment:(id)arg6 ;
-(void)performBackendWork:(/*^block*/id)arg1 ;
-(void)performPuppetStoreWork:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)backendAccessQueue;
-(NSObject*<OS_dispatch_queue>)puppetStoreAccessQueue;
-(void)performAsynchronousWork:(/*^block*/id)arg1 ;
-(void)postChangeNotificationForRecordWithIdentifiers:(id)arg1 remote:(BOOL)arg2 ;
-(id<AVTStickerBackend>)stickerBackend;
-(BOOL)canCreateAvatar;
-(id)avatarsForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithDomainIdentifier:(id)arg1 ;
-(BOOL)canCreateAvatarWithError:(id*)arg1 ;
-(id<AVTStoreBackend>)backend;
-(id<AVTUILogger>)logger;
-(void)backend:(id)arg1 didChangeRecordsWithIdentifiers:(id)arg2 ;
-(void)duplicateAvatar:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)deleteAvatar:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(AVTUIEnvironment *)environment;
-(id)initWithImageGenerator:(id)arg1 environment:(id)arg2 ;
-(void)saveAvatarRecord:(id)arg1 thumbnailAvatar:(id)arg2 completionBlock:(/*^block*/id)arg3 thumbnailGenerationCompletionBlock:(/*^block*/id)arg4 ;
-(id)recentStickersForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)didUseStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteRecentStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteRecentStickersForChangeTracker:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setStickerBackendDelegate:(id<AVTStickerBackendDelegate>)arg1 ;
-(void)deleteAvatarWithIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(AVTAvatarRecordImageGenerator *)imageGenerator;
-(void)fetchAvatarsForFetchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
