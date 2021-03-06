/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/IrisClipStyle.h>

@interface IrisClipStyleTransition : IrisClipStyle {

	BOOL _buildIntro;
	BOOL _buildOutro;
	BOOL _videoContainedWithinTransitions;
	int _containedTransitionOverlapOffset;

}

@property (nonatomic,readonly) int containedTransitionOverlapOffset;              //@synthesize containedTransitionOverlapOffset=_containedTransitionOverlapOffset - In the implementation block
@property (assign,nonatomic) BOOL buildIntro;                                     //@synthesize buildIntro=_buildIntro - In the implementation block
@property (assign,nonatomic) BOOL buildOutro;                                     //@synthesize buildOutro=_buildOutro - In the implementation block
@property (assign,nonatomic) BOOL videoContainedWithinTransitions;                //@synthesize videoContainedWithinTransitions=_videoContainedWithinTransitions - In the implementation block
-(double)maximumDuration;
-(double)minimumDuration;
-(double)idealDuration;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(int)containedTransitionOverlapOffset;
-(BOOL)videoContainedWithinTransitions;
-(int)minimumPhotoFrameDuration;
-(void)setBuildIntro:(BOOL)arg1 ;
-(void)setVideoContainedWithinTransitions:(BOOL)arg1 ;
-(void)setBuildOutro:(BOOL)arg1 ;
-(NSRange)preferredInTransitionDurationRange;
-(NSRange)preferredOutTransitionDurationRange;
-(BOOL)buildIntro;
-(BOOL)buildOutro;
@end

