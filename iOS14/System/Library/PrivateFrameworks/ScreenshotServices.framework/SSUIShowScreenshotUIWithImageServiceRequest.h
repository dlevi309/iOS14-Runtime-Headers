/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/SSUIServiceRequest.h>

@class UIImage, SSUIServiceOptions;

@interface SSUIShowScreenshotUIWithImageServiceRequest : SSUIServiceRequest {

	UIImage* _image;
	SSUIServiceOptions* _options;

}

@property (nonatomic,retain) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) SSUIServiceOptions * options;              //@synthesize options=_options - In the implementation block
+(id)entitlement;
-(void)setImage:(UIImage *)arg1 ;
-(SSUIServiceOptions *)options;
-(void)setOptions:(SSUIServiceOptions *)arg1 ;
-(UIImage *)image;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

