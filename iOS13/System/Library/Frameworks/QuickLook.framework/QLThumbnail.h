/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


#import <QuickLook/QuickLook-Structs.h>
@class NSURL;

@interface QLThumbnail : NSObject {

	NSURL* _url;

}

@property (retain) NSURL * url;              //@synthesize url=_url - In the implementation block
+(id)sharedQueue;
+(id)defaultDescriptors;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)thumbnailCreationOperationForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 generateIfNeeded:(BOOL)arg3 ;
-(id)thumbnailCreationOperationForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 ;
-(id)imageForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 generateIfNeeded:(BOOL)arg3 contentRect:(CGRect*)arg4 error:(id*)arg5 ;
-(BOOL)provideImages:(/*^block*/id)arg1 error:(id*)arg2 ;
@end

