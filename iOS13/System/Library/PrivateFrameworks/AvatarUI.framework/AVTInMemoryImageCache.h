/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AVTInMemoryResourceCache.h>
#import <libobjc.A.dylib/AVTImageCache.h>

@class NSString;

@interface AVTInMemoryImageCache : AVTInMemoryResourceCache <AVTImageCache>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageForItem:(id)arg1 scope:(id)arg2 ;
-(id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3 ;
-(id)initWithLockProvider:(/*^block*/id)arg1 logger:(id)arg2 ;
@end

