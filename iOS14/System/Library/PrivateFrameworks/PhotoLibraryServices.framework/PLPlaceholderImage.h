/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSCache;

@interface PLPlaceholderImage : NSObject {

	NSCache* _dumbCache;

}
+(id)sharedManager;
-(id)init;
-(CGImageRef)newPlaceholderImageWithSize:(CGSize)arg1 ;
@end

