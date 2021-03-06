/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@protocol NUArticleFactory, NUArticleHostViewControllerFactory, NUArticleActivityFactory;
@interface NUArticlePageFactory : NSObject {

	id<NUArticleFactory> _articleFactory;
	id<NUArticleHostViewControllerFactory> _articleHostViewControllerFactory;
	id<NUArticleActivityFactory> _articleActivityFactory;

}

@property (nonatomic,readonly) id<NUArticleFactory> articleFactory;                                                  //@synthesize articleFactory=_articleFactory - In the implementation block
@property (nonatomic,readonly) id<NUArticleHostViewControllerFactory> articleHostViewControllerFactory;              //@synthesize articleHostViewControllerFactory=_articleHostViewControllerFactory - In the implementation block
@property (nonatomic,readonly) id<NUArticleActivityFactory> articleActivityFactory;                                  //@synthesize articleActivityFactory=_articleActivityFactory - In the implementation block
-(id<NUArticleHostViewControllerFactory>)articleHostViewControllerFactory;
-(id<NUArticleActivityFactory>)articleActivityFactory;
-(id<NUArticleFactory>)articleFactory;
-(id)initWithArticleFactory:(id)arg1 articleActivityFactory:(id)arg2 articleHostViewControllerFactory:(id)arg3 ;
-(id)createPagesForArticleIDs:(id)arg1 ;
@end

