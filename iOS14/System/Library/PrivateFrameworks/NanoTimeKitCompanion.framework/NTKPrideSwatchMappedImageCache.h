/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <BaseBoardUI/BSUIMappedImageCache.h>

@class NSArray;

@interface NTKPrideSwatchMappedImageCache : BSUIMappedImageCache {

	NSArray* _libraryCollections;

}
+(id)sharedCache;
+(id)keyForFaceStyle:(long long)arg1 editOption:(id)arg2 mode:(long long)arg3 selectedOptions:(id)arg4 ;
-(id)_init;
-(void)_cleanCache;
-(void)_removeImagesForKeysMatching:(/*^block*/id)arg1 ;
@end

