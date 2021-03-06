/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <libobjc.A.dylib/CVAPortraitGenericRequest.h>

@protocol CVABackgroundRequest, CVALightRequest, CVAPostProcessingRequest;
@class NSString;

@interface CVAPortraitGenericRequestImpl : NSObject <CVAPortraitGenericRequest> {

	BOOL _isTmpConfig;
	id<CVABackgroundRequest> _background;
	id<CVALightRequest> _light;
	id<CVAPostProcessingRequest> _post;

}

@property (retain) id<CVABackgroundRequest> background;              //@synthesize background=_background - In the implementation block
@property (retain) id<CVALightRequest> light;                        //@synthesize light=_light - In the implementation block
@property (retain) id<CVAPostProcessingRequest> post;                //@synthesize post=_post - In the implementation block
@property (assign) BOOL isTmpConfig;                                 //@synthesize isTmpConfig=_isTmpConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CVABackgroundRequest>)background;
-(void)setBackground:(id<CVABackgroundRequest>)arg1 ;
-(id<CVAPostProcessingRequest>)post;
-(id<CVALightRequest>)light;
-(void)setPost:(id<CVAPostProcessingRequest>)arg1 ;
-(void)setLight:(id<CVALightRequest>)arg1 ;
-(BOOL)isTmpConfig;
-(void)setIsTmpConfig:(BOOL)arg1 ;
@end

