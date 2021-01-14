/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <libobjc.A.dylib/CSIndexExtensionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, _MDExtensionLoader, NSDictionary, NSCondition, NSString;

@interface _MDExtensionManager : NSObject <CSIndexExtensionDelegate> {

	NSObject*<OS_dispatch_queue> _notifyQueue;
	_MDExtensionLoader* _extensionLoader;
	NSDictionary* _indexExtensionsByBundleID;
	NSDictionary* _fileProviderBundleMap;
	NSObject*<OS_dispatch_queue> _queue;
	NSCondition* _extensionsCondition;
	NSObject*<OS_dispatch_queue> _extensionManagerQueue;
	long long _loaderCallbackCount;

}

@property (nonatomic,retain) _MDExtensionLoader * extensionLoader;                            //@synthesize extensionLoader=_extensionLoader - In the implementation block
@property (nonatomic,retain) NSDictionary * indexExtensionsByBundleID;                        //@synthesize indexExtensionsByBundleID=_indexExtensionsByBundleID - In the implementation block
@property (nonatomic,retain) NSDictionary * fileProviderBundleMap;                            //@synthesize fileProviderBundleMap=_fileProviderBundleMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSCondition * extensionsCondition;                               //@synthesize extensionsCondition=_extensionsCondition - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> extensionManagerQueue;              //@synthesize extensionManagerQueue=_extensionManagerQueue - In the implementation block
@property (assign,nonatomic) long long loaderCallbackCount;                                   //@synthesize loaderCallbackCount=_loaderCallbackCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notifyQueue;                        //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(void)loadExtensions;
-(void)findExtensionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSDictionary *)fileProviderBundleMap;
-(void)setFileProviderBundleMap:(NSDictionary *)arg1 ;
-(id)initWithQueueName:(const char*)arg1 ;
-(void)setExtensionLoader:(_MDExtensionLoader *)arg1 ;
-(void)_notifyForLoadedExtensions;
-(void)_waitForLoadLocked;
-(NSDictionary *)indexExtensionsByBundleID;
-(id)allExtensionsWithBlock:(/*^block*/id)arg1 ;
-(void)_willRunJobWithBundleID:(id)arg1 ;
-(void)_didRetryJobWithBundleID:(id)arg1 ;
-(_MDExtensionLoader *)extensionLoader;
-(void)_performJob:(id)arg1 extensions:(id)arg2 count:(unsigned long long)arg3 throttle:(id)arg4 perExtensionCompletionHandler:(/*^block*/id)arg5 ;
-(id)anyExtensionWithBlock:(/*^block*/id)arg1 ;
-(void)setIndexExtensionsByBundleID:(NSDictionary *)arg1 ;
-(id)extensions;
-(void)_performJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)indexRequestsPerformJob:(id)arg1 forBundle:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)indexRequestsPerformJob:(id)arg1 perExtensionCompletionHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)indexRequestsPerformDataJob:(id)arg1 forBundle:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)indexRequestsPerformJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSCondition *)extensionsCondition;
-(void)setExtensionsCondition:(NSCondition *)arg1 ;
-(NSObject*<OS_dispatch_queue>)extensionManagerQueue;
-(void)setExtensionManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)loaderCallbackCount;
-(void)setLoaderCallbackCount:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setNotifyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
