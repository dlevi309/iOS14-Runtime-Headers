/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSURL, NSString, IKStyleMediaQuery;

@interface IKSrcSetRule : NSObject {

	NSURL* _imageURL;
	NSString* _descriptor;
	IKStyleMediaQuery* _mediaQuery;

}

@property (nonatomic,retain) NSURL * imageURL;                            //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSString * descriptor;                       //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) IKStyleMediaQuery * mediaQuery;              //@synthesize mediaQuery=_mediaQuery - In the implementation block
-(void)setImageURL:(NSURL *)arg1 ;
-(NSString *)descriptor;
-(void)setDescriptor:(NSString *)arg1 ;
-(NSURL *)imageURL;
-(IKStyleMediaQuery *)mediaQuery;
-(id)initWithURL:(id)arg1 descriptor:(id)arg2 ;
-(void)_parseDescriptor:(id)arg1 ;
-(void)_parseMediaQueryDescriptor:(id)arg1 ;
-(void)_parseResolutionDescriptor:(id)arg1 ;
-(void)setMediaQuery:(IKStyleMediaQuery *)arg1 ;
@end

