/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIScene;

@interface UISceneActivationRequestOptions : NSObject {

	BOOL _preserveLayout;
	BOOL __requestFullscreen;
	UIScene* _requestingScene;
	long long _collectionJoinBehavior;

}

@property (assign,nonatomic) BOOL preserveLayout;                                                //@synthesize preserveLayout=_preserveLayout - In the implementation block
@property (assign,nonatomic) long long _collectionJoinBehavior; 
@property (assign,setter=_setRequestFullscreen:,nonatomic) BOOL _requestFullscreen;              //@synthesize _requestFullscreen=__requestFullscreen - In the implementation block
@property (nonatomic,retain) UIScene * requestingScene;                                          //@synthesize requestingScene=_requestingScene - In the implementation block
@property (assign,nonatomic) long long collectionJoinBehavior;                                   //@synthesize collectionJoinBehavior=_collectionJoinBehavior - In the implementation block
-(void)setRequestingScene:(UIScene *)arg1 ;
-(void)set_collectionJoinBehavior:(long long)arg1 ;
-(long long)_collectionJoinBehavior;
-(long long)collectionJoinBehavior;
-(void)setCollectionJoinBehavior:(long long)arg1 ;
-(void)_setRequestFullscreen:(BOOL)arg1 ;
-(UIScene *)requestingScene;
-(BOOL)preserveLayout;
-(void)setPreserveLayout:(BOOL)arg1 ;
-(BOOL)_requestFullscreen;
@end
