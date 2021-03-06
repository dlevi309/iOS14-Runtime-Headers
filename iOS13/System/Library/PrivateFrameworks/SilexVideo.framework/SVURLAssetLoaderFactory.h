/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVURLAssetLoaderFactory.h>

@protocol SVURLAssetLoaderFactory <NSObject>
@required
-(id)createURLAssetLoaderForVideo:(id)arg1;

@end


@protocol SVURLAssetFactory, SVVideoURLProviderFactory, SVURLAssetOptionsProviding;
@class NSString;

@interface SVURLAssetLoaderFactory : NSObject <SVURLAssetLoaderFactory> {

	id<SVURLAssetFactory> _URLAssetFactory;
	id<SVVideoURLProviderFactory> _URLProviderFactory;
	id<SVURLAssetOptionsProviding> _optionsProvider;

}

@property (nonatomic,readonly) id<SVURLAssetFactory> URLAssetFactory;                         //@synthesize URLAssetFactory=_URLAssetFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoURLProviderFactory> URLProviderFactory;              //@synthesize URLProviderFactory=_URLProviderFactory - In the implementation block
@property (nonatomic,readonly) id<SVURLAssetOptionsProviding> optionsProvider;                //@synthesize optionsProvider=_optionsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVURLAssetOptionsProviding>)optionsProvider;
-(id)createURLAssetLoaderForVideo:(id)arg1 ;
-(id<SVVideoURLProviderFactory>)URLProviderFactory;
-(id<SVURLAssetFactory>)URLAssetFactory;
-(id)initWithURLAssetFactory:(id)arg1 URLProviderFactory:(id)arg2 optionsProvider:(id)arg3 ;
@end

