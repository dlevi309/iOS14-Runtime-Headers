/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <BaseBoard/BSAction.h>

@class FBSScene, FBSSerialQueue;

@interface FBSSceneAction : BSAction {

	FBSScene* _scene;
	FBSSerialQueue* _callOutQueue;

}

@property (nonatomic,retain) FBSScene * scene;                           //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) FBSSerialQueue * callOutQueue;              //@synthesize callOutQueue=_callOutQueue - In the implementation block
-(FBSScene *)scene;
-(void)setScene:(FBSScene *)arg1 ;
-(void)setCallOutQueue:(FBSSerialQueue *)arg1 ;
-(FBSSerialQueue *)callOutQueue;
@end

