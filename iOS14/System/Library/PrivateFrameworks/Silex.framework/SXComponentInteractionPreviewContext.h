/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInteractionPreviewContext.h>
@class UIViewController;


@protocol SXComponentInteractionPreviewContext <NSObject>
@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,readonly) CGRect sourceRect; 
@required
-(UIViewController *)viewController;
-(CGRect)sourceRect;

@end


@class UIViewController, NSString;

@interface SXComponentInteractionPreviewContext : NSObject <SXComponentInteractionPreviewContext> {

	UIViewController* _viewController;
	CGRect _sourceRect;

}

@property (nonatomic,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) CGRect sourceRect;                              //@synthesize sourceRect=_sourceRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)viewController;
-(CGRect)sourceRect;
-(id)initWithViewController:(id)arg1 sourceRect:(CGRect)arg2 ;
@end

